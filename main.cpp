#include <iostream>
#include "BinaryNum.h"

int main() {
    int Mlr , Mld;
    int ch = -1;
    while (ch != 0) {
        std::cout << "Enter 1 for Booth's multiplication" <<
        std::endl << "Enter 2 for unsigned multiplication" <<
        std::endl << "Enter 3 for restoring division" <<
        std::endl << "Enter 0 to exit" << std::endl;
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
            case 3: {
                std::cout << "Enter the Dividend: ";
                std::cin >> Mlr;
                std::cout << "Enter the Divisor: ";
                std::cin >> Mld;
                BinaryNum numb(Mlr, Mld);
                numb.divideRestore();
                break;
            }
            default:
                ch = 0;
        }
    }

    system("pause");
    return 0;
}
