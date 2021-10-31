#include <iostream>;
#include <cmath>;
using namespace std;

int z1() {
	int a, b; 
	cout << "Vvedite A i B >> ";
	cin >> a >> b;
	if (a == b) {
		a = 0;
		b = 0;
	}
	else {
		a = max(a, b);
		b = max(a, b);
	}
	cout << a << "  " << b << endl;
	return 0;
}

int z2() {
	int a, b, c, s;
	cout << "Vvedite 3 chisla >> ";
	cin >> a >> b >> c;
	s = a + b + c - min(min(a, b), c);
	cout << "Summa dvuh naibolshih = " << s << endl;
	return 0;
}

int z3() {
	int ax, ay, bx, by, cx, cy;
	double	rc, rb;
	cout << "Vvedite kordinati tochki A (x,y) >> ";
	cin >> ax >> ay;
	cout << "Vvedite kordinati tochki B (x,y) >> ";
	cin >> bx >> by;
	cout << "Vvedite kordinati tochki C (x,y) >> ";
	cin >> cx >> cy;
	rb = sqrt(pow(ax - bx, 2) + pow(ay - by, 2));
	rc = sqrt(pow(ax - cx, 2) + pow(ay - cy, 2));
	if (rb < rc) {
		cout << "B " << rb << endl;
	}
	else {
		if (rc < rb) {
			cout << "C " << rc << endl;
		} 
		else {
			cout << " C i B ravnoudaleni " << rb << endl;

		}
	}
	return 0;
}

int z4() {
	int x, y;
	cout << "Vvedite kordinati tochki (x,y) >> ";
	cin >> x >> y;
	if (x > 0) {
		if (y > 0) {
			cout << "I chetvrt'" << endl;
		}
		else { cout << "IV chetvert'" << endl; }
	}
	else {
		if (y > 0) {
			cout << "II chetvrtt'" << endl;
		}
		else { cout << "III chetvert'" << endl; }
	}
	return 0;
}

int z5() {
	int a;
	cout << "Vvedite chislo >> ";
	cin >> a;
	if (a == 0) {
		cout << "Nulevoe ";
	}
	else {
		if (a > 0) {
			cout << "Pologhitelnoe ";
		}
		else {
			cout << "Otricatelnoe ";
		};
		if (a % 2 != 0) {
			cout << "nechetnoe ";
		}
		else { cout << "chetnoe ";
		}
	};

	cout << "chislo" << endl;
	return 0;
}

int z6() {
	int a;
	cout << "Vvedite chislo ot 1 do 999 >> ";
	cin >> a;
	if (a % 2 != 0) {
		cout << "Nechetnoe ";
	}
	else {
		cout << "Chetnoe ";
	}

	if (a > 0 && a < 10) {
		cout << "odnoznachnoe ";
	}
	else {
		if (a > 9 && a < 100) {
			cout << "dvuznachnoe ";
		}
		else if (a < 1000) {
			cout << "trehznachnoe ";
		}
	}
	cout << "chislo" << endl;
	return 0;
}

int main() {
	int f;
	cout << "Vvedite nomer zadaniya ot 1 do 6, chtobi viyti vvedite 0 >> ";
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
		cout << "Vvedite nomer zadaniya ot 1 do 6, chtobi viyti vvedite 0 >> ";
		cin >> f;
	}
	return 0;
}