#include "welcome.h"
#include "ui_welcome.h"
#include "loginwindow.h"
#include <QString>

Welcome::Welcome(QWidget *parent, QString x, int age) :
    QDialog(parent),
    ui(new Ui::Welcome)
{
    ui->setupUi(this);
    ui->label->setText("Welcome "+ x + " " + QString::number(age));
}

Welcome::~Welcome()
{
    delete ui;
}

void Welcome::on_logout_clicked()
{
    hide();
    LoginWindow* L = new LoginWindow();
    L->show();

}

