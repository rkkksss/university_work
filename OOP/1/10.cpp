#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c;
    cout << "������� ���������� ������: ";
    cin >> a;
    cout << "������� ���������� ���������: ";
    cin >> b;
    cout << "������� ���������� ������: ";
    cin >> c;
    cout << "���������� ������: " << char(156) << fixed << setprecision(2) << a + b / 20 + c / 240 << '\n';
    return 0;
}