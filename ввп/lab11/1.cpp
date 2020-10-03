#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "a =  ";
    cin >> a;
    cout << "b =  ";
    cin >> b;
    if (a != b) {
      a = max(a, b);
      b = a;
    }
    else {
      a = 0;
      b = 0;
    }
    cout << "a = " << a << ". b = " << b << ".";
}
