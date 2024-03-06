#include "ui_loginwindow.h"
#include "LoginWindow.h"
#include <QMainWindow>
#include "Users.h"
#include "welcome.h"
#include "registerwindow.h""
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
    for(int i = 0; i<usercount; i++){
        if(username == usernames[i]){
            index = i;
            break;
        }
    }
    if(index == -1) ui->errors->setVisible(true);
    else{
        if(password == passwords[index]){
            Welcome * wel = new Welcome(username);
            hide();
            wel->show();
        }
    }
}
void LoginWindow::on_register_clicked()
{
    hide();
    RegisterWindow * R = new RegisterWindow();
    R->show();

}

LoginWindow::~LoginWindow()
{
    delete ui;
}
