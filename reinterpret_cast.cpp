//
// Created by Justin Park on 2020/07/15.
//

#include <iostream>
#include <cstdio>

using namespace std;

struct Cube {
    int a;
};

int main(void) {
    int a = 65;

    int* ptr1;
    ptr1 = reinterpret_cast<int*>(a);
    cout<< "1. int*: " << ptr1<< endl;


    int *ptr2 = &a;
    char * c;
    c = reinterpret_cast<char *>(ptr2);
    cout << "2. int* -> char* (cout) : " << *c << endl;

    Cube cb;
    cb.a = 20;
    int* ptr3;
    ptr3 = reinterpret_cast<int *>(&cb);
    cout << " 3. struct -> int*:" << *ptr3 << endl;


    return 0;
}