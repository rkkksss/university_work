#include <iostream>

using namespace std;

int main() {
    int a1, b1, c1, a2, b2, c2, a, b, c;
	string ch;
	do {
		a = b = c = 0;
		cout << "������� ��� ����� � ������, ��������� � ������ (����� ������):" << endl;
		cout << "������ �����: ";
		cin >> a1 >> b1 >> c1;
		cout << "������ �����: ";
		cin >> a2 >> b2 >> c2;
		c = c1 + c2;
		if (c >= 12) {
			c = c - 12;
			b = 1;
		}
		b = b + b1 + b2;
		if (b >= 20) {
			b = b - 20;
			a = 1;
		}
		a = a + a1 + a2;
		cout << "�����: " << a << " " << b << " " << c << endl;
		cout << "���������� (�/�) ? ";
		cin >> ch;
	}
	while (ch != "�");
	return 0;
}
