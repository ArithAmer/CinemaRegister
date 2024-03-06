#ifndef REGISTERWINDOW_H
#define REGISTERWINDOW_H

#include <QDialog>
#include <QString>

namespace Ui {
class RegisterWindow;
}

class RegisterWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterWindow(QWidget *parent = nullptr);
    ~RegisterWindow();
    //Name and password
    void setName(QString x){name = x;}
    QString getName(){return name;}
    void setPass(QString x){password = x;}
    QString getPass(){return password;}
    void setRePass(QString x){rePassword = x;}
    QString getRePass(){return rePassword;}

    //Date
    void setMonth(QString x){month = x;}
    QString getMonth(){return month;}
    void setDay(int x){day = x;}
    int getDay(){return day;}
    void setYear(int x){year = x;}
    int getYear(){return year;}

    //Gender
    void setGender(int x){
        if(x == 1){
            gender[1] = true;
        }else if(x == 0){
            gender[0] = true;
        }
    }

    int getGender(){
        if(gender[0]){
            return 0;
        }
        return 1;
    }

    //Type
    void setType(int x){
        if(x == 1){
            type[1] = true;
        }else if(x == 0){
            type[0] = true;
        }
    }

    int getType(){
        if(type[0]){
            return 0;
        }
        return 1;
    }

    //Genres
    void setGenre(int x, bool y){
        genres[x] = y;
    }


private slots:
    void on_RegisterButton_clicked();

private:
    Ui::RegisterWindow *ui;
    //Name&Password
    QString name;
    QString password;
    QString rePassword;

    //Date
    QString month;
    int day;
    int year;

    //Gender
    bool gender[2] = {false, false};

    //User type
    bool type[2] = {false, false};


    //Genres
    bool genres[6] = {false, false, false, false, false, false};

};

#endif // REGISTERWINDOW_H
