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
    int min = 1000;
    for (int i = 0; i < n; i += 2)
        if (v[i] < min)
            min = v[i];
    cout << "Минимальный элемент = " << min;
}
