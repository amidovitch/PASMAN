#include "createstoragedialog.h"
#include "ui_createstoragedialog.h"

CreateStorageDialog::CreateStorageDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateStorageDialog)
{
    ui->setupUi(this);
}

CreateStorageDialog::~CreateStorageDialog()
{
    delete ui;
}

void CreateStorageDialog::on_createButton_clicked()
{
    if(ui->createLine->text().isEmpty() || ui->createLine->text().size() != ui->createLine->text().toUtf8().size()){
          QMessageBox::critical(this, "Error", "Такой пароль не годится");
          ui->createLine->clear();
    }
    else{
        WorkWithStorage::writeMasterToFile(ui->createLine->text());
        QMessageBox::information(this, "Information", "Елси вы забудете этот мастер пароль, то потеряеете доступ к своему хранилищу!!!");
        this->accept();
    }

}

void CreateStorageDialog::on_createLine_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->createLine->text() == "Придумайте надежный мастер пароль")
        ui->createLine->clear();
}
