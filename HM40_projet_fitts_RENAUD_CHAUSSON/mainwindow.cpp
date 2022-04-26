#include "mainwindow.h"
#include "ui_aide.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QRectF>
#include "dialogaide.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_settings(new QSettings("options.ini", QSettings::IniFormat))
{

    ui->setupUi(this);
    // Ligne qui crée le modèle de paramètre contenant les paramètres liées au test Fitts et et les résultats du test tel que la moyenne ou encore l'écart-type.
    model = new parametreModel;


    // On ajoute nous même le graphique pour une question de simplicité lors de la création de la scene qui acceuillera le test fitts.
    graphicView = new testFitts(model);
    graphicView->setStyleSheet("background-color: white;");
    connect(graphicView, SIGNAL(onFinish(parametreModel*)), this, SLOT(openResults()));
    connect(graphicView, SIGNAL(onTargetChange(int)), this, SLOT(onTargetChange(int)));
    ui->frameLayout->addWidget(graphicView);

    //methode connect qui permet de relié signal et slot pour connecté l'IHM Qt designer.
    connect(ui->actionQuitter, SIGNAL(triggered()), this, SLOT(quitterSlot()));
    connect(ui->actionAide, SIGNAL(triggered()), this, SLOT(aideClicked()));
    connect(ui->actionParam_trage, SIGNAL(triggered()), this, SLOT(paraClicked()));
    connect(ui->pushButtonInfo, SIGNAL(clicked()), this, SLOT(aideClicked()));
    connect(ui->pushButtonParam, SIGNAL(clicked()), this, SLOT(paraClicked()));
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(on_recommencer_clickedMain()));


}

//Destructor de l'objet ui et model
MainWindow::~MainWindow()
{
    delete model;
    delete ui;
}

//Slot qui permet de quitter l'application
void MainWindow::quitterSlot()

{
    QApplication::quit();

}

//Slot qui permet d'ouvrir le pop-up Aide
void MainWindow::aideClicked() {
    DialogAide *f=new DialogAide(this);
    f->show();
}


//Slot qui permet d'actualiser le nombre de cible qu'il reste à cliquer dans le jeu Fitts
void MainWindow::onTargetChange(int value) {
    ui->nbCibleLabel->setText(QString::number(value));
}

//Slot qui permet d'ouvrir le pop-up parmaètre du test.
void MainWindow::paraClicked() {
    dialogPara *f=new dialogPara(model, this);
//    connect(f, SIGNAL(onSettingsEvent(int,void*)), this, SLOT(onSettingsEvent(int,void*)));
    f->open();
}

//Slot qui permet d'ouvrir la fenetre des résultats.
void MainWindow::openResults() {
    qDebug() << "Opening results";
    resultats *f = new resultats(model, this);
    f->show();
    this->hide();
}


//Slot qui permet de recommencer le jeu sur la page principale si jamais les paramètres ne sont pas bon
void MainWindow::on_recommencer_clickedMain()
{
    this->close();
    MainWindow *f=new MainWindow(this);
    f->show();
}






