#include <iostream>
#include <Math.h>
#include <Windows.H>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int y, k;
    float res,  mult = 1;
    cout << "Введіть першу змінну k\nk = ";
    cin >> k;
    cout << "Введіть другу змінну y\ny = ";
    cin >> y;
    for (int i = 1; i < 11; i++) {
        mult = mult * log(k*y);
    }
    res = y + mult + 2;
    cout << "Результат рівняння = " << res;
}