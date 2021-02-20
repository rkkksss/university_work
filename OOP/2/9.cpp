#include <iostream>

using namespace std;

int main() {
    int a, b, res;
    cout << "Введите число мест за столом: ";
    cin >> b;
    cout << "Введите число гостей: ";
    cin >> a;
    while (a < b) {
        cout << "Число гостей не должно быть меньше числа мест за столом." << endl;
        cout << "Попробуем снова. Введите число гостей: ";
        cin >> a;
    }
    res = 1;
    for (int i = 0; i < b; ++i) {
        res = res * a;
        a = a - 1;
    }
    cout << "Число возможных рассадок гостей за столом: " << res << endl;
    return 0;
}