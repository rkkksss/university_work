#include <iostream>

using namespace std;

int main() {
    double rate, sum1, sum2;
    int years;
    cout << "������� ������ � ���������: ";
    cin >> rate;
    cout << "������� ��������� ����� � ������: ";
    cin >> sum1;
    cout << "������� �������� ����� � ������: ";
    cin >> sum2;
    years = 0;
    while (sum1 < sum2) {
        sum1 = sum1 + sum1 * rate / 100;
        years++;
    }
    cout << "�� �������� " << sum1 << " �������� ����� " << years << " ���." << endl;
    return 0;
}
