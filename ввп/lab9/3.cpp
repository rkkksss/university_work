#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n, k;
    cout << "k =  ";
    cin >> k;
    cout << "n =  ";
    cin >> n;
    cout << "ответ: " << (k + n - 2) % 7 + 1;
}
