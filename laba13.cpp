#include <iostream>
#include <string>
using namespace std;

void z1() {
	int i, c;
	cout << "Введите стоимость 1 кг конфет >> ";
	cin >> c;
	for (i = 1; i <= 10; i ++) {
		cout << "Стоимость " << i/10. <<" кг конфет = " << (c * i)/10. << endl;
	}

}

void z2() {
	float p, i, n;
	cout << "Введите число >> ";
	cin >> n;
	p = 1;
	for (i = 1; i <= n; i++) {
		p *= 1 + i / 10.;
	}
	cout << p << endl;
}

void z3() {
	int n, i, s;
	cout << "Введите число >> ";
	cin >> n;
	s = 0;
	for (i = 1; i <= 2 * n - 1; i += 2) {
		s += i;
		cout << s << endl;
		}
	cout << n << "^2 = " << s << endl;
}

void z4() {
	int n, i;
	float a, s, b;
	cout << "Введите вещественное число A и целое число N >> ";
	cin >> a >> n;
	s = 1;
	b = 1;
	for (i = 1; i <= n; i++) {
		b *= a;
		s += b;
	}
	cout << s << endl;
}

void z5() {
	int n, i;
	float a, s, b;
	cout << "Введите вещественное число A и целое число N >> ";
	cin >> a >> n;
	s = 1;
	b = 1;
	for (i = 1; i <= n; i++) {
		b *= -a;
		s += b;
	}
	cout << s << endl;
}




int main()
{
	setlocale(LC_ALL, "Russian");
	int f;
	cout << "Введите номер задания от 1 до 5, чтобы выйти введите 0 >> ";
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
		cout << "Введите номер задания от 1 до 5, чтобы выйти введите 0 >> ";
		cin >> f;
	}
	return 0;
}


