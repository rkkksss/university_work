#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, x0, y0, d1, d2, eps; // объявляем переменные
    cout << "Введите значение х0: ";
    cin >> x0;
    cout << "Введите значение y0: ";
    cin >> y0;
    cout << "Введите значение погрешности: ";
    cin >> eps;
    long long i = 0;
    do {
        i++;
        x = 1.3 - sin(y0 - 1);
        y = 0.8 + sin(x0 + 1);
        d1 = sin(y - 1) + x - 1.3;
        d2 = y - sin(x + 1) - 0.8;
        x0 = x;
        y0 = y;
    }
    while (abs(d1) > eps and (abs(d2) > eps));
    cout << "Значение х = " << x << '\n';
    cout << "Значение y = " << y << '\n';
    cout << "Точность = " << (d1 >= d2 ? d1 : d2) << '\n';
    cout << "Количество итераций = " << i << '\n';
}
