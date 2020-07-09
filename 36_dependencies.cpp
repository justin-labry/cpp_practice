//
// Created by Justin Park on 2020/06/24.
//

#include <iostream>
#include "timer.h"

using namespace std;

class Worker {
public:
    void doSomething() {
        Timer timer;

        // do some work

        cout<<timer.elapsed();
    }

};

int main_36() {

    Worker().doSomething();

}

