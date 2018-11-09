#include "logtostoragedialog.h"
#include "ui_logtostoragedialog.h"

LogToStorageDialog::LogToStorageDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LogToStorageDialog)
{
    ui->setupUi(this);
}

LogToStorageDialog::~LogToStorageDialog()
{
    delete ui;
}
