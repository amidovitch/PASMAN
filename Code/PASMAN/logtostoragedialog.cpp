#include "logtostoragedialog.h"
#include "ui_logtostoragedialog.h"

LogToStorageDialog::LogToStorageDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LogToStorageDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("PASMAN");
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
}

LogToStorageDialog::~LogToStorageDialog()
{
    delete ui;
}

void LogToStorageDialog::on_createButton_clicked()
{
    if(ui->masterLine->text() == WorkWithStorage::readMasterFromFile() && !(ui->masterLine->text().isEmpty())){
         this->accept();
    }
    else{
        QMessageBox::critical(this,"Error", "Пароль введен неверно!");
        ui->masterLine->clear();
    }
}

void LogToStorageDialog::on_masterLine_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->masterLine->text().startsWith("Введите свой мастер пароль")){
        ui->masterLine->clear();
        ui->masterLine->setEchoMode(QLineEdit::Password);
    }
}
