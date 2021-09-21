#include<iostream>
#include<cmath>
using namespace std;

int z1() {
	double a, b, s, p;
	cout << "Vvedite storoni pryamougolnika:";
	cin >> a >> b;
	s = a * b;
	p = 2 * (a + b);
	cout << "S = " << s << "  P=" << p;
	return (0);
}

int z2() {
	double d, l;
	cout << "Vvedite diametr okruznosti:";
	cin >> d;
	l = 3.14 * d;
	cout << "L = " << l;
	return (0);
}

int z3() {
	double a, b, sr;
	cout << "Vvedite dva chisla:";
	cin >> a >> b;
	sr = (a + b)/2;
	cout << "Sr = " << sr;
	return (0);
}

int z4() {
	double a, b, s, r, p, c;
	cout << "Vvedite dva chisla:";
	cin >> a >> b;
	s = pow(a, 2) + pow(b, 2);
	r = pow(a, 2) - pow(b, 2);
	p = pow(a, 2) * pow(b, 2);
	c = pow(a, 2) / pow(b, 2);
	cout << "Summa: " << s << "  Raznost': " << r << "  Proizvedenie: " << p << "  Chasnoe: " << c;
	return (0);
}

int z5() {
	double a, b, s, r, p, c;
	cout << "Vvedite dva chisla:";
	cin >> a >> b;
	s = abs(a) + abs(b);
	r = abs(a) - abs(b);
	p = abs(a) * abs(b);
	c = abs(a) / abs(b);
	cout << "Summa: " << s << "  Raznost': " << r << "  Proizvedenie: " << p << "  Chasnoe: " << c;
	return (0);
}

int main() {
	int f;
	cout << "Vvedite nomer zadachi ot 1 do 5:";
	cin >> f;
	switch (f) {
	case 1: {z1();
		break;
	};
	case 2: {z2();
		break;
	};
	case 3: {z3();
		break;
	};
	case 4: {z4();
		break;
	};
	case 5: {z5();
		break;
	};
	}
	return (0);
}