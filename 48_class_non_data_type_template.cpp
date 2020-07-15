//
// Created by Justin Park on 2020/07/14.
//

#include <iostream>
#include "MyArray.h"
#include "Cents.h"

int main_48() {


    MyArray<Cents, 100> my_array;

    int num = my_array.getLegth();
    //std::cout <<"num:"<< num << std::endl;

    for (int i = 0; i < num; ++i) {
        my_array[i] = Cents(i + 65);
    }

    my_array.print();


    return 0;
}
