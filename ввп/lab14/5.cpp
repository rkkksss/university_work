#include <bits/stdc++.h>

using namespace std;

int gcd (long long a, long long b) {
    return b ? gcd (b, a % b) : a;
}

int main() {
    setlocale(LC_ALL, "Russian");
    long long a, b;
    cout << "a =  ";
    cin >> a;
    cout << "b =  ";
    cin >> b;
    cout << "Answer : " << gcd(a, b);
}
