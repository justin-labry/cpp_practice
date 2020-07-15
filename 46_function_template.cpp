//
// Created by Justin Park on 2020/07/10.
//

#include <iostream>
#include "Cents.h"
#include "Storage.h"

using namespace std;

template<class T>
T getMax(T a, T b) {
    return (a > b) ? a: b;
}

template<>
char getMax(char x, char y) {
    cout << "Warning : comparing chars" << endl;

    return (x > y) ? x: y;
}


int main_46() {

//    cout << getMax<int>(1,2) << endl;
//    cout<< getMax<double>(3.14, 1.592) << endl;
//    cout << getMax( 1.0f, 3.4f) << endl;
//    cout << getMax( 'a', 'c') << endl;
//
//    Cents r = getMax<Cents>(Cents(7), Cents(2));
//
//    cout << r << endl;

    Storage<int> nValue(5);
    Storage<double> dValue(5.5);

    nValue.print();
    dValue.print();

    return 0;
}
