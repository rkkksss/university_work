#include <bits/stdc++.h>

using namespace std;

double f(double x) {
    return 2 - log10(1 + 2 * x);
}

int main() {
    double x0, x1, eps; // объявляем переменные
    cout << "Введите значение х0: ";
    cin >> x0;
    x1 = x0;
    cout << "Введите значение погрешности: ";
    cin >> eps;
    long long i = 0;
    do {
        i++;
        x0 = x1;
        x1 = f(x0);
    }
    while (abs(x0 - x1) > eps);
    cout << "Значение х = " << x1 << '\n';
    cout << "Точность = " << (abs(x0 - x1)) << '\n';
    cout << "Количество итераций = " << i << '\n';
}
