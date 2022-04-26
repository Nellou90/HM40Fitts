#include "dialogpara.h"
#include "ui_dialogpara.h"
#include <QDebug>

dialogPara::dialogPara(parametreModel *model, QWidget *parent) :
    QDialog (parent),
    ui(new Ui::dialogPara)
{

    ui->setupUi(this);
    temp = model;
    setupData();
    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(accept()));


}

dialogPara::~dialogPara()
{
    delete ui;
}



//Donne les valeurs initiales aux paramètres du test
void dialogPara::setupData() {
    ui->edit_a->setValue(temp->a);
    ui->edit_b->setValue(temp->b);

    ui->nbCibleSpinBox->setValue(temp->nbCible);
    ui->TMin->setValue(temp->minSize);
    ui->TMax->setValue(temp->maxSize);
}

//Permet de sauvegarder les valeur donné par l'utilisateur aux paramètres
void dialogPara::accept()
{
    //TODO: put some constraint ? => limit a to some values etc..
    temp->a = ui->edit_a->value();
    temp->b = ui->edit_b->value();
    temp->nbCible = ui->nbCibleSpinBox->value();
    temp->minSize = ui->TMin->value(); // TODO: checking min < max STRICT
    temp->maxSize = ui->TMax->value();
    temp->cibleLeft = ui->nbCibleSpinBox->value();
    qDebug() << ui->nbCibleSpinBox->value();
    QDialog::accept();
}

