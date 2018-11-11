#include "workwithwinapi.h"

void WorkWithWinApi::mySetClipboardData(QString data){

    if (OpenClipboard(NULL))//открываем буфер обмена
    {
        HGLOBAL hgBuffer;
        char* chBuffer;
        EmptyClipboard(); //очищаем буфер
        hgBuffer = GlobalAlloc(GMEM_DDESHARE, data.length() + 1);//выделяем память
        chBuffer = (char*)GlobalLock(hgBuffer); //блокируем память
        strcpy(chBuffer, LPCSTR(data.toStdString().c_str()));
        GlobalUnlock(hgBuffer);//разблокируем память
        SetClipboardData(CF_TEXT, hgBuffer);//помещаем текст в буфер обмена
        CloseClipboard(); //закрываем буфер обмена
    }
}
void WorkWithWinApi::autoAuthorization(QString password, QString login ){

    ShowWindow(GetForegroundWindow(), SW_MINIMIZE);

   // const char* charPassword = password.toStdString().c_str();
    const char* charPassword = password.toLocal8Bit().data();
    INPUT pInput;
    wchar_t wc;
    for (int i = 0; i < password.length(); i++) {
        MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, charPassword+i, 1, &wc, 1);
        pInput.type = INPUT_KEYBOARD;
        pInput.ki.wVk = 0;
        pInput.ki.time = 100;
        pInput.ki.wScan = wc;
        pInput.ki.dwFlags = KEYEVENTF_UNICODE;
        SendInput(1, &pInput, sizeof(pInput));
        pInput.ki.dwFlags = KEYEVENTF_UNICODE | KEYEVENTF_KEYUP;
        SendInput(1, &pInput, sizeof(pInput));
     }
    mySetClipboardData(login);
  }


