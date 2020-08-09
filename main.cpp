#include <iostream>
#include "BinaryNum.h"

int main() {
    int Mlr , Mld;
    int ch = -1;
    while (ch != 0) {
        std::cin >> ch;
        switch (ch) {
            case 1: {
                std::cout << "Enter the Multiplier: ";
                std::cin >> Mlr;
                std::cout << "Enter the Multiplicand: ";
                std::cin >> Mld;
                BinaryNum numb(Mlr, Mld);
                numb.multiplyBooth();
                break;
            }
            case 2: {
                std::cout << "Enter the Multiplier: ";
                std::cin >> Mlr;
                std::cout << "Enter the Multiplicand: ";
                std::cin >> Mld;
                BinaryNum numb(Mlr, Mld);
                numb.multiply();
                break;
            }
            default:
                ch = 0;
        }
    }
    system("pause");
    return 0;
}
