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
#include <QPoint>
#include <QList>
#include <QElapsedTimer>
#include <QObject>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


    QList<QPoint> clickPoints;
    QList<QPoint> cercleCenter;
    QList<int> cercleSize;
    QList<qint64> times;

    QElapsedTimer *timer;

    void nextCible();


private:
    Ui::MainWindow *ui;
    Ui::aide *aidePopUp;
    Ui::dialogPara *paraPopUp;


private slots:
    void quitterSlot();
    void aideClicked();
    void paraClicked();
    void cibleClicked(int x, int y);

};
#endif // MAINWINDOW_H
