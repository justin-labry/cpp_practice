//
// Created by Justin Park on 2020/06/16.
//

//
// Created by Justin Park on 2020/06/11.
//

#include <iomanip>
#include "Resource.h"
#include "Timer.h"
#include <memory>

template<class T>
void MySwap(T &a, T &b) {
//    T tmp = a;
////    a = b;
////    b = tmp;

    T tmp{std::move(a)};
    a = std::move(b);
    b = std::move(tmp);
}

//AutoPtr<Resource> generateResource() {
//    AutoPtr<Resource> res(new Resource(10000000));
//
//    return res;
//}

auto doSomething() {
//    auto res1 = std::make_unique<Resource>(5);

    return std::make_unique<Resource>(5);
}

auto doSomething2(std::unique_ptr<Resource> & res) {
//    auto res1 = std::make_unique<Resource>(5);

    return res->setAll(10);
}

int main_30() {
    using namespace std;
//    streambuf* orig_buf = cout.rdbuf();
    //cout.rdbuf(NULL); //disconnnect cout rom buffer
    //cout.rdbuf(NULL); //disconnnect cout rom buffer

//    Timer timer;

//    {
//        std::unique_ptr<Resource> res(new Resource(100000000));
//
//    }

    std::unique_ptr<int> upi(new int);

//    auto res1 = std::make_unique<Resource>(5);
//    auto res1 = doSomething();
//
//    res1->setAll(5);
//    res1->print();
//
//    std::unique_ptr<Resource> res2;
//
//    std::cout << std::boolalpha;
//    std::cout << static_cast<bool>(res1) << endl;
//    std::cout << static_cast<bool>(res2) << endl;
//
////    res2 = res1;
//    res2 = std::move(res1);
//
//    cout<< std::boolalpha;
//    cout<< static_cast<bool>(res1) << endl;
//    cout<< static_cast<bool>(res2) << endl;
//
//    if(res1 != nullptr) res1->print();
//    if(res2 != nullptr) res2->print();

//    cout.rdbuf(orig_buf);
//    cout <<fixed<<std::setprecision(10)<< timer.elapsed() << endl;

    {
        auto res1 = std::make_unique<Resource>(5);
        res1-> setAll((1));
        res1->print();

        doSomething2(res1);

        res1->print();
    }

    return 0;
}


