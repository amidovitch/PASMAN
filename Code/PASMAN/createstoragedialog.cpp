#include "createstoragedialog.h"
#include "ui_createstoragedialog.h"

CreateStorageDialog::CreateStorageDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateStorageDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("PASMAN");
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
}

CreateStorageDialog::~CreateStorageDialog()
{
    delete ui;
}

void CreateStorageDialog::on_createButton_clicked()
{
    if(ui->createLine->text().isEmpty() || ui->createLine->text().size() != ui->createLine->text().toUtf8().size()){
          QMessageBox::warning(this, " ", "Этот пароль не подходит");
          ui->createLine->clear();
    }
    else{
        WorkWithStorage::writeMasterToFile(ui->createLine->text());
        QString message ="Ваш мастер пароль: "+ui->createLine->text()+
                "\nЕсли вы его забудете, то потеряете доступ к своему хранилищу.";
        QMessageBox::information(this, " ", message);
        this->accept();
    }

}

void CreateStorageDialog::on_createLine_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->createLine->text().startsWith( "Придумайте надежный мастер пароль"))
        ui->createLine->clear();
}
