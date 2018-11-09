/********************************************************************************
** Form generated from reading UI file 'createstoragedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATESTORAGEDIALOG_H
#define UI_CREATESTORAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_CreateStorageDialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CreateStorageDialog)
    {
        if (CreateStorageDialog->objectName().isEmpty())
            CreateStorageDialog->setObjectName(QStringLiteral("CreateStorageDialog"));
        CreateStorageDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(CreateStorageDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(CreateStorageDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateStorageDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateStorageDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CreateStorageDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateStorageDialog)
    {
        CreateStorageDialog->setWindowTitle(QApplication::translate("CreateStorageDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateStorageDialog: public Ui_CreateStorageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATESTORAGEDIALOG_H
