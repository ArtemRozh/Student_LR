#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int const n = 10;
	int LMI, LM, arr[n]; 

	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 10;
		cout << "arr[" << i << "] = " << arr[i] << endl;

	}
	cout << "*****************" << endl;
	for (int i = 0; i < n; i++) {
		LM = arr[i];
		LMI = i;
		if ((LM >= arr[i + 1]) && (LM >= arr[i - 1]) && (LMI != 0)) {
			cout << "Індекс локального максимуму = " << LMI << endl;
		}
	}
}

