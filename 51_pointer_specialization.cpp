//
// Created by Justin Park on 2020/07/15.
//

#include <iostream>

using namespace std;

template<class T>
class A {
private:
    T m_value;

public:
    A(const T & input)
        : m_value(input)
    {

    }

    template<typename TT>
    void doSomething(const TT &input) {
        cout << typeid(T).name() << " " << typeid(TT).name() << endl;
        cout << (TT) m_value << endl;
    }

    void print()
    {
        cout << m_value << endl;
    }
};

template<class T>
class A<T*> {
private:
    T* m_value;

public:
    A(T* input)
            : m_value(input)
    {

    }

    void print()
    {
        cout << *m_value << endl;
    }
};

int main() {

    A<int> a_char('A');
    a_char.print();
    a_char.doSomething(char());
//
//    int temp =  456;
//
//    A<int*> a_int_ptr(&temp);
//    a_int_ptr.print();
//
//    double temp_d = 3.141592;
//    A<double*> a_double_ptr(&temp_d);
//    a_double_ptr.print();


    return 0;

}

