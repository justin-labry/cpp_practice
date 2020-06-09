//
// Created by Labry on 2020/05/31.
//

#include <iostream>

using namespace std;

class Accumulator {
private:
    int m_counter = 0;

public:
    int operator()(int i) { return (m_counter += i); }

};

int main_21() {

    Accumulator acc;
    cout << acc(10) << endl;
    cout << acc(20) << endl;
    return 0;
}
