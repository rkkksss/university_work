#include <iostream>

using namespace std;

int main() { // ���������� �������� ������� ���������
    int a, b, c, d;
    char num;
    string ch;
    do {
        cout << "������� ������ �����, ���� �������� � ������ �����: ";
        cin >> a >> b >> num >> c >> d;
        switch (num) {
            case '+':
                cout << "��������� ��������: " << a * d + b * c << "/" << b * d << endl;
                break;
            case '-':
                cout << "��������� ��������: " << a * d - b * c << "/" << b * d << endl;
                break;
            case '*':
                cout << "��������� ��������: " << a * c << "/" << b * d << endl;
                break;
            case '/':
                cout << "��������� ��������: " << a * d << "/" << b * c << endl;
                break;
            default: cout << "������ �������� ���� ��������! ���������� ���." << endl;
        }
        cout << "��������� ��� ���� �������� (�/�) ? ";
        cin >> ch;
    } while (ch != "�");
    return 0;
}
