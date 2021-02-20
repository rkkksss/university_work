#include <iostream>

using namespace std;

int main() { // объявление основной функции программы
    int a, b, c, d;
    char num;
    string ch;
    do {
        cout << "Введите первую дробь, знак операции и вторую дробь: ";
        cin >> a >> b >> num >> c >> d;
        switch (num) {
            case '+':
                cout << "Результат операции: " << a * d + b * c << "/" << b * d << endl;
                break;
            case '-':
                cout << "Результат операции: " << a * d - b * c << "/" << b * d << endl;
                break;
            case '*':
                cout << "Результат операции: " << a * c << "/" << b * d << endl;
                break;
            case '/':
                cout << "Результат операции: " << a * d << "/" << b * c << endl;
                break;
            default: cout << "Введен неверный знак операции! Попробуйте еще." << endl;
        }
        cout << "Выполнить еще одну операцию (д/н) ? ";
        cin >> ch;
    } while (ch != "н");
    return 0;
}
