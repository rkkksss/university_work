#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    vector<int> v;
    cout << "Введите размер массива: ";
    int n;
    cin >> n;
    cout << "Введите первое и второе числа массива:\n";
    int a, b;
    cin >> a >> b;
    v.push_back(a);
    v.push_back(b);
    int sum = a + b;
    cout << v[0] << " " << v[1] << " ";
    for (int i = 2; i < n; i++) {
        v.push_back(sum);
        sum += v[i];
        cout << v[i] << " ";
    }
}
