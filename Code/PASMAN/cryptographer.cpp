#include "cryptographer.h"
#include <QMessageBox>

QString Cryptographer::stringEncrypt(QString strInput, QString strPassword) {
    QString strOutput="";
    QByteArray baInput = strInput.toLocal8Bit();  // Перевод строк в битовые массивы с использованием локальных таблиц
    QByteArray baPassword = strPassword.toLocal8Bit();

    for (int i=0; i < baInput.size(); i++) {// Кодирование информации
        for (int j=0; j < baPassword.size(); j++) {
           baInput[i] = baInput[i] ^ (baPassword[j] + (i*j)); // XOR - кодировка символа
        }
        strOutput += QString("%1").arg((int)((unsigned char)baInput[i]),2,16,QChar('0')); //Преобразование числа в шестнадцатеричную систему
     }
     return strOutput;
}


QString Cryptographer::stringDecrypt(QString strInput, QString strPassword) {
    QByteArray baInput = QByteArray::fromHex(strInput.toLocal8Bit()); // Декодировка строки из 16-ричной системы в битовый массив
    QByteArray baPassword = strPassword.toLocal8Bit(); // Перевод строки пароля в битовый массив

    for (int i=0; i < baInput.size(); i++) {// Декодирование информации
        for (int j=0; j < baPassword.size(); j++) {
            baInput[i] = baInput[i] ^ (baPassword[j] + (i*j)); // XOR - кодировка символа
        }
    }
    return QString::fromLocal8Bit(baInput.data());
}
