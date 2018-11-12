#ifndef WORKWITHWINAPI_H
#define WORKWITHWINAPI_H
#include "QString"
#include "windows.h"

class WorkWithWinApi {
public:
    static void mySetClipboardData(QString);
    static void autoAuthorization(QString, QString);
};

#endif
