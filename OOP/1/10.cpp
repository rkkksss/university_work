#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c;
    cout << "¬ведите количество фунтов: ";
    cin >> a;
    cout << "¬ведите количество шиллингов: ";
    cin >> b;
    cout << "¬ведите количество пенсов: ";
    cin >> c;
    cout << "ƒес€тичных фунтов: " << char(156) << fixed << setprecision(2) << a + b / 20 + c / 240 << '\n';
    return 0;
}