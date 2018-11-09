#include "logtostoragedialog.h"
#include "ui_logtostoragedialog.h"

LogToStorageDialog::LogToStorageDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LogToStorageDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("PASMAN");
}

LogToStorageDialog::~LogToStorageDialog()
{
    delete ui;
}

void LogToStorageDialog::on_createButton_clicked()
{
    if(ui->masterLine->text() == WorkWithStorage::readMasterFromFile()){
         this->close();
    }
    else{
        QMessageBox::critical(this,"Error", "Пароль введен неверно!");
        ui->masterLine->clear();
    }
}

void LogToStorageDialog::on_masterLine_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->masterLine->text() == "Введите свой мастер пароль")
        ui->masterLine->clear();
}
