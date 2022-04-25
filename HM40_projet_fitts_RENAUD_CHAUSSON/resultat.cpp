#include "resultat.h"
#include "ui_resultat.h"

resultat::resultat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::resultat)
{
    ui->setupUi(this);
}

resultat::~resultat()
{
    delete ui;
}
