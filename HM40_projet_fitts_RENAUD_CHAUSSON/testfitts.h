#ifndef TESTFITTS_H
#define TESTFITTS_H

#include <QObject>
#include <QElapsedTimer>

class MainWindow;

class TestFitts
{
private:
    void nextCible();
    MainWindow *fittsModel;

    QElapsedTimer *timer;

public slots:
    void cibleClicked(int x, int y);
};

#endif // TESTFITTS_H
