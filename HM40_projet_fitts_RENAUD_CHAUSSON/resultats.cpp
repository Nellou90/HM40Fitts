#include "resultats.h"
#include "ui_resultats.h"

resultats::resultats(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::resultats)
{
    ui->setupUi(this);
}

resultats::~resultats()
{
    delete ui;
}
