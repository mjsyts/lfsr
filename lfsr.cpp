#include "lfsr.hpp"

LFSR::LFSR(int size){
    n = rand();
    this->set_rightShiftMask();
    o = n;
    do{
        n = rotateAndXor(o);
        cout << (n & 1);
    }
    while (n != o);
};

int LFSR::rotateBits(){
    return (n & 1 << (size-1)) | (n & rightShiftMask >> 1);
};

void LFSR::set_rightShiftMask(){
    rightShiftMask = ((1 << (size-1)) - 1) << 1;
};

int LFSR::rotateAndXor(int foo){
    rotateBits();
    int a = (foo & 2 >> 1);
    int b = (foo & 1);
    return foo & rightShiftMask | ( a ^ b );
};
