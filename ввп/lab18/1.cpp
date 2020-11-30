#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите n: ";
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; ++i) {
      int tmp;
      cout << "Введите элемент массива a: ";
      cin >> tmp;
      a.push_back(tmp);
    }
    for (int i = 0; i < n; ++i) {
      int tmp;
      cout << "Введите элемент массива b: ";
      cin >> tmp;
      b.push_back(tmp);
    }
    for (int i = 0; i < n; i++)
        swap(a[i], b[i]);
    cout << "Новый массив a: ";
    for (int i = 0; i < n1; i++)
        cout << a[i] << " ";
    cout << '\n';
    cout << "Новый массив b: ";
    for (int i = 0; i < n1; i++)
        cout << b[i] << " ";
}
