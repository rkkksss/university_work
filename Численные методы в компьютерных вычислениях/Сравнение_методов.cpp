#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(double x) {
    return 1 / (sqrt(5 - x * x)); // функция из задания
}

double rectangle(double a, double b, int n) {
    double sum = 0;
    double h = (b - a) / n;
    for (int i = 0; i < n; i++) {
        double x = a + i * h;
        sum += f(x); // суммируем значения
    }
    return sum * h;
}

double rectangle_error(int n) {
    double a = 0;
    double b = 1;
    double res = asin(sqrt(5) / 5);
    return abs(rectangle(a, b, n) - res);
}

double trepeze(double a, double b, int n) {
    double h = (b - a) / n;
    double ans = 0;
    for(int i = 0; i < n; i++) {
        double x1 = a + i * h;
        double x2 = a + (i + 1) * h;
        ans += 0.5 * (x2 - x1) * (f(x1) + f(x2));
    }
    return ans;
}

double trepeze_error(int n) {
    double a = 0;
    double b = 1;
    double res = asin(sqrt(5) / 5);
    return abs(trepeze(a, b, n) - res);
}

double simpson(double a, double b, int n) {
    double h = (b - a) / n;
    double ans = 0;
    for (int i = 0; i < n; i++) {
        double x1 = a + i * h;
        double x2 = a + (i + 1) * h;
        ans += (x2 - x1) / 6 * (f(x1) + 4 * f(0.5 * (x1 + x2)) + f(x2));
    }
    return ans;
}

double simpson_error(int n) {
    double a = 0;
    double b = 1;
    double res = asin(sqrt(5) / 5);
    return abs(simpson(a, b, n) - res);
}


int main() {
    double a = 0;
    double b = 1;
    int n[5] = {10, 20, 40, 80, 160};
    cout << "Сравним скорость сходимости различных методов: \n";
    cout << "     n     | метод прямоугольников | метод трапеций | метод Симпсона  \n";
    cout << "_______________________________________________________________________\n";
    for (int i = 0; i < 5; ++i) {
        cout << "  " << setw (8) << n[i] << " | " << setw (21) << rectangle(a, b, n[i]) << " | " << setw (14) << trepeze(a, b, n[i]) << " | " <<  setw (12) << simpson(a, b, n[i]) << '\n';
    }
    cout << "Сравним погрешность разных методов: \n";
    cout << "     n     | метод прямоугольников | метод трапеций | метод Симпсона  \n";
    cout << "_______________________________________________________________________\n";
    for (int i = 0; i < 5; ++i) {
        cout << "  " << setw (8) << n[i] << " | " << setw (21) << rectangle_error(n[i]) << " | " << setw (14) << trepeze_error(n[i]) << " | " <<  setw (12) << simpson_error(n[i]) << '\n';
    }
    cout << "Сравним отношения погрешностей R_(n-1)/R_n\n";
    cout << "     n     | метод прямоугольников | метод трапеций | метод Симпсона  \n";
    cout << "_______________________________________________________________________\n";
    for (int i = 1; i < 5; ++i) {
        cout << "  " << setw (8) << n[i] << " | " << setw (21) << rectangle_error(n[i] - 1) / rectangle_error(n[i]) << " | " << setw (14) << trepeze_error(n[i - 1]) / trepeze_error(n[i]) << " | " <<  setw (12) << simpson_error(n[i - 1]) / simpson_error(n[i]) << '\n';
    }
}
