#include <bits/stdc++.h>

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");
  int n;
  cout << "Введите n: ";
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; ++i) {
    int tmp;
    cout << "Введите элемент массива ";
    cin >> tmp;
    v.push_back(tmp);
  }
  cout << "Результат: " << '\n';
  for (int i = 0; i < n; i += 2)
    cout << v[i] << ' ';
  for (int i = n - (n % 2) - 1; i >= 1; i -= 2)
    cout << v[i] << ' ';
}
