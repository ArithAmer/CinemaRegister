#include "LoginWindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include "registerwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "cinema_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    RegisterWindow R;
    LoginWindow L;
    L.show();
    return a.exec();
}
