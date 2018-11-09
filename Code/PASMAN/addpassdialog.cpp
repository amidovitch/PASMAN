#include "addpassdialog.h"
#include "ui_addpassdialog.h"

AddPassDialog::AddPassDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPassDialog)
{
    ui->setupUi(this);
}

AddPassDialog::~AddPassDialog()
{
    delete ui;
}
