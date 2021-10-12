#include <iostream>
using namespace std;

int z1() {
	int a, b;
	cout << "Vvedite razmer faila v baytah >> ";
	cin >> a;

	while (a < 0) {
		cout << "Oshibka, Vvedite ne otrizatelnoe kolichestvo bait >> ";
		cin >> a;
	};

	if (a % 1024 > 0) {
		b = a / 1024 + 1;

	}
	else {
		b = a / 1024;
	}
	cout << a << " bait = " << b << " KB" << endl;
	return 0;
}

int z2() {
	int a, b, c;
	cout << "Vvedite dlini otrezkov A i B (A > B) >>";
	cin >> a >> b;
	while (a < b) {
		cout << "Oshibka, vvedite A > B >> ";
		cin >> a >> b;
	};
		c = a / b;
		cout << "V otrezke A pomestitsa " << c << " otrezkov B" << endl;
		return 0;
}

int z3() {
	int a, b, c;
	cout << "Vvedite dlini otrezkov A i B (A > B) >> ";
	cin >> a >> b;
	while (a < b) {
		cout << "Oshibka, vvedite A > B >> ";
		cin >> a >> b;
	};
	c = a - b*(a / b);
	cout << "Nezanataya chast A = " << c << endl;
	return 0;
}

int z4() {
	int a, b, c;
	cout << "Vvedite dvuhznachnoe chislo >> ";
	cin >> a;
	while (a / 100 != 0 || a % 100 < 10) {
		cout << "Oshibka, vvedite dvuhznachnoe chislo >> ";
		cin >> a;
	}
	b = a / 10;
	c = a % 10;
	cout << "Pri perestanovke zifr chisla " << a << " poluchaetsa " << c << b << endl;
	return 0;
}

int z5() {
	int a, b, c;
	cout << "Vvedite trehznachnoe chislo >> ";
	cin >> a;
	while (a / 1000 != 0 || a % 1000 < 100)   { 
		cout << "Oshibka, vvedite trehznachnoe chislo >> ";
		cin >> a;
	}
	b = a / 100;
	c = a % 100;
	cout << "Esli perestavit odnu zifru s leva na pravo v chisle " << a << " poluchitsa chislo " << c << b << endl;
	return 0;
}

int main() {
	int f;
	cout << "Vvedite nomer zadaniya ot 1 do 5, chtobi viyti vvedite 0 >> ";
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
		cout << "Vvedite nomer zadaniya ot 1 do 5, chtobi viyti vvedite 0 >> ";
		cin >> f;

	}
}