#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите n: ";
    cin >> n;
    vector<int> v;
    cout << "Введите k и l: ";
    int k, l;
    cin >> k >> l;
    for (int i = 0; i < n; ++i) {
      int tmp;
      cout << "Введите элемент массива ";
      cin >> tmp;
      v.push_back(tmp);
    }
    float avg = 0;
    for (int i = k; i <= l; i++) {
        avg += v[i];
    }
    avg /= (l - k + 1);
    cout << "Среднее арифметическое чисел с номерами от " << k << " до " << l << " = " << avg;
}
