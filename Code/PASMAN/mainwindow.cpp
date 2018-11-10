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

void MainWindow::addInformationInTable(){

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
    if(ui->tablePasswords->selectedItems().isEmpty()) return;
    ui->tablePasswords->removeRow(ui->tablePasswords->currentRow());

    QString master = WorkWithStorage::readMasterFromFile();
    QFile(WorkWithStorage::passwordsFileName).remove();
    WorkWithStorage::writeMasterToFile(master);

    QString login, password, description;

    for (int i = 0; i <  ui->tablePasswords->rowCount(); i++) {
        login = ui->tablePasswords->item(i,0)->text();
        password = ui->tablePasswords->item(i,1)->text();
        description = ui->tablePasswords->item(i,2)->text();
        WorkWithStorage::writeDataToFile(login, password, description);
    }
}

void MainWindow::on_autoButton_clicked()
{
    QString password, login;
    if(ui->tablePasswords->selectedItems().isEmpty()) return;
    password = ui->tablePasswords->selectedItems().at(1)->data(8).toString();
    login = ui->tablePasswords->selectedItems().at(0)->text();
    WorkWithWinApi::autoAuthorization(password, login);
}

void MainWindow::on_addPassword_triggered()
{
    AddPassDialog addWindow;
    addWindow.exec();
    this->addInformationInTable();
}

void MainWindow::on_generatePassword_triggered()
{
    GeneratePassDialog generateWindow;
    generateWindow.exec();
}

void MainWindow::on_exit_triggered()
{
      this->close();
}
