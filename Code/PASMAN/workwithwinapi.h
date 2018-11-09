#ifndef WORKWITHWINAPI_H
#define WORKWITHWINAPI_H
#include "QString"
#include "windows.h"

class WorkWithWinApi
{
public:
    WorkWithWinApi();
    static void mySetClipboardData(QString);
    static void autoAuthorization(QString, QString);
};

#endif // WORKWITHWINAPI_H
