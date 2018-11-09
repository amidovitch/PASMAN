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
