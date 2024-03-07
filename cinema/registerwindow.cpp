#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "Users.cpp"
#include "welcome.h"

RegisterWindow::RegisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
    ui->NameLabelCheck->setVisible(false);
    ui->RePassLabelCheck->setVisible(false);
    ui->AllFieldCheckerLabel->setVisible(false);
    ui->LabelAgeCheck->setVisible(false);
}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}

void RegisterWindow::on_RegisterButton_clicked()
{

    bool error = false;
    //Name & Pass
    setName(ui->NameTextField->text());
    setPass(ui->PassTextField->text());
    setRePass(ui->RePassTextField->text());

    //BirthDate
    setMonth(ui->comboBoxMonth->currentText());
    setDay(ui->NumberTextField->text().toInt());
    setYear(ui->YearTextField->text().toInt());

    //Gender
    if(ui->maleRadio->isChecked()){
        setGender(0);
    }else if(ui->femaleRadio->isChecked()){
        setGender(1);
    }else{//Checks for gender
        error = false;
    }

    //Type
    if(ui->UserRadioButton->isChecked()){
        setType(0);
    }else if(ui->AdminRadioButton->isChecked()){
        setType(1);
    }else{//Checks for Type
        error = false;
    }

    //Checkboxes
    if(ui->ActionCheckBox->isChecked()){
        setGenre(0, true);
    }
    if(ui->ComedyCheckBox->isChecked()){
        setGenre(1, true);
    }
    if(ui->RomanceCheckBox->isChecked()){
        setGenre(2, true);
    }
    if(ui->DramaCheckBox->isChecked()){
        setGenre(3, true);
    }
    if(ui->HorrorCheckBox->isChecked()){
        setGenre(4, true);
    }
    if(ui->OtherCheckBox->isChecked()){
        setGenre(5, true);
    }


    //Checks for name
    for(int i = 0; i < usersCount; i++){
        if(usernames[i] == getName()){
            error = true;
            ui->NameLabelCheck->setVisible(true);
            break;
        }else{
            ui->NameLabelCheck->setVisible(false);
        }
    }
    if(getName() == "")
        error = true;

    //Checks for password
    if(getPass()!=getRePass()){
        error = true;
        ui->RePassLabelCheck->setVisible(true);
    }else{
        ui->RePassLabelCheck->setVisible(false);
    }
    if(getPass() == "")
        error = true;

    //Checks for age
    if(2024-getYear() < 12){
        error = true;
        ui->LabelAgeCheck->setVisible(true);
    }else{
        ui->LabelAgeCheck->setVisible(false);
    }


    //checks for genres
    int counter = 0;
    for(int i = 0; i < 6; i++){
        if(!genres[i]){
            counter++;
        }
    }
    if(counter == 6){
        error = true;
    }

    //checks for all of them
    if(error){
        ui->AllFieldCheckerLabel->setVisible(true);
    }else{
        ui->AllFieldCheckerLabel->setVisible(false);
        usernames[usersCount] = getName();
        passwords[usersCount] = getPass();
        ages[usersCount] = (2024 - getYear());
        usersCount++;
        hide();
        Welcome* wel = new Welcome(this, getName(), 2024 - getYear());
        wel->show();
    }
}

