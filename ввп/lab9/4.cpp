#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b, c, tmp;
    cout << "a =  ";
    cin >> a;
    cout << "b =  ";
    cin >> b;
    cout << "c =  ";
    cin >> c;
    tmp = (a % c) * (b % c);
    cout << "Количество квадратов в прямоугольнике: " << tmp << '\n';
    tmp = tmp * c * c;
    tmp = a * b - tmp;
    cout << "Площадь незанятой части: " << tmp;
}
