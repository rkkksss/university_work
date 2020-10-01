#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    long long a, k;
    cout << "Введите число А: ";
    cin >> a;
    k = a * a; //первое умножение
    k = k * k; //второе умножение, где мы получаем четвертую степень
    k = k * k; //и финальная восьмая степень
    cout << "Значение A^8 при  A = " << a << " : " << k;
}
