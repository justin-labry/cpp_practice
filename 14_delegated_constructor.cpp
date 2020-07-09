//
// Created by Labry on 2020/05/10.
//
#include <iostream>

using namespace std;

class Student14 {

private:
    int     m_id;
    string  m_name;

public:
    Student14(const string& name_in)
//        :m_id(0), m_name(name_in)
    //:Student(0, name_in)
    {
        init(0, name_in);
    }

    Student14(const int& id_in, const string& name_in)
     //   :init(id_in, name_in)
    {
        init(id_in, name_in);
    }

    void init(const int& id_in, const string& name_in) {
        m_id = id_in;
        m_name = name_in;
    }

    void print() {
        cout << m_id <<" " << m_name << endl;
    }
};

int main14() {
    Student14 st1(0, "Jack Jack");
    st1.print();

    Student14 st2(1, "Justin Park");
    st2.print();


    return 0;
}