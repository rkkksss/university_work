#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << setiosflags(ios::left)
         << setw(16) << "�������" << setw(16) << "���" << setw(16) << "�����" << setw(16) << "�����" << endl
         << "-----------------------------------------------------------------" << endl
         << setw(16) << "������" << setw(16) << "�������" << setw(16) << "�������� 16" << setw(16) << "�����-���������" << endl
         << setw(16) << "������" << setw(16) << "������" << setw(16) << "�������� 3" << setw(16) << "�������" << endl
         << setw(16) << "�������" << setw(16) << "����" << setw(16) << "��������� 21" << setw(16) << "�����������" << endl;
    return 0;
}