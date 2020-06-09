//
// Created by Labry on 2020/05/30.
//

#include <iostream>
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand
#include <random>
using namespace std;

class Cents {
private:
    int m_cents;

public:
    Cents(int cents =  0) {m_cents = cents; }
    int getCents() const {return m_cents; }
    int& getCents() {return m_cents; }

    Cents operator+(const Cents &c2){
        return this->getCents() + c2.getCents();
    }

    friend std::ostream& operator << (std::ostream &out, const Cents &cents) {
        out << cents.m_cents;
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

int main_17() {
    vector<Cents> arr(20);

    for(unsigned i = 0; i < 20; ++i)
        arr[i].getCents() = i;

    //random_shuffle(begin(arr), end(arr));
    random_device rng;
    mt19937 urng(rng());
    shuffle(arr.begin(), arr.end(), urng);

    for (auto &e: arr)
        cout<<e << " ";
    cout << endl;

    std::sort(arr.begin(), arr.end());
    for (auto &e: arr)
        cout<<e << " ";
    cout << endl;


    return 0;
}