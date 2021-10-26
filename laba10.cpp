#include <iostream>
using namespace std;

int z1() {
	int a, b;
	string c;
	cout << "Vvedite A i B >> ";
	cin >> a >> b;
	;
	if ((a > 2) && (b <= 3)) {
		cout << "True" << endl;
	}
	else { cout << "False" << endl; }
	return 0;
}

int z2() {
	int a, b, c;
	cout << "Vvedite tri zelix chisla >> ";
	cin >> a >> b >> c;
	if (a < b && b < c) {
		cout << "True" << endl;
	}
	else { cout << "False" << endl; }
	return 0;
}

int z3() {
	int a;
	cout << "Vvedite chislo >> ";
	cin >> a;
	if ((a % 2 == 0) && (a % 100 > 9) && (a / 100 >= 0)) {
		cout << "Cislo chetnoe i dvihznachnoe" << endl;
	}
	else {
		cout << "Cislo ne chetnoe i dvihznachnoe" << endl;
	}
	return 0;
}

int z4() {
	int a, b, c, d;
	cout << "Vvedite trehznachnoe chislo >> ";
	cin >> a;
	while ((a % 1000 < 100) || (a / 1000 > 0)) {
		cout << "Vvedi trehznachnoe chislo >> ";
		cin >> a;
	}
	b = a % 10;
	c = (a / 10) % 10;
	d = a / 100;
	if (((d < c) && (c < b)) || ((d > c) && (c > b))) {
		cout << "Cifri obrazuyut vozrastayuchuyu ili ybivayuchuyu posledovatelnost'" << endl;
	}
	else { cout << "Cifri ne obrazuyut vozrastayuchuyu ili ybivayuchuyu posledovatelnost'" << endl; }
	return 0;
}

int z5() {
	int a;
	cout << "Vvedite chrtirehznachnoe chislo >> ";
	cin >> a;
	if ((a / 1000 == a % 10) && ((a % 1000) / 100 == ((a % 100) / 10))) {
		cout << "Chislo mojno prochitat' odinakogo s leva na pravo i s prava na levo" << endl;

	}
	else {
		cout << "Chislo nelsa prochitat' odinakogo s leva na pravo i s prava na levo" << endl;
	}
	return 0;

}

int z6() {
	int a, b, c, d;
	cout << "Vvedite storoni treugolnika >> ";
	cin >> a >> b >> c;
	if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
		cout << "Treugolnik pryamougolniy" << endl;

	}
	else {
		cout << "Treugolnik ne pryamougolniy" << endl;
	}
	return 0;
}

int z7() {
	int a, b, c;
	cout << "Vvedite storoni treugolnika >> ";
	cin >> a >> b >> c;
	if ((a < (b + c)) && (b < (a + c)) && (c < (a + b))) { cout << "Treugolnik syshhestvuet" << endl; }
	else { cout << "Treugolnik ne syshhestvuet" << endl; }
	return 0;
}

int main()
{
	int f;
	cout << "Vvedite nomer zadaniya ot 1 do 7, chtobi viyti vvedite 0 >> ";
	cin >> f;
	while (f != 0) {
		switch (f) {
		case 0:break;
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