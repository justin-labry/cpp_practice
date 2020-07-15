//
// Created by Justin Park on 2020/07/14.
//

#include <iostream>

using namespace std;

template<typename T>
class A {

public:
    A(const T& input) {

    }

    void doSomething() {
        cout << typeid(T).name() << endl;
    }

        void test() {

    }

};

template <>
class A<char>
{
public:
    A(const char & temp) {

    }

    void doSomething() {
        cout <<"Char type specialization" << endl;
    }
};


int main_49() {
    A<int> a_int();
    A<double> a_double();
    A<char> a_char();

    //a_double.doSomething();

    return 0;
}
