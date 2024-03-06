/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *NameLayout;
    QLabel *NameLabel;
    QLineEdit *NameTextField;
    QLabel *NameLabelCheck;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *PassLayout;
    QLabel *PassLabel;
    QLineEdit *PassTextField;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *RePassLayout;
    QLabel *RePassLabel;
    QLineEdit *RePassTextField;
    QLabel *RePassLabelCheck;
    QGroupBox *BirthDateBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *MonthLayout;
    QLabel *MonthLabel;
    QComboBox *comboBoxMonth;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *DayLayout;
    QLabel *DayLabel;
    QLineEdit *NumberTextField;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *YearLayout;
    QLabel *YearLabel;
    QLineEdit *YearTextField;
    QLabel *LabelAgeCheck;
    QGroupBox *GenderBox;
    QRadioButton *maleRadio;
    QRadioButton *femaleRadio;
    QGroupBox *AccountTypeBox;
    QRadioButton *UserRadioButton;
    QRadioButton *AdminRadioButton;
    QGroupBox *GenresBox;
    QCheckBox *ActionCheckBox;
    QCheckBox *ComedyCheckBox;
    QCheckBox *RomanceCheckBox;
    QCheckBox *DramaCheckBox;
    QCheckBox *HorrorCheckBox;
    QCheckBox *OtherCheckBox;
    QPushButton *RegisterButton;
    QLabel *AllFieldCheckerLabel;

    void setupUi(QDialog *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName("RegisterWindow");
        RegisterWindow->resize(585, 557);
        horizontalLayoutWidget = new QWidget(RegisterWindow);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(40, 10, 461, 41));
        NameLayout = new QHBoxLayout(horizontalLayoutWidget);
        NameLayout->setObjectName("NameLayout");
        NameLayout->setContentsMargins(0, 0, 0, 0);
        NameLabel = new QLabel(horizontalLayoutWidget);
        NameLabel->setObjectName("NameLabel");

        NameLayout->addWidget(NameLabel);

        NameTextField = new QLineEdit(horizontalLayoutWidget);
        NameTextField->setObjectName("NameTextField");

        NameLayout->addWidget(NameTextField);

        NameLabelCheck = new QLabel(horizontalLayoutWidget);
        NameLabelCheck->setObjectName("NameLabelCheck");

        NameLayout->addWidget(NameLabelCheck);

        horizontalLayoutWidget_2 = new QWidget(RegisterWindow);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(40, 60, 331, 31));
        PassLayout = new QHBoxLayout(horizontalLayoutWidget_2);
        PassLayout->setObjectName("PassLayout");
        PassLayout->setContentsMargins(0, 0, 0, 0);
        PassLabel = new QLabel(horizontalLayoutWidget_2);
        PassLabel->setObjectName("PassLabel");

        PassLayout->addWidget(PassLabel);

        PassTextField = new QLineEdit(horizontalLayoutWidget_2);
        PassTextField->setObjectName("PassTextField");

        PassLayout->addWidget(PassTextField);

        horizontalLayoutWidget_3 = new QWidget(RegisterWindow);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(40, 100, 461, 41));
        RePassLayout = new QHBoxLayout(horizontalLayoutWidget_3);
        RePassLayout->setObjectName("RePassLayout");
        RePassLayout->setContentsMargins(0, 0, 0, 0);
        RePassLabel = new QLabel(horizontalLayoutWidget_3);
        RePassLabel->setObjectName("RePassLabel");

        RePassLayout->addWidget(RePassLabel);

        RePassTextField = new QLineEdit(horizontalLayoutWidget_3);
        RePassTextField->setObjectName("RePassTextField");

        RePassLayout->addWidget(RePassTextField);

        RePassLabelCheck = new QLabel(horizontalLayoutWidget_3);
        RePassLabelCheck->setObjectName("RePassLabelCheck");

        RePassLayout->addWidget(RePassLabelCheck);

        BirthDateBox = new QGroupBox(RegisterWindow);
        BirthDateBox->setObjectName("BirthDateBox");
        BirthDateBox->setGeometry(QRect(40, 140, 351, 121));
        verticalLayoutWidget = new QWidget(BirthDateBox);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 30, 111, 80));
        MonthLayout = new QVBoxLayout(verticalLayoutWidget);
        MonthLayout->setObjectName("MonthLayout");
        MonthLayout->setContentsMargins(0, 0, 0, 0);
        MonthLabel = new QLabel(verticalLayoutWidget);
        MonthLabel->setObjectName("MonthLabel");

        MonthLayout->addWidget(MonthLabel);

        comboBoxMonth = new QComboBox(verticalLayoutWidget);
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->setObjectName("comboBoxMonth");

        MonthLayout->addWidget(comboBoxMonth);

        verticalLayoutWidget_2 = new QWidget(BirthDateBox);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(120, 30, 101, 80));
        DayLayout = new QVBoxLayout(verticalLayoutWidget_2);
        DayLayout->setObjectName("DayLayout");
        DayLayout->setContentsMargins(0, 0, 0, 0);
        DayLabel = new QLabel(verticalLayoutWidget_2);
        DayLabel->setObjectName("DayLabel");

        DayLayout->addWidget(DayLabel);

        NumberTextField = new QLineEdit(verticalLayoutWidget_2);
        NumberTextField->setObjectName("NumberTextField");

        DayLayout->addWidget(NumberTextField);

        verticalLayoutWidget_3 = new QWidget(BirthDateBox);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(220, 30, 111, 80));
        YearLayout = new QVBoxLayout(verticalLayoutWidget_3);
        YearLayout->setObjectName("YearLayout");
        YearLayout->setContentsMargins(0, 0, 0, 0);
        YearLabel = new QLabel(verticalLayoutWidget_3);
        YearLabel->setObjectName("YearLabel");

        YearLayout->addWidget(YearLabel);

        YearTextField = new QLineEdit(verticalLayoutWidget_3);
        YearTextField->setObjectName("YearTextField");

        YearLayout->addWidget(YearTextField);

        LabelAgeCheck = new QLabel(RegisterWindow);
        LabelAgeCheck->setObjectName("LabelAgeCheck");
        LabelAgeCheck->setGeometry(QRect(420, 180, 141, 61));
        GenderBox = new QGroupBox(RegisterWindow);
        GenderBox->setObjectName("GenderBox");
        GenderBox->setGeometry(QRect(40, 270, 151, 91));
        maleRadio = new QRadioButton(GenderBox);
        maleRadio->setObjectName("maleRadio");
        maleRadio->setGeometry(QRect(20, 30, 110, 24));
        femaleRadio = new QRadioButton(GenderBox);
        femaleRadio->setObjectName("femaleRadio");
        femaleRadio->setGeometry(QRect(20, 60, 110, 24));
        AccountTypeBox = new QGroupBox(RegisterWindow);
        AccountTypeBox->setObjectName("AccountTypeBox");
        AccountTypeBox->setGeometry(QRect(230, 270, 191, 91));
        UserRadioButton = new QRadioButton(AccountTypeBox);
        UserRadioButton->setObjectName("UserRadioButton");
        UserRadioButton->setGeometry(QRect(20, 30, 110, 24));
        AdminRadioButton = new QRadioButton(AccountTypeBox);
        AdminRadioButton->setObjectName("AdminRadioButton");
        AdminRadioButton->setGeometry(QRect(20, 60, 110, 24));
        GenresBox = new QGroupBox(RegisterWindow);
        GenresBox->setObjectName("GenresBox");
        GenresBox->setGeometry(QRect(40, 370, 381, 121));
        ActionCheckBox = new QCheckBox(GenresBox);
        ActionCheckBox->setObjectName("ActionCheckBox");
        ActionCheckBox->setGeometry(QRect(10, 30, 91, 24));
        ComedyCheckBox = new QCheckBox(GenresBox);
        ComedyCheckBox->setObjectName("ComedyCheckBox");
        ComedyCheckBox->setGeometry(QRect(10, 60, 91, 24));
        RomanceCheckBox = new QCheckBox(GenresBox);
        RomanceCheckBox->setObjectName("RomanceCheckBox");
        RomanceCheckBox->setGeometry(QRect(10, 90, 91, 24));
        DramaCheckBox = new QCheckBox(GenresBox);
        DramaCheckBox->setObjectName("DramaCheckBox");
        DramaCheckBox->setGeometry(QRect(130, 30, 91, 24));
        HorrorCheckBox = new QCheckBox(GenresBox);
        HorrorCheckBox->setObjectName("HorrorCheckBox");
        HorrorCheckBox->setGeometry(QRect(130, 60, 91, 24));
        OtherCheckBox = new QCheckBox(GenresBox);
        OtherCheckBox->setObjectName("OtherCheckBox");
        OtherCheckBox->setGeometry(QRect(130, 90, 91, 24));
        RegisterButton = new QPushButton(RegisterWindow);
        RegisterButton->setObjectName("RegisterButton");
        RegisterButton->setGeometry(QRect(50, 510, 93, 29));
        AllFieldCheckerLabel = new QLabel(RegisterWindow);
        AllFieldCheckerLabel->setObjectName("AllFieldCheckerLabel");
        AllFieldCheckerLabel->setGeometry(QRect(170, 510, 181, 20));

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QDialog *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "Dialog", nullptr));
        NameLabel->setText(QCoreApplication::translate("RegisterWindow", "Username:               ", nullptr));
        NameLabelCheck->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">* Already Existing</span></p></body></html>", nullptr));
        PassLabel->setText(QCoreApplication::translate("RegisterWindow", "Password:                ", nullptr));
        RePassLabel->setText(QCoreApplication::translate("RegisterWindow", "Re-Type Password:  ", nullptr));
        RePassLabelCheck->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">* Already Existing</span></p></body></html>", nullptr));
        BirthDateBox->setTitle(QCoreApplication::translate("RegisterWindow", "Date of Birth", nullptr));
        MonthLabel->setText(QCoreApplication::translate("RegisterWindow", "Month", nullptr));
        comboBoxMonth->setItemText(0, QCoreApplication::translate("RegisterWindow", "Jan", nullptr));
        comboBoxMonth->setItemText(1, QCoreApplication::translate("RegisterWindow", "Feb", nullptr));
        comboBoxMonth->setItemText(2, QCoreApplication::translate("RegisterWindow", "Mar", nullptr));
        comboBoxMonth->setItemText(3, QCoreApplication::translate("RegisterWindow", "April", nullptr));
        comboBoxMonth->setItemText(4, QCoreApplication::translate("RegisterWindow", "May", nullptr));
        comboBoxMonth->setItemText(5, QCoreApplication::translate("RegisterWindow", "June", nullptr));
        comboBoxMonth->setItemText(6, QCoreApplication::translate("RegisterWindow", "July", nullptr));
        comboBoxMonth->setItemText(7, QCoreApplication::translate("RegisterWindow", "Aug", nullptr));
        comboBoxMonth->setItemText(8, QCoreApplication::translate("RegisterWindow", "Sept", nullptr));
        comboBoxMonth->setItemText(9, QCoreApplication::translate("RegisterWindow", "Oct", nullptr));
        comboBoxMonth->setItemText(10, QCoreApplication::translate("RegisterWindow", "Nov", nullptr));
        comboBoxMonth->setItemText(11, QCoreApplication::translate("RegisterWindow", "Dec", nullptr));

        DayLabel->setText(QCoreApplication::translate("RegisterWindow", "Day", nullptr));
        YearLabel->setText(QCoreApplication::translate("RegisterWindow", "Year", nullptr));
        LabelAgeCheck->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff1500;\">* Age is less than 12</span></p></body></html>", nullptr));
        GenderBox->setTitle(QCoreApplication::translate("RegisterWindow", "Gender", nullptr));
        maleRadio->setText(QCoreApplication::translate("RegisterWindow", "Male", nullptr));
        femaleRadio->setText(QCoreApplication::translate("RegisterWindow", "Female", nullptr));
        AccountTypeBox->setTitle(QCoreApplication::translate("RegisterWindow", "Account Type", nullptr));
        UserRadioButton->setText(QCoreApplication::translate("RegisterWindow", "User", nullptr));
        AdminRadioButton->setText(QCoreApplication::translate("RegisterWindow", "Admin", nullptr));
        GenresBox->setTitle(QCoreApplication::translate("RegisterWindow", "Favourite Genre(s)", nullptr));
        ActionCheckBox->setText(QCoreApplication::translate("RegisterWindow", "Action", nullptr));
        ComedyCheckBox->setText(QCoreApplication::translate("RegisterWindow", "Comedy", nullptr));
        RomanceCheckBox->setText(QCoreApplication::translate("RegisterWindow", "Romance", nullptr));
        DramaCheckBox->setText(QCoreApplication::translate("RegisterWindow", "Drama", nullptr));
        HorrorCheckBox->setText(QCoreApplication::translate("RegisterWindow", "Horror", nullptr));
        OtherCheckBox->setText(QCoreApplication::translate("RegisterWindow", "Other", nullptr));
        RegisterButton->setText(QCoreApplication::translate("RegisterWindow", "Register", nullptr));
        AllFieldCheckerLabel->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">* All fields must be filled</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
