//
// Created by Labry on 2020/05/10.
//

#include <iostream>

using namespace std;

class Fraction {

private:
    int m_numerator;
    int m_denominator;

public:
    Fraction() {
        cout<<"Fraction() construct..."<<endl;
        m_numerator = 0;
        m_denominator = 1;
    }
    Fraction(const int& numerator=1, const int& denominator=1) {
        cout<<"Fraction() construct..."<<endl;
        m_numerator = numerator;
        m_denominator = denominator;
    }
    void print() {
        cout<< m_numerator <<"/"<< m_denominator <<endl;
    }
};

int main_11() {
    cout<<"Hello, World!"<<endl;
    Fraction one_one(1);
    one_one.print();
    return 0;
}
