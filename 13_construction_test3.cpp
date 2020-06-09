//
// Created by Labry on 2020/05/10.
//
#include <iostream>

using namespace std;

class B {
private:
    int m_b;
public:
    B(const int& m_b_in)
        :m_b(m_b_in) {}
    int getM_b() {
        return m_b;
    }
};
class Something {
private:
    int         m_i = 100;
    double      m_d = 100.0;
    char        m_c ='F';
    int         m_arr[5] = {5,6,7,8,9};
    B           m_b{1024};

public:
    Something()
        : m_i(10), m_d(3.14), m_c('a'), m_arr{1,2,3,4,5}, m_b(m_i -1)
    {
        m_i = 2;
        m_d = 4.14;
        m_c = 'b';
    }
    void print() {
        cout<<m_i<< " " << m_d <<" "<< m_c <<endl;
        for(auto& e: m_arr)
            cout << e << " ";
        cout << endl;
        cout<<m_b.getM_b()<<endl;
    }
};
int main_13() {
    Something sth;
    sth.print();

    return 0;
}

