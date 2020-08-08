//
// Created by Prajyot Bhamare on 07-08-2020.
//

#include "BinaryNum.h"

int BinaryNum::calcBits(int k) {
    return (int)log2(k)+1;
}

inline std::string BinaryNum::getNBits(std::bitset<BITS>& bs) const {
    std::string str;
    str = bs.to_string().substr(BITS-bits, bits);
    return str;
}

bool BinaryNum::add() {
    std::bitset<BITS> temp1(A.to_ulong()+M.to_ulong());
    A = temp1;
    return A[bits];
}

void BinaryNum::shift() {
    Q >>= 1;
    Q[bits-1] = A[0];
    A >>= 1;
}

BinaryNum::BinaryNum(int first,int second) {
    std::bitset<BITS> temp1(first);
    Q = temp1;
    std::bitset<BITS> temp2(second);
    M = temp2;
    bits = std::max(calcBits(first),calcBits(second));
    print();
    std::cout << std::endl;
}

void BinaryNum::print(const std::string& step) {
    std::cout << "A = " << getNBits(A) << "   Q = " << getNBits(Q) << "   M = " << getNBits(M) << "   " << step << std::endl;
}

void BinaryNum::multiply() {
    int carry;
    for (int i = 0; i < bits; ++i) {
        if (Q[0]) {
            carry = add();
            std::cout << "C = " << carry << "   ";
            print("Add");
        }
        shift();
        carry = 0;
        std::cout << "C = " << carry << "   ";
        print("Shift");
        std::cout << std::endl;
    }
}
