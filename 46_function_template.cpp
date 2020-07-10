//
// Created by Justin Park on 2020/07/10.
//

#include <iostream>
#include "Cents.h"

using namespace std;

template<typename T>
T getMax(T a, T b) {
    return (a > b) ? a: b;
}


int main() {

    cout << getMax(1,2) << endl;
    cout<< getMax(3.14, 1.592) << endl;
    cout << getMax( 1.0f, 3.4f) << endl;
    cout << getMax( 'a', 'c') << endl;
    cout << getMax(Cents(3), Cents(9)) << endl;

    return 0;
}
