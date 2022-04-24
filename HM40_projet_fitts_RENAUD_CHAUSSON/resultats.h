#ifndef RESULTATS_H
#define RESULTATS_H

#include <QMainWindow>

#include <QWidget>
#include <QChart>
#include <QChartView>
#include <QVBoxLayout>
#include <QGroupBox>
#include "parametreModel.h"


namespace Ui {
class resultats;
}

class resultats : public QMainWindow
{
    Q_OBJECT

public:
    explicit resultats(parametreModel *model,QWidget *parent = nullptr);

    ~resultats();

private:
    Ui::resultats *ui;
};

#endif // RESULTATS_H
