//
// Created by Labry on 2020/05/30.
//

#include <iostream>

using namespace std;

class Digit{
private:
    int m_digit;
public:
    Digit(int digit=0): m_digit(digit) {}

    friend ostream & operator << (ostream &out, const Digit &d) {
        out << d.m_digit;
        return out;
    }

    //prefix
    Digit& operator++ () {
        ++m_digit;
        return *this;
    }

    //post
    Digit operator++ (int ) {
        Digit temp(m_digit);
        ++(*this);
        return temp;
    }
};

int main_19() {
    cout << "hello world!" << endl;

    Digit d1 = Digit(5);

    cout<< ++d1<< endl;
    cout<< d1<< endl;

    cout<< d1++<< endl;
    cout<< d1<< endl;
    return 0;
}
