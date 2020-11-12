#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "a =  ";
    cin >> a;
    cout << "b =  ";
    cin >> b;
    while (a >= b) {
      a -= b;
    }
    cout << "Answer : " << a;
}
