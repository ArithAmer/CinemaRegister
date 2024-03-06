#include "welcome.h"
#include "ui_welcome.h"
#include "LoginWindow.h"
#include <QString>

Welcome::Welcome(QWidget *parent, QString x)
    : QWidget(parent)
    , ui(new Ui::Welcome)
{
    ui->setupUi(this);
    ui->label->setText("Welcome "+ x + ", ");
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

