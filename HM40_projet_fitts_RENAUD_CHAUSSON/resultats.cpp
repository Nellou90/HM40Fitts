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

    //container
    // TabWidget
    QTabWidget *tab = new QTabWidget();

    // createQChartView(buildGraph_1(model))

    tab->addTab(generateResultLayout(model,createQChartView(buildGraph_1(model))), "Graphique 1");
    tab->addTab(createQChartView(buildGraph_2(model)), "Graphique 2");

    ui->LayoutGraphe->addWidget(tab);

    connect(ui->recommencer, SIGNAL(clicked()), this, SLOT(on_recommencer_clicked()));
    connect(ui->QuitterResult, SIGNAL(clicked()), this, SLOT(on_QuitterResult_clicked()));
    connect(ui->actionAide, SIGNAL(triggered()), this, SLOT(aideClickedRes()));
    connect(ui->actionQuitter, SIGNAL(triggered()), this, SLOT(on_QuitterResult_clicked()));
    connect(ui->actionParam_trages, SIGNAL(triggered()), this, SLOT(paraClickedRes()));
}

resultats::~resultats()
{
    delete ui;
}


QChartView *resultats::createQChartView(QChart *chart) {
    QChartView *plot = new QChartView;

    // Using utils function, building the chart
    plot->setChart(chart);
    plot->setRenderHint(QPainter::Antialiasing);
    plot->setStyleSheet("background: white");
    return plot;
}

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




void resultats::on_recommencer_clicked()
{
    this->close();
    //QMessageBox *f =new QMessageBox;
    //f->setText("Fonction non implémentée !");
    MainWindow *f=new MainWindow(this);
    f->show();
}


void resultats::on_QuitterResult_clicked()
{
   this->close();
}

void resultats::aideClickedRes() {
    DialogAide *f=new DialogAide(this);
    f->show();
}

void resultats::paraClickedRes() {
    dialogPara *f=new dialogPara(modelRes, this);
//    connect(f, SIGNAL(onSettingsEvent(int,void*)), this, SLOT(onSettingsEvent(int,void*)));
    f->open();
}

