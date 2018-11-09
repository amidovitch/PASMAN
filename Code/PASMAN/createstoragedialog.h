#ifndef CREATESTORAGEDIALOG_H
#define CREATESTORAGEDIALOG_H

#include <QDialog>

namespace Ui {
class CreateStorageDialog;
}

class CreateStorageDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CreateStorageDialog(QWidget *parent = 0);
    ~CreateStorageDialog();

private:
    Ui::CreateStorageDialog *ui;
};

#endif // CREATESTORAGEDIALOG_H
