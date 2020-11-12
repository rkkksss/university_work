#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "a =  ";
    cin >> a;
    cout << "b =  ";
    cin >> b;
    cout << "Great!" << '\n';
    for (int i = a; i <= b; ++i) {
      for (int j = 0; j < i; ++j) {
        cout << i << ' ';
      }
    }
}
