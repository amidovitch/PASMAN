/********************************************************************************
** Form generated from reading UI file 'logininappwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGININAPPWINDOW_H
#define UI_LOGININAPPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginInAppWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *loginButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *createButton;

    void setupUi(QMainWindow *LoginInAppWindow)
    {
        if (LoginInAppWindow->objectName().isEmpty())
            LoginInAppWindow->setObjectName(QStringLiteral("LoginInAppWindow"));
        LoginInAppWindow->resize(360, 176);
        centralWidget = new QWidget(LoginInAppWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 40, 281, 91));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        loginButton = new QPushButton(verticalLayoutWidget);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setMaximumSize(QSize(16777215, 23));

        verticalLayout_2->addWidget(loginButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer);

        createButton = new QPushButton(verticalLayoutWidget);
        createButton->setObjectName(QStringLiteral("createButton"));

        verticalLayout_2->addWidget(createButton);

        LoginInAppWindow->setCentralWidget(centralWidget);

        retranslateUi(LoginInAppWindow);

        QMetaObject::connectSlotsByName(LoginInAppWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginInAppWindow)
    {
        LoginInAppWindow->setWindowTitle(QApplication::translate("LoginInAppWindow", "LoginInAppWindow", nullptr));
        loginButton->setText(QApplication::translate("LoginInAppWindow", "\320\222\320\276\320\271\321\202\320\270 \320\262 \321\201\320\262\320\276\320\265 \321\205\321\200\320\260\320\275\320\270\320\273\320\270\321\211\320\265 \320\277\320\260\321\200\320\276\320\273\320\265\320\271", nullptr));
        createButton->setText(QApplication::translate("LoginInAppWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\275\320\276\320\262\320\276\320\265 \321\205\321\200\320\260\320\275\320\270\320\273\320\270\321\211\320\265 \320\277\320\260\321\200\320\276\320\273\320\265\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginInAppWindow: public Ui_LoginInAppWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGININAPPWINDOW_H
