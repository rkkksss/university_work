#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите номер года: ";
    cin >> n;
    cout << "Номер столетия: " << (n - 1) / 100 + 1;
}
