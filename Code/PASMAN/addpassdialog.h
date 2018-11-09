#ifndef ADDPASSDIALOG_H
#define ADDPASSDIALOG_H

#include <QDialog>

namespace Ui {
class AddPassDialog;
}

class AddPassDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddPassDialog(QWidget *parent = 0);
    ~AddPassDialog();

private:
    Ui::AddPassDialog *ui;
};

#endif // ADDPASSDIALOG_H
