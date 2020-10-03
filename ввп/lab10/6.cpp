#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "a =  ";
    cin >> a;
    cout << "b =  ";
    cin >> b;
    cout << "c =  ";
    cin >> c;
    if ((a * a + b * b == c * c) or (b * b + c * c == a * a) or (c * c + a * a == b * b)) cout << "Треугольник со сторонами a, b, c является прямоугольным";
    else cout << "Треугольник со сторонами a, b, c не является прямоугольным";
}
