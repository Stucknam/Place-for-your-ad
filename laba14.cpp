#include <iostream>
#include <windows.h>
using namespace std;

void z1() {
	int a, b, i, j;
	cout << "Введите два числа A < B >> ";
	cin >> a >> b;
	if (a > b || a == b || a < 0 || b < 0) {
		cout << "Неправильно введены числа\n";
		return;
	}
	for (i = a; i <= b; i++) {
		for (j = 1; j <= i; j++) {
			cout << i << endl;
		}
	}
}

void z2() {
	int a, b;
	cout << "Введите два числа A > B >> ";
	cin >> a >> b;
	if (a < b || a < 0 || b < 0 || a == b) {
		cout << "Неправильно введены числа\n";
		return;
	}
	while (a - b >= 0) {
		a -= b;
	}
	cout << "Незанятая часть A = " << a << endl;
}

void z3() {
	int n, k, s;
	cout << "Введите N > 1 >> ";
	cin >> n;
	if (n <= 1) {
		cout << "Неправильно введены даные\n";
		return;
	}
	s = 0;
	k = 0;
	do {
		k++;
		s += k;

	} while (s < n);
	cout << k << " " << s << endl;
}

void z4() {
	int k;
	float p, s;
	cout << "Введите процент вклада 0 < p < 25 >> ";
	cin >> p;
	if (p <= 0. || p >= 25.) {
		cout << "Неправильно введены даные\n";
		return;
	}
	s = 1000;
	k = 0;
	do {
		s *= 1 + (p / 100);
		k++;
	} while (s <= 1100);
	cout << "Через " << k << " месяц(а,ев) сумма вклада превысит 1100р и станет равной " << s << endl;
}

void z5() {
	int a, b;
	cout << "Введите два положительных числа >> ";
	cin >> a >> b;
	if (a <= 0 || b <= 0) {
		cout << "Неправильно введены даные\n";
		return;
	}
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else { b -= a; }
	}
	cout << b << endl;
}

void z6() {
	int n, a, b, c, k;
	cout << "Введите число из ряда Фибоначчи >> ";
	cin >> n;
	a = 1;
	b = 1;
	k = 2;
	c = a + b;
	while (c < n) {
		c = a + b;
		a = b;
		b = c;
		k++;
	}
	if (n == 1) {
		cout << "1 или 2" << endl;
		return;
	}
	if (n == 2) {
		cout << "3" << endl;
		return;
	}
	if (c != n) {
		cout << n << " Не является числом из ряда Фибоначчи" << endl;
		return;
	}
	else { cout << k << endl; }
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
		case 6: z6();
			break;
		}
		cout << "Введите номер задания от 1 до 6, чтобы выйти введите 0 >> ";
		cin >> f;
	}
}