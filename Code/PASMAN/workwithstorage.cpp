#include "workwithstorage.h"

char* WorkWithStorage::passwordsFileName = "passwords.txt";

qint64 WorkWithStorage::currentPossition = 0;
qint64 WorkWithStorage::startPossition = 0;

QString WorkWithStorage::readMasterFromFile(){

    QString stringFromFile;

    QFile fileIn(passwordsFileName);

    if(fileIn.open(QIODevice::ReadOnly)){
        QTextStream inStream (&fileIn);
        stringFromFile = inStream.readLine();
        startPossition = stringFromFile.length()+2;
        fileIn.close();
        return Cryptographer::stringDecrypt(stringFromFile,"Gerasim");
    }
    return "";
}


void WorkWithStorage::writeMasterToFile(QString string){

    QString newString = Cryptographer::stringEncrypt(string, "Gerasim");
    QFile fileOut(passwordsFileName);

    if(fileOut.open(QIODevice::WriteOnly)){
        QTextStream outStream(&fileOut);
        outStream << newString << "\r\n";
        fileOut.close();
    }
}

bool WorkWithStorage::writeDataToFile(QString login, QString password, QString description){

    QString master = readMasterFromFile();
    QFile fileOut(passwordsFileName);
    if(fileOut.open(QIODevice::Append)){
        QTextStream outStream(&fileOut);
        outStream << Cryptographer::stringEncrypt(login, master)<< "\r\n"
                  << Cryptographer::stringEncrypt(password, master)<< "\r\n"
                  << description <<"\r\n";
        fileOut.close();
        return true;
    }
    else return false;
}

QStringList WorkWithStorage::readDataFromFile(){

    QStringList dataArray;
    QFile fileIn(passwordsFileName);

    if(fileIn.open(QIODevice::ReadOnly)){

        QTextStream inStream(&fileIn);
        inStream.seek(currentPossition);

        if(inStream.atEnd()) return dataArray;
        dataArray.append(Cryptographer::stringDecrypt(inStream.readLine(), readMasterFromFile()));
        dataArray.append(Cryptographer::stringDecrypt(inStream.readLine(), readMasterFromFile()));
        dataArray.append(inStream.readLine());

        currentPossition = inStream.pos();
        fileIn.close();
        return dataArray;
    }
    else return dataArray;
}





