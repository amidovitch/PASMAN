/********************************************************************************
** Form generated from reading UI file 'generatepassdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATEPASSDIALOG_H
#define UI_GENERATEPASSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_GeneratePassDialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GeneratePassDialog)
    {
        if (GeneratePassDialog->objectName().isEmpty())
            GeneratePassDialog->setObjectName(QStringLiteral("GeneratePassDialog"));
        GeneratePassDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(GeneratePassDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(GeneratePassDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GeneratePassDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GeneratePassDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GeneratePassDialog);
    } // setupUi

    void retranslateUi(QDialog *GeneratePassDialog)
    {
        GeneratePassDialog->setWindowTitle(QApplication::translate("GeneratePassDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GeneratePassDialog: public Ui_GeneratePassDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATEPASSDIALOG_H
