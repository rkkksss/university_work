#include <bits/stdc++.h>

using namespace std;

double fact2 (int n) {
    int f2 = n;
    int i = n;
    while (i > 3) {
      i -= 2;
      f2 *= i;
    }
    return f2;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "a = ";
    cin >> a;
    cout << "Answer : " << fact2(a);
}
