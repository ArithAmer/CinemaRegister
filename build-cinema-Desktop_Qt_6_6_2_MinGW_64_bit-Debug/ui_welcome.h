/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Welcome
{
public:
    QGraphicsView *graphicsView;
    QLabel *label;
    QPushButton *logout;

    void setupUi(QWidget *Welcome)
    {
        if (Welcome->objectName().isEmpty())
            Welcome->setObjectName("Welcome");
        Welcome->resize(800, 600);
        graphicsView = new QGraphicsView(Welcome);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(75, 121, 641, 361));
        label = new QLabel(Welcome);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 70, 291, 20));
        logout = new QPushButton(Welcome);
        logout->setObjectName("logout");
        logout->setGeometry(QRect(100, 510, 83, 29));

        retranslateUi(Welcome);

        QMetaObject::connectSlotsByName(Welcome);
    } // setupUi

    void retranslateUi(QWidget *Welcome)
    {
        Welcome->setWindowTitle(QCoreApplication::translate("Welcome", "Form", nullptr));
        label->setText(QCoreApplication::translate("Welcome", "Hello", nullptr));
        logout->setText(QCoreApplication::translate("Welcome", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Welcome: public Ui_Welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
