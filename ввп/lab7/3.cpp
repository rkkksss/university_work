#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double a, x, y;
    cout << "Вес конфет: ";
    cin >> x;
    cout << "Сколько стоит " << x << " кг конфет: ";
    cin >> a;
    a = a / x;
    cout << "1 кг конфет стоит " << a << " рублей." << '\n';
    cout << "Введите y: ";
    cin >> y;
    cout << y << " кг конфет стоит " << a * y << " рублей";
}
