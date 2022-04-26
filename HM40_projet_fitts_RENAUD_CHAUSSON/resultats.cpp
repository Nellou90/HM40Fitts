#include "resultats.h"
#include "ui_resultats.h"
#include "dialogaide.h"
#include "ui_dialogaide.h"
#include "dialogpara.h"
#include "ui_dialogpara.h"
#include "parametreModel.h"

#include "mainwindow.h"
#include "ui_mainwindow.h"

resultats::resultats(parametreModel *model,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::resultats)
{
    ui->setupUi(this);
    modelRes = new parametreModel;

    // TabWidget qui sera le lit des graphiques
    QTabWidget *tab = new QTabWidget();

    // ajouts des graphes dans un layout dédié
    tab->addTab(generateResultLayout(model,createQChartView(buildGraph_1(model))), "Graphique 1");
    tab->addTab(createQChartView(buildGraph_2(model)), "Graphique 2");

    //Ajout du widget graphe à la fenetre résultat
    ui->LayoutGraphe->addWidget(tab);

    //Connection des différents boutons de la fenetre resultats
    connect(ui->recommencer, SIGNAL(clicked()), this, SLOT(on_recommencer_clicked()));
    connect(ui->QuitterResult, SIGNAL(clicked()), this, SLOT(on_QuitterResult_clicked()));
    connect(ui->actionAide, SIGNAL(triggered()), this, SLOT(aideClickedRes()));
    connect(ui->actionQuitter, SIGNAL(triggered()), this, SLOT(on_QuitterResult_clicked()));
    connect(ui->actionParam_trages, SIGNAL(triggered()), this, SLOT(paraClickedRes()));
}

//destroyeur fenetre résultat
resultats::~resultats()
{
    delete ui;
}

//Création d'une chart view pour la mise en page des graphiques
QChartView *resultats::createQChartView(QChart *chart) {
    QChartView *plot = new QChartView;

    // Utilisation de fonctions utiles pour la création de la chart view
    plot->setChart(chart);
    plot->setRenderHint(QPainter::Antialiasing);
    plot->setStyleSheet("background: white");
    return plot;
}

//création du deuxième graphique
QChart *resultats::buildGraph_2(parametreModel *fittsModel) {
    QChart *chart = new QChart;

    chart->setTitle("Temps d'exécution en fonction de la distance relative");
    chart->setAnimationOptions(QChart::AllAnimations);
    chart->createDefaultAxes();
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    QLineSeries *fittsSeries = new QLineSeries;
    fittsSeries->setName("Courbe théorique");
    QCategoryAxis *axis = new QCategoryAxis;

    QList<double> fittsValues;

    for(int i = 0; i < fittsModel->nbCible; ++i) {
        // Calculé la valeur théorique
        double D = sqrt(pow(fittsModel->clickPoints[i].x() - fittsModel->cercleCenter[i].x(),2) + pow(fittsModel->clickPoints[i].y() - fittsModel->cercleCenter[i].y(),2));
        // On multiplie par 1000 pour être en ms
        double value = log2((((2*D) / fittsModel->cercleSize[i]) + 1));
        fittsValues.append(value);
        fittsSeries->append(i,value);

        axis->append(QString::number(value),i);
    }

    axis->setLabelsPosition(QCategoryAxis::AxisLabelsPositionOnValue);
    axis->setTitleText("log2(2D/L)");

    chart->addSeries(fittsSeries);

    chart->setAxisX(axis,fittsSeries);

    QValueAxis *axisY = new QValueAxis;
    axisY->setTitleText("temps (en ms)");
    chart->setAxisY(axisY,fittsSeries);

    return chart;
}


//Création du premier graphique
QChart *resultats::buildGraph_1(parametreModel *fittsModel) {

    QChart *chart = new QChart;

    chart->setTitle("Résultats loi Fitts");
    chart->setAnimationOptions(QChart::AllAnimations);
    chart->createDefaultAxes();
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    QLineSeries *expSeries = new QLineSeries;
    expSeries->setName("Courbe expérimentale");
    QLineSeries *fittsSeries = new QLineSeries;
    fittsSeries->setName("Courbe théorique");
    QCategoryAxis *axis = new QCategoryAxis;

    QList<double> fittsValues;

    for(int i = 0; i < fittsModel->nbCible; ++i) {
        double T = fittsModel->times[i];
        expSeries->append(i,T);


        // Calculé la valeur théorique
        double D = sqrt(pow(fittsModel->clickPoints[i].x() - fittsModel->cercleCenter[i].x(),2) + pow(fittsModel->clickPoints[i].y() - fittsModel->cercleCenter[i].y(),2));
        // On multiplie par 1000 pour être en ms
        double value = (fittsModel->a * 1000) + ((fittsModel->b * 1000) *  log2((D / fittsModel->cercleSize[i]) + 1));
        fittsValues.append(value);
        fittsSeries->append(i,value);

        axis->append(QString::number(i + 1) + "<br />T: "+QString::number(T)+"<br />D: " + QString::number(D),i);
    }

    axis->setLabelsPosition(QCategoryAxis::AxisLabelsPositionOnValue);

    chart->addSeries(expSeries);
    chart->addSeries(fittsSeries);

    chart->setAxisX(axis,expSeries);
    chart->setAxisX(axis,fittsSeries);

    QValueAxis *axisY = new QValueAxis;
    axisY->setTitleText("temps (en ms)");
    chart->setAxisY(axisY,expSeries);



    // Calcul des valeurs
    // Moyennes
    QList<double> diffValues;
    double diffMoy = 0;

    for (int i = 0; i < fittsValues.size(); ++i) {
        diffValues.append(fabs(fittsValues[i] - fittsModel->times[i]));
        diffMoy += fabs(fittsValues[i] - fittsModel->times[i]);
    }
    diffMoy /= fittsValues.size();

    // On stock la difference de moyenne
    fittsModel->diffMoy = fabs(diffMoy);


    // Ecart type
    double variance = 0;

    for (int i = 0; i < fittsValues.size(); ++i) {
        variance += pow(diffValues[i] - diffMoy,2);
    }
    variance /= fittsValues.size();

    double ecartType = sqrt(variance);

    // On stock l'ecart type
    fittsModel->ecartType = ecartType;
    // On stock l'erreur type
    fittsModel->erreurType = fabs(ecartType / sqrt(fittsValues.size()));

    // On stock itc 95%
    fittsModel->itc95 = 2 * fittsModel->erreurType;

    return chart;
}

//Génération du Layout acceuillant les deux graphiques
QWidget *resultats::generateResultLayout(parametreModel *model, QChartView* chart) {
    QWidget *central = new QWidget;
    central->setStyleSheet("background: white");
    QVBoxLayout *resultLayout = new QVBoxLayout(central);


    resultLayout->addWidget(chart);

    QGroupBox *resultBox =  new QGroupBox("Stats");
    resultLayout->addWidget(resultBox);
    QGridLayout *resultBoxLayout = new QGridLayout(resultBox);

    QLabel *label = new QLabel("Ecart-Type : ");
    resultBoxLayout->addWidget(label,0,0);
    QLabel *ecartType = new QLabel(QString::number(model->ecartType));
    resultBoxLayout->addWidget(ecartType,0,1);

    label = new QLabel("Erreur-Type : ");
    resultBoxLayout->addWidget(label,1,0);
    QLabel *erreurType = new QLabel(QString::number(model->erreurType));
    resultBoxLayout->addWidget(erreurType,1,1);

    label = new QLabel("Différence moyenne : ");
    resultBoxLayout->addWidget(label,0,2);
    QLabel *diffMoy = new QLabel(QString::number(model->diffMoy));
    resultBoxLayout->addWidget(diffMoy,0,3);

    label = new QLabel("Intervalle de confiance à 95% : ");
    resultBoxLayout->addWidget(label,1,2);
    QLabel *itc95 = new QLabel(QString::number(model->itc95));
    resultBoxLayout->addWidget(itc95,1,3);

    resultBoxLayout->setColumnStretch(1,10);
    resultBoxLayout->setColumnStretch(3,10);

    resultLayout->addWidget(resultBox);
    return central;
}



//Slot qui permet de recommencer le test depuis la fenetre resultats. Cependant, il y a un problème : deux mainWindows se créent et nous n'avons pas réussir à régler ce problème.
void resultats::on_recommencer_clicked()
{
    this->close();
    MainWindow *f=new MainWindow(this);
    f->show();

}

//Slot qui permet de quitter l'application
void resultats::on_QuitterResult_clicked()
{
   this->close();
}

//Slot qui permet d'ouvrir le pop-up aide
void resultats::aideClickedRes() {
    DialogAide *f=new DialogAide(this);
    f->show();
}

//Slot qui permet d'ouvrir le pop-up parametre
void resultats::paraClickedRes() {
    dialogPara *f=new dialogPara(modelRes, this);
//    connect(f, SIGNAL(onSettingsEvent(int,void*)), this, SLOT(onSettingsEvent(int,void*)));
    f->open();
}

