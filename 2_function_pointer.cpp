//
// Created by Labry on 2020/05/09.
//
#include <iostream>
#include <array>
#include <functional>

using namespace std;

int func(int x) {
    return x;
}

int goo(int x) {
    return x+10;
}

bool isEven(const int &number) {
    if(number %2 == 0 ) return true;
    else false;
}

bool isOdd(const int &number) {
    if(number %2 !=0 ) return true;
    else false;
}

//typedef bool (*check_func_t)(const int&);
using check_func_t = bool (*)(const int&);
void printNumbers(const array<int, 11> &my_array,
                  function<bool(const int&)> check_func = isEven) {

    for(auto elem : my_array) {
        if(check_func(elem) == true) {
                cout << elem << " ";
        }
    }
    cout<<endl;
}

int main_2() {
    cout << "Hello, World!"<<endl;

    int (*func_ptr)(int) = func;

    cout<<func_ptr(20)<<endl;
    func_ptr = goo;
    cout<<func_ptr(20) <<endl;

    array<int, 11> my_array{0,1,2,3,4,5,6,7,8,9,10};

    function<bool(const int&)> function_ptr = isOdd;
    printNumbers(my_array);
    printNumbers(my_array, function_ptr);
    return 0;
}