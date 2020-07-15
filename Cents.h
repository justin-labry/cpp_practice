//
// Created by Justin Park on 2020/07/10.
//

#ifndef CPP_PRACTICE_CENTS_H
#define CPP_PRACTICE_CENTS_H
#include <iostream>

class Cents {
private:
    int m_cents;

public:
    Cents(int cents =  0) { m_cents = cents; }
    int getCents() const {return m_cents; }
    int& getCents() {return m_cents; }

    Cents operator+(const Cents &c2){
        return this->getCents() + c2.getCents();
    }

    friend std::ostream& operator << (std::ostream &out, const Cents &cents) {
        //std::cout<< "called" << std::endl;
        out << "Cents(" <<cents.m_cents<<")";
        return out;
    }

    Cents operator - () const {
        return Cents(-m_cents);
    }

    bool operator ! () const {
        if(m_cents == 0)
            return true;
        else
            return false;
    }

    bool operator == (const Cents &c1) {
        return (this->m_cents == c1.m_cents);
    }

    bool operator != (const Cents &c1) {
        return (this->m_cents != c1.m_cents);
    }

    bool operator > (const Cents &c1) {
        return (this->m_cents > c1.m_cents);
    }

    friend bool operator < (const Cents c1, const Cents &c2) {
        return (c1.m_cents < c2.m_cents);
    }

};

#endif //CPP_PRACTICE_CENTS_H
