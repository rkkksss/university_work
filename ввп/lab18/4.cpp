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

    int min = 1000000, max = -1000000, min_index, max_index;
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            max_index = i;
        }
        if (a[i] < min) {
            min = a[i];
            min_index = i;
        }
    }

    if (min_index > max_index)
        swap(min_index, max_index);

    for (int i = min_index + 1; i < max_index; i++)
        a[i] = 0;
    cout << "answer: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
