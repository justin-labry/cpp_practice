//
// Created by Justin Park on 2020/06/11.
//


#include <iostream>
#include "Resource.h"
#include "AutoPtr.h"
using namespace std;

void doSomething(AutoPtr<Resource> res) {
    AutoPtr<Resource> res1(new Resource);
    AutoPtr<Resource> res2;

    return;
}


int main() {
    AutoPtr<Resource> res1(new Resource);
    AutoPtr<Resource> res2;

    cout << res1.m_ptr << endl;
    cout << res2.m_ptr << endl;

    res2 = res1;

    cout << res1.m_ptr << endl;
    cout << res2.m_ptr << endl;

//    doSomething(res1);


}