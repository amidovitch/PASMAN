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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GeneratePassDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLineEdit *passLine;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *uppercase;
    QCheckBox *spaces;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *lowercase;
    QCheckBox *special;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *digits;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QLineEdit *lengthLine;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *generateButton;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QDialog *GeneratePassDialog)
    {
        if (GeneratePassDialog->objectName().isEmpty())
            GeneratePassDialog->setObjectName(QStringLiteral("GeneratePassDialog"));
        GeneratePassDialog->resize(383, 222);
        verticalLayout = new QVBoxLayout(GeneratePassDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        passLine = new QLineEdit(GeneratePassDialog);
        passLine->setObjectName(QStringLiteral("passLine"));
        passLine->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(passLine);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        uppercase = new QCheckBox(GeneratePassDialog);
        uppercase->setObjectName(QStringLiteral("uppercase"));

        horizontalLayout_2->addWidget(uppercase);

        spaces = new QCheckBox(GeneratePassDialog);
        spaces->setObjectName(QStringLiteral("spaces"));

        horizontalLayout_2->addWidget(spaces);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lowercase = new QCheckBox(GeneratePassDialog);
        lowercase->setObjectName(QStringLiteral("lowercase"));

        horizontalLayout_3->addWidget(lowercase);

        special = new QCheckBox(GeneratePassDialog);
        special->setObjectName(QStringLiteral("special"));

        horizontalLayout_3->addWidget(special);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        digits = new QCheckBox(GeneratePassDialog);
        digits->setObjectName(QStringLiteral("digits"));

        horizontalLayout_4->addWidget(digits);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        label = new QLabel(GeneratePassDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        lengthLine = new QLineEdit(GeneratePassDialog);
        lengthLine->setObjectName(QStringLiteral("lengthLine"));

        horizontalLayout_5->addWidget(lengthLine);

        horizontalSpacer_4 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        generateButton = new QPushButton(GeneratePassDialog);
        generateButton->setObjectName(QStringLiteral("generateButton"));

        horizontalLayout_5->addWidget(generateButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(GeneratePassDialog);

        QMetaObject::connectSlotsByName(GeneratePassDialog);
    } // setupUi

    void retranslateUi(QDialog *GeneratePassDialog)
    {
        GeneratePassDialog->setWindowTitle(QApplication::translate("GeneratePassDialog", "Dialog", nullptr));
        passLine->setText(QApplication::translate("GeneratePassDialog", "\320\227\320\264\320\265\321\201\321\214 \320\277\320\276\321\217\320\262\320\270\321\202\321\201\321\217 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        uppercase->setText(QApplication::translate("GeneratePassDialog", "\320\237\321\200\320\276\320\277\320\270\321\201\320\275\321\213\320\265 \320\261\321\203\320\272\320\262\321\213 (A-Z)", nullptr));
        spaces->setText(QApplication::translate("GeneratePassDialog", "\320\237\321\200\320\276\320\261\320\265\320\273\321\213", nullptr));
        lowercase->setText(QApplication::translate("GeneratePassDialog", "\320\241\321\202\321\200\320\276\321\207\320\275\321\213\320\265 \320\261\321\203\320\272\320\262\321\213 (a-z)", nullptr));
        special->setText(QApplication::translate("GeneratePassDialog", "\320\241\320\277\320\265\321\206\320\270\320\260\320\273\321\214\320\275\321\213\320\265 \321\201\320\270\320\274\320\262\320\276\320\273\321\213 (!/+.)()", nullptr));
        digits->setText(QApplication::translate("GeneratePassDialog", "\320\246\320\270\321\204\321\200\321\213 (0-9)", nullptr));
        label->setText(QApplication::translate("GeneratePassDialog", "\320\224\320\273\320\270\320\275\320\260:", nullptr));
        generateButton->setText(QApplication::translate("GeneratePassDialog", "\320\237\321\200\320\270\320\264\321\203\320\274\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GeneratePassDialog: public Ui_GeneratePassDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATEPASSDIALOG_H
