#include <bits/stdc++.h>

using namespace std;

int sign (double a) {
    if (a < 0) return -1;
    else {
      if (a == 0) return 0;
      else return 1;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    double a, b;
    cout << "a =  ";
    cin >> a;
    cout << "b =  ";
    cin >> b;
    cout << "Answer: " << sign(a) + sign(b);
}
