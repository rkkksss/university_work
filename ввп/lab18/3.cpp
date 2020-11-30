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

    int k = 2;
    for (int i = 0; i < n; i++)
        if (a[i] % 2 != 0)
            k = a[i];
    cout << "answer:  ";
    for (int i = 0; i < n; i++) {
        if (k != 2)
            if (a[i] % 2 != 0)
                a[i] += k;
        cout << a[i] << " ";
    }
}
