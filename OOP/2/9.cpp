#include <iostream>

using namespace std;

int main() {
    int a, b, res;
    cout << "������� ����� ���� �� ������: ";
    cin >> b;
    cout << "������� ����� ������: ";
    cin >> a;
    while (a < b) {
        cout << "����� ������ �� ������ ���� ������ ����� ���� �� ������." << endl;
        cout << "��������� �����. ������� ����� ������: ";
        cin >> a;
    }
    res = 1;
    for (int i = 0; i < b; ++i) {
        res = res * a;
        a = a - 1;
    }
    cout << "����� ��������� �������� ������ �� ������: " << res << endl;
    return 0;
}