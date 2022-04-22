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

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class magv : public QGraphicsView
{
    Q_OBJECT

public:
    magv(QWidget *parent = nullptr):QGraphicsView(parent){};
    ~magv(){};
public:

signals:
    void mousePressEventSignal(QMouseEvent *);
public slots:
    void mousePressEvent(QMouseEvent *event){
        emit(mousePressEventSignal(event));
    };
};


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    Ui::aide *aidePopUp;
    Ui::dialogPara *paraPopUp;

    QGraphicsScene *scene;
    QGraphicsEllipseItem *cible;
    magv * graphicsview;

private slots:
    void quitterSlot();
    void aideClicked();
    void paraClicked();
    void creerCible();
    void cibleCliquee(QMouseEvent *event);



};
#endif // MAINWINDOW_H
