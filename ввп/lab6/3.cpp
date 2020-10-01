#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    long long a, b, c, temp;
    cout << "Введите значение А: ";
    cin >> a;
    cout << "Введите значение В: ";
    cin >> b;
    cout << "Введите значение C: ";
    cin >> c;

    temp = a;
    a = c;
    c = temp;

    temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << ". b = " << b << ". c = " << c << ".";
}
