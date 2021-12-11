#include <iostream>
#include <windows.h>
using namespace std;

void z1() {
	int n,a;
	cout << "Введите N > 0 >> ";
	cin >> n;
	if (n <= 0) {
		cout << "Невено введены данные\n";
		return;
	}
	a = 1;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = a;
		a += 2;
	}
	for (int i = 0; i < n; i++) {	
	cout << arr[i] << " ";
	}
	delete[] arr;
	cout << endl;
}

void z2() {
	int n, a, d;
	cout << "Введите N > 1 Первый член  и знаменатель геометрической прогрессии >> ";
	cin >> n >> a >> d;
	if (n <= 1 || d == 0) {
		cout << "Невено введены данные\n";
		return;
	}
	int* arr = new int[n];
	arr[0] = a;
	for (int i = 1; i < n; i++) {
		arr[i] = arr[i - 1] * d;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	delete[] arr;
	cout << endl;
}

void z3() {
	int n, a, b, s;
	cout << "Введите N > 2, Числа А и В >> ";
	cin >> n >> a >> b;
	if (n <= 2) {
		cout << "Невено введены данные\n";
		return;
	}
	int* arr = new int[n];
	arr[0] = a;
	arr[1] = b;
	s = a + b;
	for (int i = 2; i < n; i++) {
		arr[i] = s;
		s += arr[i];
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	delete[] arr;
	cout << endl;
}

void z4() {
	int n, a;
	cout << "Введите N > 0 >> ";
	cin >> n;
	if (n <= 0) {
		cout << "Невено введены данные\n";
		return;
	}
	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}

	if (n % 2 == 0) {
	for (int i = 0; i < n / 2; i++) {
		cout << arr[i] << " " << arr[n - 1 - i] << " ";
	}
	}
	else {
		for (int i = 0; i < n / 2 + 1; i++) {
			cout << arr[i] << " " << arr[n - 1 - i] << " ";
		}
	}
	delete[] arr;
	cout << endl;
}

void z5() {
	int n, a, i;
	cout << "Введите N > 0 >> ";
	cin >> n;
	if (n <= 0) {
		cout << "Невено введены данные\n";
		return;
	}
	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}

	for (i = 0; i < n; i += 2) {
		cout << arr[i] << " ";
	}
	if (n % 2 == 1) {
		for (i = n - 2; i > 0; i -= 2) {

			cout << arr[i] << " ";
		}
	}
	else {
		for (i = n - 1; i > 0; i -= 2) {

			cout << arr[i] << " ";
		}
	}
	delete[] arr;
	cout << endl;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int f;
	cout << "Введите номер задания от 1 до 6, чтобы выйти введите 0 >> ";
	cin >> f;
	while (f != 0) {
		switch (f) {
		case 1: z1();
			break;
		case 2: z2();
			break;
		case 3: z3();
			break;
		case 4: z4();
			break;
		case 5: z5();
			break;
		}
		cout << "Введите номер задания от 1 до 6, чтобы выйти введите 0 >> ";
		cin >> f;
	}
}
