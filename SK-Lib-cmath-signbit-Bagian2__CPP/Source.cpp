#include <iostream>
#include <cmath>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    std::cout << std::boolalpha
        << "signbit(+0.0) = " << std::signbit(+0.0) << '\n'
        << "signbit(-0.0) = " << std::signbit(-0.0) << '\n';

    _getch();
    return 0;
}