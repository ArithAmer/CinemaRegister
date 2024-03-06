#include "welcome.h"
#include "ui_welcome.h"

Welcome::Welcome(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Welcome)
{
    ui->setupUi(this);
}

Welcome::Welcome(QString x, LoginWindow * Log){
    ui->label->setText("Welcome "+ x + ", ");
    L = Log;
}
Welcome::~Welcome()
{
    delete ui;
}

void Welcome::on_logout_clicked()
{
    hide();
    L->show();
}

