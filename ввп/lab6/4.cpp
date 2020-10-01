#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    long long x;
    cout << "Введите значение х: ";
    cin >> x;
    cout << "Значение функции y = 3x^6 − 6x^2 − 7 при x = " << x << " : " << 3 * (x * x * x) * (x * x * x) - 6 * x * x - 7;
}
