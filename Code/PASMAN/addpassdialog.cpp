#include "addpassdialog.h"
#include "ui_addpassdialog.h"

AddPassDialog::AddPassDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPassDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("PASMAN");
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
}

AddPassDialog::~AddPassDialog()
{
    delete ui;
}

void AddPassDialog::on_addButton_clicked()
{
    if(ui->login->text().isEmpty() || ui->login->text().size() != ui->login->text().toUtf8().size()){
        ui->login->setText("");
        QMessageBox::warning(this," ", "Этот логин не подходит.");
    }
    if(ui->password->text().isEmpty() || ui->password->text().size() != ui->password->text().toUtf8().size()){
        ui->password->setText("");
        QMessageBox::warning(this," ", "Этот пароль не подходит.");
    }
    else{
        if(WorkWithStorage::writeDataToFile(ui->login->text(), ui->password->text(),ui->note->text())){
            QMessageBox::information(this," ","Данные успешно добавлены в хранилище.");
            this->close();
        }
        else
            QMessageBox::critical(this, "Error", "Произошла ошибка записи. Повторите еще раз.");
    }
}
