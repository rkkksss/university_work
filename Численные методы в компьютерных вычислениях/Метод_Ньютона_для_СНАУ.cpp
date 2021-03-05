#include <iostream>
#include <cmath>

using namespace std;

double f1(double x, double y) { // первая функция
    return sin(y - 1) + x - 1.3;
}

double f2(double x, double y) { // вторая функция
    return y - sin(x + 1) - 0.8;
}

double f11(double x, double y) { // производная по х 1 ур-ния
    return 1;
}

double f12(double x, double y) { // производная по х 2 ур-ния
    return -cos(x + 1);
}

double f21(double x, double y) { // производная по у 1 ур-ния
    return cos(y - 1);
}

double f22(double x, double y) { // производная по у 2 ур-ния
    return 1;
}


void matrix(double a[2][2]) { // считаем матрицу якоби
    double det, ar;
    det = a[0][0] * a[1][1] - a[0][1] * a[1][0];
    ar = a[0][0];
    a[0][0] = a[1][1] / det;
    a[1][1] = ar / det;
    a[0][1] = - a[0][1] / det;
    a[1][0] = - a[1][0] / det;
}

int main() {
    double x, y, dx, dy, eps, per, a[2][2], b[2]; // объявляем переменные
    cout << "Введите значение х0: ";
    cin >> x;
    cout << "Введите значение y0: ";
    cin >> y;
    cout << "Введите значение погрешности: ";
    cin >> eps;
    double i = 0;
    do {
        a[0][0] = f11(x, y);
        a[0][1] = f12(x, y);
        a[1][0] = f21(x, y);
        a[1][1] = f22(x, y);
        matrix(a);
        dx = - a[0][0] * f1(x, y) + -a[0][1] * f2(x, y);
        dy = - a[1][0] * f1(x, y) + -a[1][1] * f2(x, y);
        x = x + dx;
        y = y + dy;
        b[0] = f1(x, y);
        b[1] = f2(x, y);
        per = sqrt(b[0] * b[0] + b[1] * b[1]);
        i++;
    } while (per >= eps);
    cout << "Значение х = " << x << '\n';
    cout << "Значение y = " << y << '\n';
    cout << "Точность = " << per << '\n';
    cout << "Количество итераций = " << i << '\n';
}
