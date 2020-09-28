#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Введите координаты точки A через пробел: ";
    float x1, x2, x3;
    cin >> x1;
    cout << "Введите координаты точки B через пробел: ";
    cin >> x2;
    cout << "Введите координаты точки C через пробел: ";
    cin >> x3;
    cout << "Длина отрезка АС: " << abs(x3 - x1) << '\n';
    cout << "Длина отрезка BС: " << abs(x3 - x2) << '\n';
    cout << "Сумма длинн отрезков: " << abs(x3 - x1) + (x3 - x2) << '\n';
}
