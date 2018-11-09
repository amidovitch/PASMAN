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
    logWindow.exec();
    window.show();
    //window.addInformauionInTable();
    this->close();
}

void LoginInAppWindow::on_createButton_clicked()
{
    CreateStorageDialog createWindow;
    createWindow.exec();
    window.show();
    this->close();
}
