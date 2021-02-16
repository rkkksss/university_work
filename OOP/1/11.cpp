#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << setiosflags(ios::left)
         << setw(16) << "Фамилия" << setw(16) << "Имя" << setw(16) << "Адрес" << setw(16) << "Город" << endl
         << "-----------------------------------------------------------------" << endl
         << setw(16) << "Петров" << setw(16) << "Василий" << setw(16) << "Кленовая 16" << setw(16) << "Санкт-Петербург" << endl
         << setw(16) << "Иванов" << setw(16) << "Сергей" << setw(16) << "Осиновая 3" << setw(16) << "Находка" << endl
         << setw(16) << "Сидоров" << setw(16) << "Иван" << setw(16) << "Березовая 21" << setw(16) << "Калининград" << endl;
    return 0;
}