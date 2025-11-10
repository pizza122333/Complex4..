#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
    Complex x(2, 3);
    cout << "복소수 2+ 3j 생성" << endl;

    ++x;
    cout << "증가결과";
    x.show();

    x--;
    cout << "감소결과";
    x.show();

    return 0;
}
