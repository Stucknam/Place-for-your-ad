#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int z1() {
	int a, b, c;
	cout << "Vvedite A i B >> ";
	cin >> a >> b;
	c = a;
	a = b;
	b = c;
	cout << endl << a << "  " << b << endl;
	return (0);
}

int z2() {
	int a, b, c, d;
	cout << "Vvedite A, B i C >> ";
	cin >> a >> b >> c;
	d = b;
	b = a;
	a = c;
	c = d;

	cout << endl << a << "  " << b << "  " << c << endl;
	return (0);
}

int z3() {
	int a, b, c, d;
	cout << "Vvedite A, B i C >> ";
	cin >> a >> b >> c;
	d = c;
	c = a;
	a = b;
	b = d;

	cout << endl << a << "  " << b << "  " << c << endl;
	return (0);
}

int z4() {
	double x, y;
	cout << "Vvedite x >> ";
	cin >> x;
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << "y(" << x << ") = " << y << endl;
	return(0);
}

int z5() {
	double x, y;
	cout << "Vvedite x >> ";
	cin >> x;
	y = 4 * pow((x-3), 6) - 7 * pow((x-3), 3) + 2;
	cout << "y(" << x << ") = " << y << endl;
	return(0);
}

int z6() {
	int a, b, c;
	cout << "Vvedite A >> ";
	cin >> a;
	b = pow(a,2);
	c = b * b * b * b;
	cout << c << endl;
	return(0);
}

int z7() {
	int a, b, c, d;
	cout << "Vvedite A >> ";
	cin >> a;
	b = pow(a, 2);
	c = a * b;
	d = c*c*c*c*c;
	cout << d << endl;
	return (0);
}

int main() {
	int f;
	cout << "Vvedite nomer zadaniya ot 1 do 7, chtobi viyti vvedite 0 >> ";
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
		case 7: z7();
			break;
		}
		cout << "Vvedite nomer zadaniya ot 1 do 7, chtobi viyti vvedite 0 >> ";
		cin >> f;
	}
}
