#include <iostream>
#include <Windows.H>
#include <iomanip>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int FN, SN, FD1, FD2, SD1, SD2, x, y; 
	cout << "Введіть перше двозначне число: ";
	cin >> FN;
	cout << "Введіть друге двозначне число: ";
	cin >> SN;

	FD1 = FN / 10;
	FD2 = SN / 10;
	SD1 = FN % 10;
	SD2 = SN % 10;

	x = FD1 + FD2;
	y = SD1 + SD2;

	cout << "\nЧи є результат умови задачі істинним (1 = так, 0 = ні)? " << (x <= y && x >= y) << endl;
}

