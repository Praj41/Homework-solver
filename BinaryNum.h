//
// Created by Prajyot Bhamare on 07-08-2020.
//

#pragma once
#include <iostream>
#include <bitset>
#include <cmath>
#include <algorithm>
#define BITS 64

class BinaryNum {
    int bits;
    static int calcBits(int);
    std::string getNBits(std::bitset<BITS>& bs) const;
    std::bitset<BITS> A,Q,M;
public:
    BinaryNum(int , int);
    void print(const std::string& step = "Start");
    bool add();
    void shiftR();
    void shiftL();
    bool sub();
    void multiply();
    void multiplyBooth();
    void divideRestore();
};
