#include "dialogpara.h"
#include "ui_dialogpara.h"

dialogPara::dialogPara(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogPara)
{
    ui->setupUi(this);
}

dialogPara::~dialogPara()
{
    delete ui;
}
