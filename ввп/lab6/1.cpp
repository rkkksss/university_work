#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Введите значение А: ";
    long long a, b;
    cin >> a;
    cout << "Введите значение В: ";
    cin >> b;
    //конечно, можно написать просто swap(a, b), но кажется это слишком читерство
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Самый (не) очевидный способ - через сложение и два вычитание." << '\n';
    cout << "a = " << a << ". b = " << b;
    cout << ". А можно использовать дополнительную переменную. Поменяем значения обратно: ";
    long long temp;
    temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << ". b = " << b << ". Готово! :)";
}
