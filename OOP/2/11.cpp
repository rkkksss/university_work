#include <iostream>

using namespace std;

int main() {
    int num, a1, b1, c1, a2, b2, c2, a, b, c, sum;
    double m;
    string ch;
    do {
        cout << "������� �������� (1 ��������, 2 ���������, 3 ���������): ";
        cin >> num;
        switch (num) {
            case 1:
                cout << "������� ��� ����� � ������, ��������� � ������:" << endl;
                cout << "������ �����: ";
                cin >> a1 >> b1 >> c1;
                cout << "������ �����: ";
                cin >> a2 >> b2 >> c2;
                sum = (a1 * 240 + b1 * 12 + c1) + (a2 * 240 + b2 * 12 + c2);
                a = sum / 240;
                sum = sum % 240;
                b = sum / 12;
                c = sum % 12;
                cout << "���������: " << a << " " << b << " " << c << endl;
                break;
            case 2:
                cout << "������� ��� ����� � ������, ��������� � ������ (����� ������):" << endl;
                cout << "������ �����: "; cin >> a1 >> b1 >> c1;
                cout << "������ �����: ";	cin >> a2 >> b2 >> c2;
                sum = (a1 * 240 + b1 * 12 + c1) - (a2 * 240 + b2 * 12 + c2);
                a = sum / 240;
                sum = sum % 240;
                b = sum / 12;
                c = sum % 12;
                cout << "���������: " << a << " " << b << " " << c << endl;
                break;
            case 3:
                cout << "������� ����� � ������, ��������� � ������ (����� ������)\n� ������������ �����:" << endl;
                cout << "�����: "; cin >> a1 >> b1 >> c1;
                cout << "������������ �����-���������: ";
                cin >> m;
                sum = (a1 * 240 + b1 * 12 + c1) * m;
                a = sum / 240; sum = sum % 240;
                b = sum / 12;
                c = sum % 12;
                cout << "���������: " << a << " " << b << " " << c << endl;
                break;
            default: cout << "� ��� �����, ������� ���������� ����� ��������." << endl;
        }
        cout << "��������� ��� ���� �������� (�/�) ? "; cin >> ch;
    } while (ch != "�");
    return 0;
}
