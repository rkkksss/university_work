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
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (v[i] == v[j])
                cout << "Номера равных элементов - " << i << " и " << j;
}
