#include "generatepassdialog.h"
#include "ui_generatepassdialog.h"
#include <QDebug>
GeneratePassDialog::GeneratePassDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GeneratePassDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("PASMAN");
    ui->passLine->setEnabled(false);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
    this->setFixedSize(this->size());
}

GeneratePassDialog::~GeneratePassDialog()
{
    delete ui;
}

bool isDec(QString str)
{
    int pos = 0;

    QRegExpValidator validator(QRegExp("[0-9]+"));

    if (validator.validate(str, pos) == QValidator::Acceptable)
        return true;

    return false;
}

void GeneratePassDialog::on_generateButton_clicked()
{
    bool ok = true;
    if(ui->lengthLine->text().isEmpty() || !(isDec(ui->lengthLine->text())) || ((!ui->digits->isChecked())
      && !ui->spaces->isChecked()&&!ui->uppercase->isChecked() && !ui->lowercase->isChecked() &&
      !ui->special->isChecked()) || ui->lengthLine->text().toInt(&ok, 10)>40 || ui->lengthLine->text().toInt(&ok,10)<1)
    {
            QMessageBox::warning(this, " ", "Введите длину от 1 до 40, и выберите необходимые опции.");
            return;
    }
    QTime midnight(0,0,0);
    qsrand(midnight.secsTo(QTime::currentTime()));
    QString pass;

    for(int i = 0; i <ui->lengthLine->text().toInt(&ok, 10); i++){
        switch(qrand() % 5)
        {
        case 0:
            if(ui->digits->isChecked()){
                pass.push_back(qrand() % 10 + '0');
            }
            else i--;
            break;
        case 1:
            if(ui->uppercase->isChecked()){
                pass.push_back(rand() % 26 + 'A');
            }
            else i--;
            break;
        case 2:
            if(ui->lowercase->isChecked()){
                pass.push_back(rand() % 26 + 'a');
            }
            else i--;
            break;
        case 3:
            if(ui->spaces->isChecked()){
                pass.push_back(' ');
            }
            else i--;
            break;
        case 4:
            if(ui->special->isChecked()){
                 pass.push_back(rand() % 15 + '!');
            }
            else i--;
            break;
        }
    }
    ui->passLine->setText(pass);
    WorkWithWinApi::mySetClipboardData(pass);
}
