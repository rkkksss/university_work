#include <iostream>

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");
  cout << "Введите число а: ";
  long long a;
  cin >> a;
  a = a * a;
  cout << "Введите число b: ";
  long long b;
  cin >> b;
  b = b * b;
  cout << "Сумма квадратов: " << a + b << '\n';
  cout << "Разность квадратов: " << a - b << '\n';
  cout << "Произведение квадратов: " << a * b << '\n';
  cout << "Частное квадратов: " << static_cast<float>(a) / b << '\n';
  return 0;
}
