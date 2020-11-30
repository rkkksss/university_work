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
    for (int i = 0; i < (int) n / 2; ++i) {
        cout << " " << v[i] << ' ' << v[n - 1 - i];
    }
    if (n % 2 != 0) {
        cout << " " << v[(int) n / 2];
    }
}
