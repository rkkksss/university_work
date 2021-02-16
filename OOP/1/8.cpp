#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << 1990 << setfill('.') << setw(8) << 135 << endl
         << 1991 << setfill('.') << setw(8) << 7290 << endl
         << 1992 << setfill('.') << setw(8) << 11300 << endl
         << 1993 << setfill('.') << setw(8) << 16200 << endl;
         return 0;
}