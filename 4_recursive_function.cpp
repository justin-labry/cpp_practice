//
// Created by Labry on 2020/05/09.
//
#include <iostream>
#include <chrono>
#include <vector>

using namespace std;

void countDown(int count) {

    cout << count << " ";
    if(count > 0) {
        countDown(count - 1);
    }
}

void countUp(int count) {

    cout << count << " ";
    if(count < 10) {
        countUp(count + 1);
    }
}
// 0 1 1 2 3 5 8 13 21 ....
int fibonacci(int n) {
    if(n <=0) {
        return 0;
    } else if(n == 1) {
        return 1;
    } else if(n == 2) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n - 2);
    }
}
int main_4() {
    countDown(5);
    cout<<endl;
    countUp(0);
    cout << "Hello, World!"<<endl;
    auto start = chrono::high_resolution_clock::now();
    cout << fibonacci(43) << endl;
    auto end = chrono::high_resolution_clock::now();
    auto duration = duration_cast<std::chrono::milliseconds>(end - start);
    cout<<(duration.count()/1000.0f) <<"in seconds"<<endl;

    start = chrono::high_resolution_clock::now();
    vector<int> fibo = {0,1,1};

    for(int i = 3; i <= 1000; i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    cout<<fibo[1000]<<endl;
    end = chrono::high_resolution_clock::now();
    duration = duration_cast<std::chrono::milliseconds>(end - start);
    cout<<(duration.count()/1000.0f) <<"in seconds"<<endl;
    return 0;
}

