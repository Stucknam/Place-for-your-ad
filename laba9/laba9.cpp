#include <iostream>
using namespace std;

int z1() {
	int a, b;
	cout << "Vvedite kolichestvo sekund >> ";
	cin >> a;
	b = a % 60;
	cout << b << endl;
	return 0;
}

int z2() {
	int k, a;
	string b;
	cout << "Vvedite den' >> ";
	cin >> k;
	a = k % 7;
	switch (a) {
	case 1: b = "Monday";
		break;
	case 2: b = "Tuseday";
		break;
	case 3: b = "Wednesday";
		break;
	case 4: b = "Thursday";
		break;
	case 5: b = "Friday";
		break;
	case 6: b = "Saturday";
		break;
	case 0: b = "Sunday";
		break;
	};
	cout << k << " den' - eto " << b << endl;
	return 0;
}

int z3() {
	int k, a, n;
	string b;
	cout << "Vvedite den' i nomer pervogo dnya>> ";
	cin >> k >> n;
	a = k % 7 + n-1;
	if (a > 7) { a -= 7; };
	switch (a) {
	case 1: b = "Monday";
		break;
	case 2: b = "Tuseday";
		break;
	case 3: b = "Wednesday";
		break;
	case 4: b = "Thursday";
		break;
	case 5: b = "Friday";
		break;
	case 6: b = "Saturday";
		break;
	case 7: b = "Sunday";
		break;
	};
	cout << k << " den' - eto " << b << endl;
	return 0;
}

int z4() {
	int a, b, c, k1, k2, k, s;
	cout << "Vvedite storoni pryamougolnika >> ";
	cin >> a >> b;
	cout << "Vvedite storonu kvadrata >> ";
	cin >> c;
	k1 = a / c;
	k2 = b / c;
	k = k1 * k2;
	s = a * b - k * c * c;
	cout << "Maksimal'noe kolichestvo = " << k << " Nezanatays ploshad' = "<< s << endl;
	return 0;
}

int z5() {
	int a, b;
	cout << "Vvedite nomer goda >> ";
	cin >> a;

	if (a % 100 != 0) {
		b = a / 100 + 1;
	}
	else { b = a / 100; };
	cout << a << "god - eto " << b << " stoletie" << endl;
	return 0;
}

int main()
{
	int f;
	cout << "Vvedite nomer zadaniya ot 1 do 5, chtobi viyti vvedite 0 >> ";
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
		}
		cout << "Vvedite nomer zadaniya ot 1 do 5, chtobi viyti vvedite 0 >> ";
		cin >> f;
	}
}


