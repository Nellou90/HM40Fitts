#include "mainwindow.h"
#include "ui_aide.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include "aide.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    connect(ui->actionQuitter, SIGNAL(triggered()), this, SLOT(quitterSlot()));
    connect(ui->actionAide, SIGNAL(triggered()), this, SLOT(aideClicked()));

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
    aide *f=new aide(this);
    f->show();
}



