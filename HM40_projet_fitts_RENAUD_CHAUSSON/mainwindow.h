#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QMessageBox>
#include "aide.h"
#include "dialogpara.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QMouseEvent>
#include <QGraphicsEllipseItem>
#include <QPoint>
#include <QList>
#include <QElapsedTimer>
#include <QObject>
#include "parametreModel.h"
#include "testfitts.h"
#include <QSettings>
#include <QProcess>

#include "constant.h"

#include "resultats.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    QLabel *information;

    QSettings* m_settings;

    testFitts *graphicView;
    parametreModel *model;



private slots:

    void quitterSlot();
    void aideClicked();
    void paraClicked();
    void onTargetChange(int);
    void openResults();
    void on_recommencer_clickedMain();




};
#endif // MAINWINDOW_H
