#include <iostream>

using namespace std;

int main() {
    int num, a1, b1, c1, a2, b2, c2, a, b, c, sum;
    double m;
    string ch;
    do {
        cout << "Укажите операцию (1 сложение, 2 вычитание, 3 умножение): ";
        cin >> num;
        switch (num) {
            case 1:
                cout << "Введите две суммы в фунтах, шиллингах и пенсах:" << endl;
                cout << "Первая сумма: ";
                cin >> a1 >> b1 >> c1;
                cout << "Вторая сумма: ";
                cin >> a2 >> b2 >> c2;
                sum = (a1 * 240 + b1 * 12 + c1) + (a2 * 240 + b2 * 12 + c2);
                a = sum / 240;
                sum = sum % 240;
                b = sum / 12;
                c = sum % 12;
                cout << "Результат: " << a << " " << b << " " << c << endl;
                break;
            case 2:
                cout << "Введите две суммы в фунтах, шиллингах и пенсах (через пробел):" << endl;
                cout << "Первая сумма: "; cin >> a1 >> b1 >> c1;
                cout << "Вторая сумма: ";	cin >> a2 >> b2 >> c2;
                sum = (a1 * 240 + b1 * 12 + c1) - (a2 * 240 + b2 * 12 + c2);
                a = sum / 240;
                sum = sum % 240;
                b = sum / 12;
                c = sum % 12;
                cout << "Результат: " << a << " " << b << " " << c << endl;
                break;
            case 3:
                cout << "Введите сумму в фунтах, шиллингах и пенсах (через пробел)\nи вещественное число:" << endl;
                cout << "Сумма: "; cin >> a1 >> b1 >> c1;
                cout << "Вещественное число-множитель: ";
                cin >> m;
                sum = (a1 * 240 + b1 * 12 + c1) * m;
                a = sum / 240; sum = sum % 240;
                b = sum / 12;
                c = sum % 12;
                cout << "Результат: " << a << " " << b << " " << c << endl;
                break;
            default: cout << "У вас лапки, введите правильный номер операции." << endl;
        }
        cout << "Выполнить еще одну операцию (д/н) ? "; cin >> ch;
    } while (ch != "н");
    return 0;
}
