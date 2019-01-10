/////
// main.h
//
// =============
// code : Karl Whitford
//
//

#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdint.h>
#include <string>
#include <iostream>
#include <vector>
#include <ctime>

//From seconds to readable time; counting bitmasks.

#define HARD_MAX_VERTICES 64
#define HARD_MAX_SRGENS 64
#define HARD_MAX_COHOMS 1024

#define X_COUNTS_BITS16(__n_) (QBits::qBitsIn16Bits[__n_])
#define X_COUNT_BITS32(__n_) (QBits::qBitsIn16Bits[__n_ & 0xffffu] + QBits::qBitsIn16Bits[(__n_ >> 16) & 0xffffu])
#define X_COUNT_BITS64(__n_) (QBits::qBitsIn16Bits[__n_ & 0xffffu] + QBits::qBitsIn16Bits[(__n_ >> 16) & 0xffffu] + QBits::qBitsIn16Bits[(__n_ >> 32) & 0xffffu] + QBits::qBitsIn16Bits[(__n_ >> 48) & 0xffffu])

class QBits {
    private:
    //bit buffer
    static std::vector<char> qBitsIn16Bits;

    public:
    //Init
    static void InitBitCounter();

    //conversion and bit counting
}