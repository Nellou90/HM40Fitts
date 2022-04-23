#ifndef DIALOGPARA_H
#define DIALOGPARA_H

#include <QDialog>
#include "fittsmodel.h"

namespace Ui {
class dialogPara;
}

class dialogPara : public QDialog
{
    Q_OBJECT

public:
    explicit dialogPara(fittsModel *model = NULL,QWidget *parent = nullptr);
    ~dialogPara();

private:
    Ui::dialogPara *ui;
    fittsModel * fittsModel;

    void setupData();

private slots:
    void on_validate_btn_clicked();
    void on_restore_default_clicked();

};

#endif // DIALOGPARA_H
