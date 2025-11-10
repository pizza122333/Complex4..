#include "Complex.h"

// 전위 ++
Complex& operator++(Complex& c) {
    ++c.real;
    ++c.imag;
    return c;
}

// 후위 --
Complex operator--(Complex& c, int) {
    Complex temp = c; // 현재 값 저장
    --c.real;
    --c.imag;
    return temp;      // 연산 전 값 반환
}
