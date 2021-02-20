#include <iostream>

using namespace std;

int main() {
    unsigned int numb;
    unsigned long fact = 1;
    do {
		fact = 1;
		cout << "Введите целое число: ";
		cin >> numb;
		for (unsigned int j = numb; j > 0; j--)
			fact *= j;
		cout << "Факториал числа равен " << fact << endl;
	} while (numb != 0);
    return 0;
}
