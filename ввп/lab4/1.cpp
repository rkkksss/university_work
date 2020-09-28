#include <iostream>

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");
  cout << "Введите число а: ";
  long long a;
  cin >> a;
  cout << "Введите число b: ";
  long long b;
  cin >> b;
  if (a < 0 || b < 0) {
    cout << "Ошибка, число должно быть положительным";
  }
  else {
    cout << "Площадь равна: " << a * b << '\n';
    cout << "Периметр равен: " << 2 * (a + b);
  }
  return 0;
}
