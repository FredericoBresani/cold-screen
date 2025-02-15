#include <iostream>
#include <windows.h>
#include "./config/_UNICODE.h"

RECT* rect;

PWSTR v; 

wchar_t a = L'a'; // L means we are using the UTF-16 windows enconding for characters

wchar_t *aa = L"hello";

int* ee;

BOOL MoveWindow(HWND hWnd, int X, int Y, int nWidth, int nHeight, BOOL bRepaint);

int main() {

    SetWindowTextW(L"");
    int x = 0;
    printf("%i", 5);
    return 0;
}