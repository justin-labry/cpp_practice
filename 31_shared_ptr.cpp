//
// Created by Justin Park on 2020/06/16.
//

#include <iostream>
#include "Resource.h"

using namespace std;

void soSomething(std::unique_ptr<Resource> res) {

}

int main_31() {

//    soSomething(std::unique_ptr<Resource>(new Resource(100000000)));
    soSomething(std::make_unique<Resource>(10000000));


//    Resource *res = new Resource(3);
//    res->setAll(1);
//    std::shared_ptr<Resource> ptr1(res);
    shared_ptr<Resource> ptr1;
    ptr1 = std::make_shared<Resource>(3);
    ptr1->print();

    {
        auto ptr2 = ptr1;

        ptr2->setAll(3);
        ptr2->print();
        cout<<"Going out of the inner block"<< endl;
    }

    ptr1->print();

    cout<<"Going out of the outer block"<<endl;
    return 0;
}
