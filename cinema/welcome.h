#ifndef WELCOME_H
#define WELCOME_H

#include <QWidget>

namespace Ui {
class Welcome;
}

class Welcome : public QWidget
{
    Q_OBJECT

public:
    explicit Welcome(QWidget *parent = nullptr, QString x = "");
    ~Welcome();

private slots:
    void on_logout_clicked();

private:
    Ui::Welcome *ui;
};

#endif // WELCOME_H
