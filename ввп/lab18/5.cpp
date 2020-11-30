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

    int k = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i - 1] > a[i]) {
            k = a[i - 1];
            a[i - 1] = a[i];
            a[i] = k;
        }
    }
    cout << "answer: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
