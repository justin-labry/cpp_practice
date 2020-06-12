//
// Created by Justin Park on 2020/06/11.
//

#include <iostream>

using namespace std;

int getResult() {
    return 100*100;
}

int main_28() {
    int x = 5;
    int y = getResult();

    const int cx = 6;
    const int cy = getResult();

    // L-value references
    int &lr1 = x;

    const int &lr4 = x;
    const int &lr5 = cx;
    const int &lr6 = 5;



    return 0;
}
