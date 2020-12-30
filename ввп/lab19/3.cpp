#include <bits/stdc++.h>
#include<vector>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите n: ";
    cin >> n;
    int min = 100000, max = -100000, min_index, max_index;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
      int tmp;
      cout << "Введите элемент массива a: ";
      cin >> tmp;
      v.push_back(tmp);
      if (tmp > max) {
        max = tmp;
        max_index = i;
      }
      if (tmp < min) {
        min = tmp;
        min_index = i;
      }
    }

    if (min_index <= max_index) {
      v.insert(v.begin() + min_index, 0);
      v.insert(v.begin() + max_index + 2, 0);
    }
    else if (min_index == max_index) {
      v.insert(v.begin() + min_index, 0);
      v.insert(v.begin() + max_index + 1, 0);
    }
    else {
      v.insert(v.begin() + max_index + 1, 0);
      v.insert(v.begin() + min_index + 1, 0);
    }

    cout << "answer: ";
    for (int i = 0; i < n + 2; i++)
        cout << v[i] << " ";
}
