#include "logininappwindow.h"
#include <QApplication>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    LoginInAppWindow w;
    w.show();
    return a.exec();
}
