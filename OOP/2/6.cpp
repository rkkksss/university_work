#include <iostream>

using namespace std;

int main() {
    unsigned int numb;
    unsigned long fact = 1;
    do {
		fact = 1;
		cout << "������� ����� �����: ";
		cin >> numb;
		for (unsigned int j = numb; j > 0; j--)
			fact *= j;
		cout << "��������� ����� ����� " << fact << endl;
	} while (numb != 0);
    return 0;
}
