#ifndef TESTFITTS_H
#define TESTFITTS_H
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
#include "mainwindow.h"

class testFitts
{

public:
    explicit testFitts(QWidget *parent = nullptr);
    ~testFitts();

    int cibleLeft = 0;
    int nbCible = 10;
    int minSize = 10;
    int maxSize = 150;

    void nextCible();
    testFitts();

    QGraphicsEllipseItem *firstCercle;

    QList<QPoint> clickPoints;
    QList<QPoint> cercleCenter;
    QList<int> cercleSize;
    QList<qint64> times;

    QElapsedTimer *timer;

public slots:
    void cibleClicked(int x, int y);
    void initGame();

};

#endif // TESTFITTS_H
