#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n, a, b, c;
    cout << "n =  ";
    cin >> n;
    a = n / 100;
    c = n % 10;
    b = n / 10 % 100;
    if ((a < b) and (b < c)) cout << "Цифры данного числа образуют возрастающую последовательность";
    else if ((a > b) and (b > c)) cout << "Цифры данного числа образуют убывающую последовательность";
    else cout << "Цифры данного числа не образуют возрастающую или убывающую последовательность";
}
