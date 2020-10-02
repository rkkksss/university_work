#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double x, y, s, t;
    cout << "Скорость v1: ";
    cin >> x;
    cout << "Скорость v2: ";
    cin >> y;
    cout << "Расстояние между автомобилями: ";
    cin >> s;
    cout << "Время удаления: ";
    cin >> t;
    x = x + y;
    cout << "Расстояние между автомобилями через " << t << " часов равно " << s + x * t << " км.";
}
