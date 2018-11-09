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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginInAppWindow
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LoginInAppWindow)
    {
        if (LoginInAppWindow->objectName().isEmpty())
            LoginInAppWindow->setObjectName(QStringLiteral("LoginInAppWindow"));
        LoginInAppWindow->resize(400, 300);
        menuBar = new QMenuBar(LoginInAppWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        LoginInAppWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LoginInAppWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        LoginInAppWindow->addToolBar(mainToolBar);
        centralWidget = new QWidget(LoginInAppWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        LoginInAppWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(LoginInAppWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        LoginInAppWindow->setStatusBar(statusBar);

        retranslateUi(LoginInAppWindow);

        QMetaObject::connectSlotsByName(LoginInAppWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginInAppWindow)
    {
        LoginInAppWindow->setWindowTitle(QApplication::translate("LoginInAppWindow", "LoginInAppWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginInAppWindow: public Ui_LoginInAppWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGININAPPWINDOW_H
