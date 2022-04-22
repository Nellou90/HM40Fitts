QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dialogaide.cpp \
    dialogpara.cpp \
    main.cpp \
    mainwindow.cpp \
    resultats.cpp \
    testfitts.cpp

HEADERS += \
    dialogaide.h \
    dialogpara.h \
    mainwindow.h \
    resultats.h \
    testfitts.h

FORMS += \
    dialogaide.ui \
    dialogpara.ui \
    mainwindow.ui \
    resultats.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc

DISTFILES +=
