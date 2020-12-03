#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double n;
    cout << "Введите стоимость 1 кг конфет: ";
    cin >> n;
    for (double i = 0.1; i < 1; i += 0.1) {
      cout << "Стоимость " << i << " кг конфет: " << i * n << '\n';
    }
}
