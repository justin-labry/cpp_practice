//
// Created by Justin Park on 2020/06/11.
//

#include <iostream>

using namespace std;

void doSomething(int &lref) {
    cout <<"L-value ref: " << lref<< endl;
}

void doSomething(int &&rref) {
    cout << "R-value ref: " << rref<< endl;
}

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
    //int &lr2 = cx;
    //int &lr3 = 5; //R-values

    const int &lr4 = x;
    const int &lr5 = cx;
    const int &lr6 = 5; // let me do it..


    // R-value references

    //int &&rr1 = x;
    //int &&rr2 = cx;
    int &&rr3 = 5;

    cout << rr3 << endl;
    rr3 = 10;
    cout << rr3 << endl;

    //const int &&rr4 = x;
    //const int &&rr5 = cx;
    const int &&rr6 = 5;

    //5:41 선생님 그럼 int &&rr3 =5 와 const int &&rr6 = 5의 차이는 뭔가요?? 둘다 상수에 대한 R-value ref인것과 상수의 const의 R-value ref 차이점이 있을까요?

    doSomething(x);

    doSomething(5);
    doSomething(getResult());

    return 0;
}
