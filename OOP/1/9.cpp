#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    char ch;
    cout << "������� ������ �����: ";
    cin >> a >> ch >> b;
    cout << "������� ������ �����: ";
    cin >> c >> ch >> d;
    cout << "����� �����: " << (a * d + b * c) << " / " << (b * d) << '\n';
    return 0;
}