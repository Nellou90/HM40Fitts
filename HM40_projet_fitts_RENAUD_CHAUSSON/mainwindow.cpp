#include "mainwindow.h"
#include "ui_aide.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include "dialogaide.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    connect(ui->actionQuitter, SIGNAL(triggered()), this, SLOT(quitterSlot()));
    connect(ui->actionAide, SIGNAL(triggered()), this, SLOT(aideClicked()));
    connect(ui->pushButtonInfo, SIGNAL(clicked()), this, SLOT(aideClicked()));
    connect(ui->pushButtonParam, SIGNAL(clicked()), this, SLOT(paraClicked()));

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
    dialogPara *f=new dialogPara(this);
    f->show();
}



