#include "logininappwindow.h"
#include "ui_logininappwindow.h"

LoginInAppWindow::LoginInAppWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginInAppWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("PASMAN");
}

LoginInAppWindow::~LoginInAppWindow()
{
    delete ui;
}

void LoginInAppWindow::on_loginButton_clicked()
{
    LogToStorageDialog  logWindow;
    this->hide();
    if(logWindow.exec() == QDialog::Accepted){
        window.show();
        //window.addInformauionInTable();
        this->close();
    }
    else this->show();
}

void LoginInAppWindow::on_createButton_clicked()
{
    CreateStorageDialog createWindow;
    this->hide();
    if(createWindow.exec() == QDialog::Accepted){
        window.show();
        //window.addInformauionInTable();
        this->close();
    }
    else this->show();
}
