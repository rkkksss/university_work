#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    long long a, k, l;
    cout << "Введите число А: ";
    cin >> a;
    k = a * a; // 1. получаем 2 степень
    l = a * k; // 2. получаем 3 степень
    l = l * k; // 3. 5 степень
    k = l * l; // 4. 10 степень
    k = k * l; // 5. 15 степень
    cout << "Значение A^15 при  A = " << a << " : " << k;
}
