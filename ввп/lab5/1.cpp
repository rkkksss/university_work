#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Введите координаты первой точки через пробел: ";
    float x1, y1, x2, y2;
    cin >> x1 >> y1;
    cout << "Введите координаты второй точки через пробел: ";
    cin >> x2 >> y2;
    cout << "Расстояние между точками равно: " << sqrt((x2 - x1) * (x2 - 1) + (y2 - y1) * (y2 - y1));
}
