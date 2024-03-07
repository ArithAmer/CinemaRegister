#include <QMainWindow>
#include "ui_loginwindow.h"
#include "LoginWindow.h"
#include "Users.h"
#include "registerwindow.h"
#include "welcome.h"
#include <QString>
LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui->errors->setVisible(false);
}
void LoginWindow::on_login_clicked()
{
    QString username = ui->username->text();
    QString password = ui->password->text();
    int index = -1;
    for(int i = 0; i<usersCount; i++){
        if(username == usernames[i]){
            index = i;
            break;
        }
    }
    if(index == -1) ui->errors->setVisible(true);
    else{
        if(password == passwords[index]){
            hide();
            Welcome * wel = new Welcome(this, username, ages[index]);
            wel->show();
        }else{
            ui->errors->setVisible(true);
        }
    }
}
void LoginWindow::on_register_clicked()
{


}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButton_2_clicked()
{
    hide();
    RegisterWindow* reg = new RegisterWindow(this);
    reg->show();
}

