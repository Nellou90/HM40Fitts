#include "dialogaide.h"
#include "ui_dialogaide.h"

DialogAide::DialogAide(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAide)
{
    ui->setupUi(this);
}

DialogAide::~DialogAide()
{
    delete ui;
}
