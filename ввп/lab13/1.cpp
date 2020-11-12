#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double n;
    cout << "Введите стоимость 1 кг конфет: ";
    cin >> n;
    for (int i = 0; i < 10; ++i) {
      cout << "Стоимость " << i / 10 << " кг конфет: " << i * n / 10 << '\n';
    }
}
