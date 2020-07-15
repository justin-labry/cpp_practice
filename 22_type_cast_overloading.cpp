//
// Created by Labry on 2020/05/31.
//

//
// Created by Labry on 2020/05/30.
//

#include <iostream>
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <random>
using namespace std;

random_device rng;
mt19937 urng(rng());

class Cents22 {
private:
    int m_cents;

public:
    Cents22(int cents =  0) { m_cents = cents; }
    int getCents() const {return m_cents; }
    int& getCents() {return m_cents; }

    Cents22 operator+(const Cents22 &c2){
        return this->getCents() + c2.getCents();
    }

    friend std::ostream& operator << (std::ostream &out, const Cents22 &cents) {
        out << cents.m_cents;
        return out;
    }

    Cents22 operator - () const {
        return Cents22(-m_cents);
    }

    bool operator ! () const {
        if(m_cents == 0)
            return true;
        else
            return false;
    }

    bool operator == (const Cents22 &c1) {
        return (this->m_cents == c1.m_cents);
    }

    bool operator != (const Cents22 &c1) {
        return (this->m_cents != c1.m_cents);
    }

    bool operator > (const Cents22 &c1) {
        return (this->m_cents > c1.m_cents);
    }

    friend bool operator < (const Cents22 c1, const Cents22 &c2) {
        return (c1.m_cents < c2.m_cents);
    }

    operator int() {
        return m_cents;
    }

};

class Dollar {
private:
    int m_dollars = 0;

public:
    Dollar(const int& input) : m_dollars(input) {}

    operator Cents22() {
        return Cents22(m_dollars * 100);
    }
};

void printInt(const int &value) {
    cout << value << endl;
}

int main_22() {

    Dollar dollars(7);
    Cents22 cents = dollars;

    printInt(cents);

    return 0;
}