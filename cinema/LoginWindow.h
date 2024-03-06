#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class LoginWindow;
}
QT_END_NAMESPACE

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    void on_login_clicked();
    void on_register_clicked();
    ~LoginWindow();

private:
    Ui::LoginWindow *ui;
};
#endif // LOGINWINDOW_H
