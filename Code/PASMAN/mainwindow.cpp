#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("PASMAN");
    this->setFixedSize(530, 357);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addInformauionInTable(){

    ui->tablePasswords->setRowCount(0);// очищаем таблицу, чтобы по новой в нее записывать
    WorkWithStorage::currentPossition = WorkWithStorage::startPossition;

    ui->tablePasswords->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tablePasswords->setSelectionBehavior(QAbstractItemView::SelectRows);// Выделение всей строки
    //ui->tablePasswords->setSelectionMode(QAbstractItemView::SingleSelection);// запрещаем массовое выделение

    QStringList headerLabels;
    headerLabels << "Логин" << "Пароль" << "Примечание";
    ui->tablePasswords->setColumnCount(3);
    ui->tablePasswords->setHorizontalHeaderLabels(headerLabels);
    int row = 0;
    QStringList dataFromFile;

    while(1){
        dataFromFile = WorkWithStorage::readDataFromFile();
        if(dataFromFile.isEmpty()) break;
        ui->tablePasswords->insertRow(ui->tablePasswords->rowCount());
        ui->tablePasswords->setItem(row, 0, new QTableWidgetItem( dataFromFile.at(0)));

        ui->tablePasswords->setItem(row, 1, new QTableWidgetItem( dataFromFile.at(1)));
        ui->tablePasswords->item(row, 1)->setData(8, dataFromFile.at(1));
        ui->tablePasswords->item(row, 1)->setText("********");

        ui->tablePasswords->setItem(row++, 2, new QTableWidgetItem( dataFromFile.at(2)));

    }
    ui->tablePasswords->setCurrentCell(0,0);
    ui->tablePasswords->horizontalHeader()->setSectionResizeMode (QHeaderView::Fixed);
}


void MainWindow::on_deleteButton_clicked()
{

}

void MainWindow::on_autoButton_clicked()
{

}

void MainWindow::on_addPassword_triggered()
{
    AddPassDialog addWindow;
    addWindow.exec();
    this->addInformauionInTable();
}

void MainWindow::on_generatePassword_triggered()
{
    GeneratePassDialog generateWindow;
    generateWindow.exec();
}

void MainWindow::on_exit_triggered()
{

}
