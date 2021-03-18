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
    cout << "Введите желаемую точность: ";
    cin >> n;
    double sum = 0;
    double h = (b - a) / n; // считаем шаг
    for (int i = 0; i < n; i++) {
        double x = a + i * h;
        sum += f(x); // суммируем значения
    }
    cout << "Ответ: " << sum * h << '\n';
}
