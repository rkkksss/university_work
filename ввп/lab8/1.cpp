#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "Введите размер файла: ";
    cin >> a;
    cout << "Количество полных килобайтов: " << a / 1024;
}
