//
// Created by Labry on 2020/05/09.
//

#include <iostream>
#include <cassert>
#include <array>

using namespace std;

void printValue(const array<int,5> &my_array, const int idx) {
    assert(idx >=0 && idx <= my_array.size() -1);
    cout<<my_array[idx]<<endl;
}

int main_6() {
    const int num = 5;

    assert(num == 5);
    static_assert(num == 5, "number should be 5");
    array<int, 5> my_array{1,2,3,4,5};

    cout << my_array[5] <<endl;

    printValue(my_array, 100);
    //The number should be 5
    assert(num == 5);

    assert(num != 5);

    return 0;
}