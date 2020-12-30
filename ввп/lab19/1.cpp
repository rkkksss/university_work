#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите n: ";
    cin >> n;
	int k = n;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
      int tmp;
      cout << "Введите элемент массива ";
      cin >> tmp;
      v.push_back(tmp);
    }
    for (int i = 0; i < k; i++) {
        if (v[i] == v[i + 1]) {
            k--;
            for (int j = i + 1; j < n; j++)
                swap(v[j], v[j + 1]);
            i--;
        }
    }
    vector<int> a(v);
    cout << "Новый массив: ";
    for (int i = 0; i < k; i++)
        cout << a[i] << " ";
}
