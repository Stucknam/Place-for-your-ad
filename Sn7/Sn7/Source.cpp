#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int z1() {
	int a;
	double d;
	string r;
	cout << "Vvedite znacheni ugla ot 0 do 360 >> ";
	cin >> a;
	d = (3.14 / 180);
	switch (a) {
	case 0: r = "0";
		break;
	case 30: r = "pi/6";
		break;
	case 45: r = "pi/4";
		break;
	case 60: r = "pi/3";
		break;
	case 90: r = "pi/2";
		break;
	case 120: r = "2pi/3";
		break;
	case 135: r = "3pi/4";
		break;
	case 150: r = "5pi/6";
		break;
	case 180: r = "pi";
		break;
	case 210: r = "7pi/6";
		break;
	case 225: r = "5pi/4";
		break;
	case 240: r = "4pi/3";
		break;
	case 270: r = "3pi/2";
		break;
	case 300: r = "5pi/3";
		break;
	case 330: r = "11pi/6";
		break;
	case 315: r = "7pi/4";
		break;
	case 360: r = "2pi";
		break;
	default: r = to_string(a * d);
	}
	cout << a << " gradusov = " << r << " radian" << endl;
	return 0;
}

int z2() {
	double d, r, a;
	cout << "Vvedite znacheni ugla v radianah ot 0 do 2pi >> ";
	cin >> a;
	d = (3.14 / 180);
	r = a / d;
	cout << a << " radian = " << r << " gradusov" << endl;
	return 0;
}

int z3() {
	double a, x, b, y, b1;
	cout << "Vvedite ves i stoimost' konfet >> ";
	cin >> a >> x;
	b = x / a;
	cout << "1 kg stoit " << b << " rubley, skolko vi hotite vsat' >> ";
	cin >> y;
	b1 = b * y;
	cout << y << " kg stoit " << b1 << " rubley" << endl;
	return 0;
}
int z4() {
	double v1, v2, s, t, r;
	cout << "Vvedite skorosti pervogo i vtorogo avto, rasstoyanie i vrema >> ";
	cin >> v1 >> v2 >> s >> t;
	r = s + abs(v1 - v2) * t;
	cout << " Cherez " << t << " chasov rasstoyanie budet " << r << endl;
	return 0;
}

int z5() {
	double a, b, x;
	cout << "A*x + B = 0  vvedite A i B >> ";
	cin >> a >> b;
	x = -b / a;
	cout << "x= " << x << endl;
	return 0;
}

int z6() {
	double a1, b1, c1, a2, b2, c2, d, x, y;
	cout << "A1*x + B1*y = C1" << endl << "A2*x + B2*y = C2" << endl << "Vvedite koefficienti A1 B1 C1 A2 B2 C2 >> ";
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	d = a1 * b2 - a2 * b1;
	x = (c1 * b2 - c2 * b1) / d;
	y = (a1 * c2 - a2 * c1) / d;
	cout << "x= " << x << "  y= " << y << endl;
	return 0;
}

int main(){
	int f;
	cout << "Vveedite nomer zadaniya ili 0 dlya vihoda >> ";
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
		cout << "Vveedite nomer zadaniya ili 0 liya vihoda>> ";
		cin >> f;
	}
}
