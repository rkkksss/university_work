#include <iostream>
#include <cmath>

using namespace std;

double f(double x) { //функция из задания
    return log10(1 + 2 * x) - 2 + x;
}

int main() {
    double a, b, eps;
    cout << "Введите значение левой границы: ";
    cin >> a;
    cout << "Введите значение правой границы: ";
    cin >> b;
    cout << "Введите значение погрешности: ";
    cin >> eps;
    long long i = 0;
    while (abs(b - a) > eps) {
        a = b - (b - a) / (f(b) - f(a)) * f(b) ;
        b = a - (a - b) / (f(a) - f(b)) * f(a);
        i++;
    }
    cout << "Значение х = " << b << '\n';
    cout << "Точность = " << abs(a - b) << '\n';
    cout << "Количество итераций = " << i << '\n';
}
