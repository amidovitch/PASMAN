#include "addpassdialog.h"
#include "ui_addpassdialog.h"

AddPassDialog::AddPassDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPassDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("PASMAN");
}

AddPassDialog::~AddPassDialog()
{
    delete ui;
}

void AddPassDialog::on_addButton_clicked()
{
    if(ui->login->text().isEmpty() || ui->login->text().size() != ui->login->text().toUtf8().size()){
        ui->login->setText("");
        QMessageBox::critical(this,"Error", "Логин введен некорректно.");
    }
    if(ui->password->text().isEmpty() || ui->password->text().size() != ui->password->text().toUtf8().size()){
        ui->password->setText("");
        QMessageBox::critical(this,"Error", "Пароль введен некорректно.");
    }
    else{
        if(WorkWithStorage::writeDataToFile(ui->login->text(), ui->password->text(),ui->note->text())){
            QMessageBox::information(this," ","Данные успешно добавлены в хранилище.");
            this->close();
        }
        else
            QMessageBox::warning(this, "Error", "Произошла ошибка записи. Повторите еще раз.");
            ui->login->setText("");
            ui->password->setText("");
            ui->note->setText("");
    }
}
