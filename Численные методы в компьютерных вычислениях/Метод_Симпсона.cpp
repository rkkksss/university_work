#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
    return 1 / (sqrt(5 - x * x)); // функция из задания
}

int main() {
    double a = 0;
    double b = 1;
    int n;
    cout << "Введите желаемое количество точек: ";
    cin >> n;
    double h = (b - a) / n;
    double ans = 0;
    for (int i = 0; i < n; i++) {
        double x1 = a + i * h;
        double x2 = a + (i + 1) * h;
        ans += h / 6 * (f(x1) + 4 * f(0.5 * (x1 + x2)) + f(x2));
    }
    cout << "Ответ: " << ans;
}
