#include <iostream>

using namespace std;

int main() {
    double sum, rate;
    int years;
    cout << "������� ��������� ����� � ������: ";
    cin >> sum;
    cout << "������� ����� ���: ";
    cin >> years;
    cout << "������� ������ � ���������: ";
    cin >> rate;
    for (int i = 0; i < years; ++i) {
        sum = sum + sum * rate / 100;
    }
    cout << "����� " << years << " ��� �� �������� " << sum << " �������." << endl;
    return 0;
}