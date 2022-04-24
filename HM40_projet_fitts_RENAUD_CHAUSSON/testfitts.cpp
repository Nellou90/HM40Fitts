#include "testfitts.h"

/*
Cette classe contient de nombreuse fonction
qui n'ont pas été créer par les auteurs du programme
elles ont été reprise à partir du programme initial à
modifier
*/

testFitts::testFitts(parametreModel *model)
{

    fittsmodel = model;

    qDebug() << fittsmodel->nbCible;

    // On met en place le widget
    setup();

    this->setMinimumSize(this->width(), this->height());

    // On lance le jeu
    initGame();

}


// Click listener
void testFitts::mousePressEvent(QMouseEvent *event) {
    cibleClicked(event->x(), event->y());
}

void testFitts::setup() {
    this->setHorizontalScrollBarPolicy( Qt::ScrollBarAlwaysOff);
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    QGraphicsScene *scene = new QGraphicsScene;
    this->fitInView(scene->sceneRect(),Qt::KeepAspectRatio);
    this->setScene(scene);
    scene->setSceneRect(0,0,this->width(),300);
}

void testFitts::initGame() {

    scene()->clear();

    this->fittsmodel->times.clear();

    this->fittsmodel->cibleLeft = this->fittsmodel->nbCible;

    if(this->fittsmodel->maxSize >= this->width() / 2)
        this->fittsmodel->maxSize = this->width() / 2;

    if(this->fittsmodel->maxSize >= this->height() / 2)
        this->fittsmodel->maxSize = this->height() / 2;

    qreal posX = scene()->width() / 2;
    qreal posY = scene()->height() / 2;
    int size = 100;

    scene()->addEllipse(posX - (size / 2), posY - (size / 2), size, size, QPen(QColor("#5c67ff")),QBrush(QColor("#5c67ff")));
}


void testFitts::cibleClicked(int x, int y) {
    if(this->fittsmodel->cercleCenter.isEmpty()) {
        qDebug() << "premier click";
        // Si vide alors premier click, on demarre le timer TODO: fix that
        this->timer = new QElapsedTimer;
        timer->start();

        // On démarre avec la première cible
        this->fittsmodel->clickPoints.append(QPoint(x,y));
        this->nextCible();
    }
    else {
        qDebug() << "click";
        QPointF coords = this->mapToScene(x,y);
        if(sqrt(pow(coords.x() - this->fittsmodel->cercleCenter.last().x(),2) + pow(coords.y() - this->fittsmodel->cercleCenter.last().y(),2)) <= this->fittsmodel->cercleSize.last() / 2) {
            // On stock le temps de click
            this->fittsmodel->times.append(timer->elapsed());
            // On restart le chrono
            timer->restart();

            // On stock la position du click
            this->fittsmodel->clickPoints.append(QPoint(x,y));
            this->nextCible();
        }
    }
}

void testFitts::nextCible() {
    if(!this->fittsmodel->cercleCenter.isEmpty())
        this->fittsmodel->cibleLeft--;
    //this->fittsView->updateTestMsg(); TODO:

    emit onTargetChange(this->fittsmodel->cibleLeft);
    scene()->clear();

    // On stop si c'est finis
    if(this->fittsmodel->cibleLeft == 0) {
        this->finish();
        return;
    }

    // On génère la taille du cercle rouge
    int size = QRandomGenerator::global()->bounded(this->fittsmodel->minSize, this->fittsmodel->maxSize);

    //qDebug() << "size " + QString::number(size);
    // Car on veut le rayon
    // On place le cercle dans la scene (Attention faut pas qu'il soit en dehors du cadre)
    int sceneW = int(scene()->width());
    int sceneH = int(scene()->height());

    //qDebug() << "sceneW " + QString::number(sceneW);
    //qDebug() << "sceneW " + QString::number(sceneH);

    int posX = QRandomGenerator::global()->bounded(sceneW);
    int posY = QRandomGenerator::global()->bounded(sceneH);

    //qDebug() << posX;
    //qDebug() << posY;

    // On stock les infos sur le cercle
    this->fittsmodel->cercleCenter.append(QPoint(int(posX),int(posY)));
    this->fittsmodel->cercleSize.append(size);

    // On place le cercle
    scene()->addEllipse(posX - (size / 2), posY - (size / 2), size, size, QPen(QColor("#ff6254")),QBrush(QColor("#ff6254")));
}

void testFitts::finish() {

    qDebug() << "Program finish";
    emit onFinish(fittsmodel);
    //this->fittsView->graphicView->setEnabled(false);
    //this->fittsView->resultBtn->setEnabled(true);
}
