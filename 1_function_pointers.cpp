//
// Created by Justin Park on 2020/07/08.
//

#include <iostream>

using namespace std;

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int devide(int x, int y) {
    return x / y;
}

int main_1() {

    int x, y;

    cin >> x >> y;

    int op;
    cout <<"0: add, 1: subtract, 2: multiply 3: divide " << endl;
    cin >> op;

    int result;

    int(*func_ptr)(int x, int y) = nullptr;

    switch(op) {
        case 0: func_ptr = &add; break;
        case 1: func_ptr = &subtract; break;
        case 2: func_ptr = &multiply; break;
    }



    cout << func_ptr(x, y) << endl;



    return 0;
}