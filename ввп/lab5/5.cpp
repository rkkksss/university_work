#include <bits/stdc++.h>

using namespace std;

int main() {
    //предположим, что введённый треугольник существует
    setlocale(LC_ALL, "Russian");
    cout << "Введите координаты первой точки через пробел: ";
    float x1, y1, x2, y2, x3, y3, a, b, c, p, s;
    cin >> x1 >> y1;
    cout << "Введите координаты второй точки через пробел: ";
    cin >> x2 >> y2;
    cout << "Введите координаты третьей точки через пробел: ";
    cin >> x3 >> y3;
    a = hypot((x1 - x2), (y1 - y2));
    b = hypot((x1 - x3), (y1 - y3));
    c = hypot((x2 - x3), (y2 - y3));
    p = (a + b + c) / 2;
    s = sqrt(p*(p - a)*(p - b)*(p - c));
    cout << "Периметр равен: " << a + b + c << '\n';
    cout << "Площадь равна: " << s << '\n';
}
