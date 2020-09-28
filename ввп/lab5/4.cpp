#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Введите координаты первой точки через пробел: ";
    float x1, y1, x2, y2;
    cin >> x1 >> y1;
    cout << "Введите координаты второй точки через пробел: ";
    cin >> x2 >> y2;
    cout << "Периметр равен: " << 2 * (abs(x2 - x1) + abs(y2 - y1)) << '\n';
    cout << "Площадь равна: " << abs(x2 - x1) * abs(y2 - y1) << '\n';
}
