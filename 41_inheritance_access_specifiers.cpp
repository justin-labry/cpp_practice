//
// Created by Justin Park on 2020/07/06.
//

#include <iostream>
#include <vector>
#include <functional>

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
        //cout <<"~Base" << endl;
    }

    int m_pbulic;

    virtual std::ostream & print(std::ostream& out) const
    {
        out <<"I'm base" << endl;
        return out;
    }

    friend std::ostream & operator << (std::ostream &out, const Base &b) {
        //out << "This is base output " << endl;
        return b.print(out);
    }

protected:
    int m_protected;
private:
    int m_private;

};

class Derived : public Base {
public:
    int m_j;
    using Base::m_i;

    Derived(int value)
        : Base(value)
    {
        Base::m_pbulic = 123;
        Base::m_protected = 123;
//        m_private = 123;

    }
    ~Derived() override {
        //cout << "~Derived"<< endl;

    }
    virtual std::ostream & print(std::ostream& out) const override
    {
        cout <<"I'm derived1" << endl;
        return out;
    }

//    friend std::ostream & operator << (std::ostream &out, const Derived &d) {
////        cout << static_cast<Base>(d);
////        out << "This is derived1 output " << endl;
//        return d.print(out);
//    }

};

class Derived2 : public Base {
public:
    string str;
    using Base::m_i;

    Derived2(int value)
            : Base(value)
    {
        Base::m_pbulic = 123;
        Base::m_protected = 123;
//        m_private = 123;

    }
    ~Derived2() override {
        //cout << "~Derived"<< endl;

    }
    std::ostream& print(std::ostream& out) const override
    {
        cout <<"I'm derived2" << endl;
        return out;
    }

//    friend std::ostream & operator << (std::ostream &out, const Derived2 &d) {
//        cout << static_cast<Base>(d);
//        out << "This is derived2 output " << endl;
//        return out;
//    }

};

//class GrandChild : Derived {
//public:
//    GrandChild(int value_in)
//        : Derived(value_in)
//    {
//
//    }
//    void setValue(int value) {
//        Base::m_i = value;
//    }
//};

void doSomething(Base &b) {
    //b.print();
}

int main_41() {

    Derived d1(1);
    d1.m_j = 2048;
    cout << d1 << endl;

    // ....
//    Base *base = &d1;
//
//    auto *base_to_d1 = static_cast<Derived2*>(base);
//
//    if(base_to_d1 != nullptr)
//        base_to_d1->print();
//    else
//        cout << "Failed" << endl;

//    base_to_d1->str = "hi";

//    cout  << endl;

//    Derived b1(0);
//    b1.m_i =1024;

//    Base *base = new Derived(1);
//
//    delete base;

//    Derived d(10);
//    Base b = d;
//    b.print();
//    doSomething(d);
//    d.print();
//
//    vector<reference_wrapper<Base>> my_vec;
//    my_vec.push_back(b);
//    my_vec.push_back(d);
//
//    for (auto ele : my_vec)
//        ele.get().print();




//    cout<< base<<endl;
//    base.print();
//
//    Derived derived(1);
//    cout<< derived;
    //derived.print();

    return 0;
}
