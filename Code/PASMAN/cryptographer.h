#ifndef CRYPTOGRAPHER_H
#define CRYPTOGRAPHER_H
#include <QString>

class Cryptographer
{
public:
    Cryptographer();
    static QString stringEncrypt(QString, QString);
    static QString stringDecrypt(QString, QString);
};

#endif // CRYPTOGRAPHER_H