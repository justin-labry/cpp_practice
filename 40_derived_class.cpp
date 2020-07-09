//
// Created by Justin Park on 2020/07/01.
//
#include <iostream>

using namespace std;

//class Mother
//{
//public:
//    double m_i;
//    int m_temp;
//    Mother()
//        :m_i(1)
//    {
//        cout<<"Mother Construction" << endl;
//    }
//
//    //int m_i;
//};
//
//class Child : public Mother {
//public:
//    double m_d;
//    Child()
//        : m_d(1.0)
//    {
//        this->m_i = 10;
//        this->Mother::m_i = 1024;
//        cout << "Child Construction" << endl;
//
//    }
//};

class A {
public:
    A(int a=1) {
        //cout << "A Constructor:" << a <<endl;
    }
    ~A() {
        //cout << "A destructor" << endl;
    }
    virtual A* getThis() {
        cout<<" A::getThis()" << endl;
        return this;
    }
    virtual void print(int x) const { cout<<"A"<< endl; }
//    virtual void print() { cout<<"A" << endl; }
};

class B : public A {
//class B {
public:
    B(int a=1, double b=2.0)
        :A(a)
    {
        //cout << "B constructor:" << b << endl;
    }
    ~B() {
        //cout << "B destructor" << endl;
    }
    virtual B* getThis() {
        cout<<" B::getThis()" << endl;
        return this;
    }
    virtual void print(int x) final { cout<<"B" << endl; }
//    virtual void print() { cout<<"B" << endl; }
};

class C : public B {
public:
    C(int a=1, double b=2.0, char c='c')
        :B(a,b)
    {
        //cout << "C constructor: " <<c<< endl;
    }
    ~C() {
        //cout << "C destructor " << endl;
    }
    virtual void print() { cout<<"C" << endl; }
};

class D: public C {
public:
    D(int a1, double b1, char c1, int a, double b, char c, float d = 4.0f) : C(a1, b1, c1) {}
    virtual void print() override {
        cout<<"D" << endl;
    }
};


int main_40() {

//    Child* c1 = new Child();
//    C c1(1024,3.14,'a');

    A a;
//    a.print();


    B b;
//    b.print();

    C c;
    c.print();

//    D d(0, 0, 0, 0, 0, 0, 0);
//    d.print();

    A &ref = b;
    ref.print(1);
    b.getThis()->print(1);
    ref.getThis()->print(1);
    cout<<typeid(b.getThis()).name() <<endl;
    cout<<typeid(ref.getThis()).name() <<endl;

    return 0;
}