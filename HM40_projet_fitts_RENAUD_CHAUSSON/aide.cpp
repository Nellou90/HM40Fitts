#include "aide.h"
#include "ui_aide.h"

aide::aide(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::aide)
{
    ui->setupUi(this);
}

aide::~aide()
{
    delete ui;
}
