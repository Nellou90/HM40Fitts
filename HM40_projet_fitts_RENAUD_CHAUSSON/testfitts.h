#ifndef TESTFITTS_H
#define TESTFITTS_H
#include <QGraphicsView>
#include <QMouseEvent>
#include <QGraphicsView>
#include <QDebug>
#include <QElapsedTimer>
#include <math.h>
#include <QLayout>
#include <QRandomGenerator>
#include "parametreModel.h"

class testFitts : public QGraphicsView
{
    Q_OBJECT

public:
     testFitts(parametreModel *parent = NULL);


signals:
    void onFinish(parametreModel*);
    void onTargetChange(int targetLeft);

protected:
    void mousePressEvent(QMouseEvent *event);

private:
    void setup();
    void initGame();
    void cibleClicked(int x, int y);
    void nextCible();
    void finish();
    void calculateResult();
    parametreModel * fittsmodel;
    QElapsedTimer *timer;

};

#endif // TESTFITTS_H
