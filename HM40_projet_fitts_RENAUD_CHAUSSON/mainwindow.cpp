#include "mainwindow.h"
#include "ui_aide.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QRectF>
#include "dialogaide.h"


MainWindow::MainWindow(fittsModel *model,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
//    cible=NULL;
//    graphicsview=new magv(ui->frameQGraphicsView);
//    ui->frameLayout->addWidget(graphicsview);
//    scene = new QGraphicsScene(this);
//    scene->setSceneRect(QRectF(0,0, 640, 480));
//    graphicsview->setScene(scene);


    // On ajoute nous même le graphique CAR il ne peut pas être ajouter depuis l'éditeur
    graphicView = new testFitts(model);
    graphicView->setStyleSheet("background-color: white;");
    connect(graphicView, SIGNAL(onFinish(FittsModel*)), this, SLOT(onGraphFinish(FittsModel*)));
    connect(graphicView, SIGNAL(onTargetChange(int)), this, SLOT(onTargetChange(int)));
    ui->frameLayout->addWidget(graphicView);


    connect(ui->actionQuitter, SIGNAL(triggered()), this, SLOT(quitterSlot()));
    connect(ui->actionAide, SIGNAL(triggered()), this, SLOT(aideClicked()));
    connect(ui->actionParam_trage, SIGNAL(triggered()), this, SLOT(paraClicked()));
    connect(ui->pushButtonInfo, SIGNAL(clicked()), this, SLOT(aideClicked()));
    connect(ui->pushButtonParam, SIGNAL(clicked()), this, SLOT(paraClicked()));
    connect(ui->nbCible,SIGNAL(nbCibleChanged(int)),this,SLOT(nbCibleChanged(int)));
//    connect(graphicsview, SIGNAL(mousePressEventSignal(QMouseEvent *)), this, SLOT(cibleCliquee(QMouseEvent *)));


}

MainWindow::~MainWindow()
{

    delete ui;
}

void MainWindow::quitterSlot()

{
    QApplication::quit();

}


void MainWindow::aideClicked() {
    DialogAide *f=new DialogAide(this);
    f->show();
}

void MainWindow::paraClicked() {
    dialogPara *f=new dialogPara(model,this);
    f->show();
}

void MainWindow::nbCibleChanged(int value) {
    ui->nbCible->setText(QString::number(value));
}





//void MainWindow::creerCible(){
//    if (cible != NULL){
//        scene->removeItem(cible);
//        delete cible;
//        cible=NULL;
//    }
//    float xcentre=scene->width()/2;
//    float ycentre=scene->height()/2;
//    float largeur=scene->width()/10;
//    float hauteur=scene->height()/10;
//    QRectF qrect=QRectF(xcentre-largeur/2,ycentre-hauteur/2,largeur,hauteur);
//    cible=new QGraphicsEllipseItem(); //qrect,scene);
//    cible->setRect(qrect);
//    cible->setBrush(QColor("red"));
//    scene->addItem(cible);
//    cible->show();
//}

//void MainWindow::cibleCliquee(QMouseEvent *event){
//   cible->setBrush(QColor("black"));
//}



