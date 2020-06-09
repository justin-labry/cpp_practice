//
// Created by Labry on 2020/05/09.
//
#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace chrono;

void printStack(const vector<int> &stack) {
    for(auto &e : stack)
        cout << e << " ";
    cout<<endl;
}
int main_3() {

    const int num = 1000;

    vector<int> stack{1,2,3,4,5,6,7,8,9,10};
    stack.reserve(num);

    auto start = high_resolution_clock::now();

    stack.push_back(3);
    printStack(stack);

    stack.pop_back();
    printStack(stack);

    stack.pop_back();
    printStack(stack);

    stack.pop_back();
    printStack(stack);



    auto stop = high_resolution_clock::now();
    auto duration= duration_cast<milliseconds> (stop - start);
    cout << duration.count()/1000.0f << " seconds " << endl;
    return 0;
}

