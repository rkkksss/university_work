#include <iostream>
#include <ctype.h>

int main()
{
    char a;
    std::cout << "¬ведите букву: ";
    std::cin >> a;
    std::cout << islower(a);
    return 0;
}
