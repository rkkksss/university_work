#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double a1, a2, b1, b2, c1, c2, d;
    cout << "Введите коэффициенты а1, b1, c1: ";
    cin >> a1 >> b1 >> c1;
    cout << "Введите коэффициенты a2, b2, c2: ";
    cin >> a2 >> b2 >> c2;
    d = a1 * b2 - a2 * b1;
    cout << "x = " << (c1 * b2 - c2 * b1) / d << '\n';
    cout << "y = " << (a1 * c2 - a2 * c1) / d;
}
