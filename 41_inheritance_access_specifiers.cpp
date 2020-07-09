//
// Created by Justin Park on 2020/07/06.
//

#include <iostream>

using namespace std;

class Base {
protected:
    int m_i;
public:
    //using Base::m_i;

    Base(int value_in)
            : m_i(value_in)
    {

    }

    virtual ~Base()
    {
        cout <<"~Base" << endl;
    }

    int m_pbulic;

    void print() {
        cout <<"I'm base" << endl;
    }

    friend std::ostream & operator << (std::ostream &out, const Base &b) {
        out << "This is base output " << endl;
        return out;
    }

protected:
    int m_protected;
private:
    int m_private;

};

class Derived : public Base {
public:
    using Base::m_i;

    Derived(int value)
        : Base(value)
    {
        Base::m_pbulic = 123;
        Base::m_protected = 123;
//        m_private = 123;

    }
    ~Derived() override {
        cout << "~Derived"<< endl;

    }
//    void print() {
//        cout <<"I'm derived" << endl;
//    }

    friend std::ostream & operator << (std::ostream &out, const Derived &d) {
        cout << static_cast<Base>(d);
        out << "This is derived output " << endl;
        return out;
    }

private:
//    using Base::print;
    void print() = delete;

};

class GrandChild : Derived {
public:
    GrandChild(int value_in)
        : Derived(value_in)
    {

    }
    void setValue(int value) {
        Base::m_i = value;
    }
};

int main_41() {

//    Derived b1(0);
//    b1.m_i =1024;

    Base *base = new Derived(1);

    delete base;



//    cout<< base<<endl;
//    base.print();
//
//    Derived derived(1);
//    cout<< derived;
    //derived.print();

    return 0;
}
