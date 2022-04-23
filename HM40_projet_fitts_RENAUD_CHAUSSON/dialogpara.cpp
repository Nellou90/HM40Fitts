#include "dialogpara.h"
#include "ui_dialogpara.h"

dialogPara::dialogPara(class fittsModel *model, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogPara)
{
    ui->setupUi(this);

    if(model == NULL)
        fittsModel = new class fittsModel();
    else
        fittsModel = model;

    setupData();
}

dialogPara::~dialogPara()
{
    delete ui;
}


void dialogPara::on_validate_btn_clicked()
{
    //TODO: put some constraint ? => limit a to some values etc..
    fittsModel->a = ui->edit_a->value();
    fittsModel->b = ui->edit_b->value();

    fittsModel->nbCible = ui->nbCibleSpinBox->value();
    fittsModel->minSize = ui->TMin->value(); // TODO: checking min < max STRICT
    fittsModel->maxSize = ui->TMax->value();

}

void dialogPara::setupData() {
    ui->edit_a->setValue(fittsModel->a);
    ui->edit_b->setValue(fittsModel->b);

    ui->nbCibleSpinBox->setValue(fittsModel->nbCible);
    ui->TMin->setValue(fittsModel->minSize);
    ui->TMax->setValue(fittsModel->maxSize);
}

void dialogPara::on_restore_default_clicked()
{
    fittsModel = new class fittsModel();
    setupData();
}
