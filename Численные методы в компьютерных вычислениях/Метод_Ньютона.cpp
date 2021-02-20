#include <iostream>
#include <cmath>

using namespace std;

double f(double x) { // функция из задания
    return log10(1 + 2 * x) - 2 + x;
}

double f1(double x) { // первая производная
    return 1 + (2 / (log(10) * (1 + 2 * x)));
}

double f2(double x) { // вторая производная
    return -4 / (log(10) * (2 * x + 1) * (2 * x + 1));
}
int main() {
    double a, b, c, eps;
    cout << "Введите значение левой границы: ";
    cin >> a;
    cout << "Введите значение правой границы: ";
    cin >> b;
    cout << "Введите значение погрешности: ";
    cin >> eps;
    long long i = 0;
    if (f(a) * f2(a) > 0) c = a;
    else c = b;
    do {
        c = c - f(c) / f1(c);
        i++;
    }
    while (abs(f(c)) >= eps);
    cout << "Значение х = " << c << '\n';
    cout << "Точность = " << abs(f(c)) << '\n';
    cout << "Количество итераций = " << i << '\n';
}
