#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите число: ";
    cin >> n;
    if (n == 0) cout << "Нулевое число";
    else {
      if (n > 0) cout << "Положительное ";
      else cout << "Отрицательное ";
      if (n % 2 == 0) cout << "чётное число";
      else cout << "нечётное число";
    }
}
