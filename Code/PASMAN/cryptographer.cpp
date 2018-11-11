#include "cryptographer.h"
#include <QMessageBox>

QString Cryptographer::stringEncrypt(QString strInput, QString strPassword){

    QString strOutput="";
     // Перевод строк в битовые массивы с использованием локальных таблиц
    QByteArray baInput    = strInput.toLocal8Bit();
    QByteArray baPassword = strPassword.toLocal8Bit();
    // Кодирование информации
    for (int i=0; i < baInput.size(); i++)
    {
        for (int j=0; j < baPassword.size(); j++)
        {
           // XOR - кодировка символа
           baInput[i] = baInput[i] ^ (baPassword[j] + (i*j));
        }
        //Преобразование числа в шестнадцатеричную систему
        strOutput += QString("%1").arg((int)((unsigned char)baInput[i]),2,16,QChar('0'));
     }
     //Возврат кодированной строки
     return strOutput;
}


QString Cryptographer::stringDecrypt(QString strInput, QString strPassword)
{

    // Декодировка строки из 16-ричной системы в битовый массив
    QByteArray baInput = QByteArray::fromHex(strInput.toLocal8Bit());
    // Перевод строки пароля в битовый массив
    QByteArray baPassword = strPassword.toLocal8Bit();
    // Декодирование информации
    for (int i=0; i < baInput.size(); i++)
    {
        for (int j=0; j < baPassword.size(); j++)
        {
            // XOR - кодировка символа
            baInput[i] = baInput[i] ^ (baPassword[j] + (i*j));
        }
    }
    //Возврат кодированной строки
    return QString::fromLocal8Bit(baInput.data());
}
