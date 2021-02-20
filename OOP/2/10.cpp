#include <iostream>

using namespace std;

int main() {
    double rate, sum1, sum2;
    int years;
    cout << "Введите ставку в процентах: ";
    cin >> rate;
    cout << "Введите начальный вклад в рублях: ";
    cin >> sum1;
    cout << "Введите итоговую сумму в рублях: ";
    cin >> sum2;
    years = 0;
    while (sum1 < sum2) {
        sum1 = sum1 + sum1 * rate / 100;
        years++;
    }
    cout << "Вы получите " << sum1 << " долларов через " << years << " лет." << endl;
    return 0;
}
