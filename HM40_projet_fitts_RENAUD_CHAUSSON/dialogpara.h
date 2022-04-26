#ifndef DIALOGPARA_H
#define DIALOGPARA_H

#include <QDialog>
#include "parametreModel.h"
#include "constant.h"

namespace Ui {
class dialogPara;
}

class dialogPara : public QDialog
{
    Q_OBJECT

public:
    explicit dialogPara(parametreModel *model = NULL,QWidget *parent = nullptr);
    ~dialogPara();

signals:
    //void onSettingsEvent(int, void *);

private slots:
    void accept();

private:
    Ui::dialogPara *ui;
    parametreModel *temp;


    void setupData();

};

#endif // DIALOGPARA_H
