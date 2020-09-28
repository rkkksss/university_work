#include <iostream>
#include <cmath>

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");
  cout << "Введите число а: ";
  long long a;
  cin >> a;
  a = abs(a);
  cout << "Введите число b: ";
  long long b;
  cin >> b;
  b = abs(b);
  cout << "Сумма модулей: " << a + b << '\n';
  cout << "Разность модулей: " << a - b << '\n';
  cout << "Произведение модулей: " << a * b << '\n';
  cout << "Частное модулей: " << static_cast<float>(a) / b << '\n';
  return 0;
}
