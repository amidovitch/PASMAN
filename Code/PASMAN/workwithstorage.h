#ifndef WORKWITHSTORAGE_H
#define WORKWITHSTORAGE_H

#include "QString"
#include "QFile"
#include "QTextStream"
#include "cryptographer.h"
#include "fstream"
#include "iostream"
using namespace std;

class WorkWithStorage
{
public:
    static char* passwordsFileName;
    static qint64 currentPossition;  // Будет хранить положение курсора в файле, при считывании паролей
    static qint64 startPossition;  // Будет хранить положение курсора в файле, при считывании паролей
    static QString readMasterFromFile();
    static void writeMasterToFile(QString);
    static bool writeDataToFile(QString, QString, QString);
    static QStringList readDataFromFile();
};

#endif // WORKWITHSTORAGE_H
