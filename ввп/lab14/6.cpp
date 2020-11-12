#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "N = ";
    cin >> n;
    int f1 = 1;
    int f2 = 1;
    int k = 2;
    while (n > f2) {
      f2 = f1 + f2;
      f1 = f2 - f1;
      k++;
    }
    if (n == f2) cout << "Порядковый номер числа Фибоначчи : " << k;
    else cout << "Не является числом Фибоначчи!";
}
