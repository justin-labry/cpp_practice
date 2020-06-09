//
// Created by Labry on 2020/05/10.
//
#include <iostream>

using namespace std;

class Second {
    int n;
public:
    Second() {
        cout<<"Class Second Construction()"<<endl;
    }

};

class First {
    Second sec;

public:
    First() {
        cout <<"Clas First Construction()"<<endl;
    }
};
int main_12() {
    First fir;

    return 0;
}
