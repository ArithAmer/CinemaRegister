QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    LoginWindow.cpp \
    Users.cpp \
    main.cpp \
<<<<<<< HEAD
    mainwindow.cpp \
    registerwindow.cpp

HEADERS += \
    Users.h \
    mainwindow.h \
    registerwindow.h

FORMS += \
    mainwindow.ui \
    registerwindow.ui
=======
    welcome.cpp

HEADERS += \
    LoginWindow.h \
    welcome.h

FORMS += \
    LoginWindow.ui \
    welcome.ui
>>>>>>> a97dbdc10fca18cda76c8927f01885b6f03d28ff

TRANSLATIONS += \
    cinema_en_US.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
