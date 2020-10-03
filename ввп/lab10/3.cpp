#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "a =  ";
    cin >> a;
    if ((a < 100) and (a < 9) and (a % 2 == 0)) {
      cout << "Данное число является четным двузначным";
    }
    else {
      cout << "Данное число не является четным двузначным";
    }
}
