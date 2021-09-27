#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

int z1() {
	double x1, y1, x2, y2, l;
	printf("\nVvedite kordinati tochek x1 y1 x2 y2:");
		scanf_s("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
		l = sqrt(pow((max(x1, x2) - min(x1, x2)), 2) + pow(max(y1, y2) - min(y1, y2), 2));
		printf("\nDlinna otrezka %.2lf", l);
		return (0);
}

int z2() {
	float a, b, c, ac, bc,s;
	printf("\nVvedite tochki A B C:");
	scanf_s("%f%f%f", &a, &b, &c);
	ac = abs(c - a);
	bc = abs(c - b);
	s = ac + bc;
	printf("\nDlinna otrezka ac %.2f  dlinna bc %.2f  summa %.2f", ac,bc,s);
	return (0);
}

int z3() {
	float a, b, c, ac, bc, p;
	printf("\nVvedite tochki A B C:");
	scanf_s("%f%f%f", &a, &b, &c);
	ac = abs(c - a);
	bc = abs(c - b);
	p = ac * bc;
	printf("\n Proizvedenie otrezkov %.2f", p);
	return (0);
}

int z4() {
	float x1, y1, x2, y2, p, s;
	printf("\nVvedite kordinati tochek x1 y1 x2 y2:");
	scanf_s("%f%f%f%f", &x1, &y1, &x2, &y2);
	p = 2*(abs(x2-x1)+abs(y2-y1));
	s = abs(x2 - x1) * abs(y2 - y1);
	printf("\nPerimetr %.2f ploshad' %.2f", p, s);
	return (0);
	}

int z5() {
	double x1, y1, x2, y2, x3, y3, p, s, a, b, c;
	printf("\nVvedite kordinati tochek x1 y1 x2 y2 x3 y3: ");
	scanf_s("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
	a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("\nPerimetr %.2lf ploshad' %.2lf", p*2, s);
	return (0);
}

int main() {
	int f;
	cout << "Vvedite nomer zadachi, dla vihoda vvedite 0: ";
	cin >> f;
	while (f != 0){
	switch (f) {
	case 1:
		z1();
		break;
	case 2:
		z2();
		break;
	case 3:
		z3();
		break;
	case 4:
		z4();
		break;
	case 5:
		z5();
		break;
	};
	cout << endl << "Vvedite nomer zadachi, dla vihoda vvedite 0: ";
	cin >> f;
}

}
