#include "generatepassdialog.h"
#include "ui_generatepassdialog.h"

GeneratePassDialog::GeneratePassDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GeneratePassDialog)
{
    ui->setupUi(this);
}

GeneratePassDialog::~GeneratePassDialog()
{
    delete ui;
}
