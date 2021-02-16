#include <iostream>

using namespace std;

int main()
{
    double a;
    cout << "Введите температуру в градусах Цельсия: ";
    cin >> a;
    cout << "Введенная температура равна: ";
    cout << a * 9 / 5 + 32 << " градусам по Фаренгейту\n";
    return 0;
}
