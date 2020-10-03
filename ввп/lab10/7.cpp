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
    if ((a + b > c) and (b + c > a) and (c + a > b)) cout << "Существует треугольник со сторонами a, b, c";
    else cout << "Не существует треугольник со сторонами a, b, c";
}
