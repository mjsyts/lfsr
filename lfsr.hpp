#ifndef lfsr_hpp
#define lfsr_hpp

#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <functional>

using namespace std;

class LFSR {
    void routine();
    int rightShiftMask;
    int o;
public:
    int n;
    int size;
    void set_rightShiftMask();
    int rotateBits();
    int rotateAndXor(int foo);
    LFSR(int size);
};

#endif /* lfsr_hpp */
