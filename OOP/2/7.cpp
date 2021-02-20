#include <iostream>

using namespace std;

int main() {
    double sum, rate;
    int years;
    cout << "¬ведите начальный вклад в рубл€х: ";
    cin >> sum;
    cout << "¬ведите число лет: ";
    cin >> years;
    cout << "¬ведите ставку в процентах: ";
    cin >> rate;
    for (int i = 0; i < years; ++i) {
        sum = sum + sum * rate / 100;
    }
    cout << "„ерез " << years << " лет вы получите " << sum << " доллара." << endl;
    return 0;
}