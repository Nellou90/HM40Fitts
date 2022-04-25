#ifndef RESULTATS_H
#define RESULTATS_H

#include <QMainWindow>

#include <QWidget>
#include <QChart>
#include <QChartView>
#include <QVBoxLayout>
#include <QGroupBox>
#include "parametreModel.h"

#include <QApplication>
#include <QString>
#include <QMainWindow>
#include <QDebug>
#include <QTranslator>
#include <QSettings>
#include <QInputDialog>
#include <math.h>
#include <QChart>
#include <QLineSeries>
#include <QChartView>
#include <QBarSeries>
#include <QBarSet>
#include <QCategoryAxis>
#include <QVBoxLayout>
#include <QGroupBox>
#include <QLabel>
#include <QMessageBox>

#include "constant.h"

#include "aide.h"
#include "dialogpara.h"


QT_CHARTS_USE_NAMESPACE

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
    QChartView *createQChartView(QChart *chart);
    Ui::resultats *ui;
    QChart *buildGraph_1(parametreModel *fittsModel);
    QChart *buildGraph_2(parametreModel *fittsModel);
    QWidget *generateResultLayout(parametreModel *model, QChartView* chart);
    parametreModel *modelRes;

signals:
    void onResultsEvent(int);

private slots:
    void on_recommencer_clicked();
    void on_QuitterResult_clicked();
    void aideClickedRes();
    void paraClickedRes();
};

#endif // RESULTATS_H
