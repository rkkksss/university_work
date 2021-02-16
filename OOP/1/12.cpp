#include <iostream>

using namespace std;

int main()
{
    float sum, d;
    int a, b, c;
    cout << "¬ведите число дес€тичных фунтов: ";
    cin >> sum;
    a = (int)sum;
    d = sum - a;
    b = (int)(d * 20);
    d = d * 20 - b;
    cout << "Ёквивалентна€ сумма в старой форме записи: " << a << " фунтов, " << b << " шиллингов, " << (int)(d * 12) << " пенсов. " << endl;
    return 0;
}