#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    char ch;
    cout << "¬ведите первую дробь: ";
    cin >> a >> ch >> b;
    cout << "¬ведите вторую дробь: ";
    cin >> c >> ch >> d;
    cout << "—умма равна: " << (a * d + b * c) << " / " << (b * d) << '\n';
    return 0;
}