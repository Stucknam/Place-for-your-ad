#include <iostream>
#include <windows.h>
#include <cstring>  
using namespace std;

float PowerA3(float a) {
	return a * a * a;
}

void z1() {
	int i;
	float a,b;
	for (i = 0; i < 5; i++) {
		cout << "Введите число >> ";
		cin >> a;
		b = PowerA3(a);
		cout << b << endl;
	}
}

int Sign(float x) {
	if (x < 0) {
		return -1;
	}
	if (x == 0) {
		return 0;
	}
	if (x > 0) {
		return 1;
	}
}

void z2() {
	float a, b;
	cout << "Введите два числа >> ";
	cin >> a >> b;
	cout << Sign(a) + Sign(b) << endl;
}

float RingS(float r1, float r2) {
	return 3.14 * r1 * r1 - 3.14 * r2 * r2;
}

void z3() {
	float r1, r2;
	cout << "Введите радиусы окружностей R1 > R2 >> ";
	cin >> r1 >> r2;
	if (r1 <= r2) {
		cout << "Неправильно введены данные\n";
		return;
	}
	cout << RingS(r1, r2) << endl;
}

string Quarter(float x,float y) {
	if (x > 0 && y > 0) {
		return "I";
	}
	if (x < 0 && y > 0) {
		return "II";
	}
	if (x < 0 && y < 0) {
		return "III";
	}
	if (x > 0 && y < 0) {
		return "IV";
	}
}

void z4() {
	float x, y;
	cout << "Введите кординаты точек x != 0 и y != 0 >> ";
	cin >> x >> y;
	if (x == 0 || y == 0) {
		cout << "Неправильно введены кординаты\n";
		return;
	}
	cout << Quarter(x, y) << endl;
}

double Fact2(int n) {
	int a = 1;
	if (n % 2 == 1) {
		for (int i = 1; i <= n; i += 2) {
			a *= i;
		}
	}
	if (n % 2 == 0) {
		for (int i = 2; i <= n; i += 2) {
			a *= i;
		}
	}
	return a;
}

void z5() {
	int a;
	cout << "Введите число > 0 >> ";
	cin >> a;
	if (a <= 0) {
		cout << "Неправильно введено число\n";
		return;
	}
	cout << Fact2(a) << endl;
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
