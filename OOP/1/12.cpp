#include <iostream>

using namespace std;

int main()
{
    float sum, d;
    int a, b, c;
    cout << "������� ����� ���������� ������: ";
    cin >> sum;
    a = (int)sum;
    d = sum - a;
    b = (int)(d * 20);
    d = d * 20 - b;
    cout << "������������� ����� � ������ ����� ������: " << a << " ������, " << b << " ���������, " << (int)(d * 12) << " ������. " << endl;
    return 0;
}