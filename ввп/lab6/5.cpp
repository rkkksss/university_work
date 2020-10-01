#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    long long x;
    cout << "Введите значение х: ";
    cin >> x;
    x -= 3;
    x = x * x * x;
    cout << "Значение функции y = 4(x−3)^6 − 7(x−3)^3 + 2  при x = " << x << " : " << 4 * x * x - 7 * x + 2;
}
