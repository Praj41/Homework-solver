#include <iostream>
#include "BinaryNum.h"

int main() {
    int Mlr , Mld;
    std::cout << "Enter the Multiplier: ";
    std::cin >> Mlr;
    std::cout << "Enter the Multiplicand: ";
    std::cin >> Mld;
    BinaryNum numb(Mlr,Mld);
    numb.multiply();

    system("pause");
    return 0;
}
