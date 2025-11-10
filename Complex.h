#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    void show() const {
        cout << real << "+" << imag << "j" << endl;
    }

    // 프렌드 함수로 전위/후위 연산자 선언
    friend Complex& operator++(Complex& c);    // 전위 ++
    friend Complex operator--(Complex& c, int); // 후위 --
};

#endif
