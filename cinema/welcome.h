#ifndef WELCOME_H
#define WELCOME_H

#include <QDialog>
#include <QString>

namespace Ui {
class Welcome;
}

class Welcome : public QDialog
{
    Q_OBJECT

public:
    explicit Welcome(QWidget *parent = nullptr, QString x = "", int age = 0);
    ~Welcome();

private slots:
    void on_logout_clicked();

private:
    Ui::Welcome *ui;
};

#endif // WELCOME_H
