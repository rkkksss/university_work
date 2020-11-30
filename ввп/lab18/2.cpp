#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите n: ";
    cin >> n;
    vector<float> a;
    for (int i = 0; i < n; ++i) {
      float tmp;
      cout << "Введите элемент массива a: ";
      cin >> tmp;
      a.push_back(tmp);
    }
    vector<float> b;
    float sum = 0;
    cout << "Массив b: ";
    for (int i = 0; i < n; i++) {
        sum += a[i];
        float tmp = sum / (i + 1);
        b.push_back(tmp);
        cout << b[i] << " ";
    }
}
