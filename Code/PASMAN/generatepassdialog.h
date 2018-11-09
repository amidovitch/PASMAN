#ifndef GENERATEPASSDIALOG_H
#define GENERATEPASSDIALOG_H

#include <QDialog>

namespace Ui {
class GeneratePassDialog;
}

class GeneratePassDialog : public QDialog
{
    Q_OBJECT

public:
    explicit GeneratePassDialog(QWidget *parent = 0);
    ~GeneratePassDialog();

private:
    Ui::GeneratePassDialog *ui;
};

#endif // GENERATEPASSDIALOG_H
