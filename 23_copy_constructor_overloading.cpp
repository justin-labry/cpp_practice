//
// Created by Labry on 2020/05/31.
//

#include <iostream>

using namespace std;

class Fraction {
private:
    int m_numerator;
    int m_denominator;

public:
    Fraction(char) = delete;
    explicit Fraction(int num = 0, int den = 1)
        : m_numerator(num), m_denominator(den)
    {
        assert(den != 0);
    }

    Fraction(const Fraction &fraction)
        : m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
    {
        cout<<"Copy Construction Called" << endl;
    }

    friend std::ostream& operator << (std::ostream& out, const Fraction& f) {
        out<< f.m_numerator << " / " << f.m_denominator << endl;
        return out;
    }
};

void doSomething(Fraction frac) {

    cout<<frac<< endl;

//    return temp;
}
int main_23() {

    Fraction frac(7);

    doSomething(Fraction(7));
    return 0;
}
