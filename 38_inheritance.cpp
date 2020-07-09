//
// Created by Justin Park on 2020/06/29.
//

#include <iostream>

using namespace std;

class Mother38 {
private:
//protected:
    int m_i;
public:
    Mother38()
    {
        std::cout <<"Default Mohter constructor" << std::endl;

    }
    Mother38(const int &i_in)
        : m_i(i_in)
    {
        std::cout <<"Mohter constructor" << std::endl;

    }

    void setValue(const int& i_in) {
        m_i = i_in;
    }

    int getValue() {
        return m_i;
    }
};

class Child : public Mother38 { //derived class
private:
    double m_d;
public:
    Child(const int& i_in, const double & d_in)
        : Mother38(i_in), m_d(d_in)
    {
//        Mother::setValue(i_in);
//        m_d = d_in;
    }

    void setValue(const int & i_in, const double &d_in)
    {
        Mother38::setValue(i_in);
        m_d = d_in;
    }

    void setValue(const double &d_in)
    {
        m_d = d_in;
    }

    double getValue() {
        return m_d;
    }
};

class Daughter : public Mother38 {

};

class Son : public Mother38 {

};

int main_38() {
    Mother38 mother;
    mother.setValue(1024);
    cout<<mother.getValue() << endl;

    Child child(1024, 128);
    child.setValue(128.0);
    cout<< child.Mother38::getValue() << endl;
    cout << child.getValue() << endl;


    return 0;
}