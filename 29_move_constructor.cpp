//
// Created by Justin Park on 2020/06/11.
//

#include <iomanip>
#include "AutoPtr.h"
#include "Resource.h"
#include "Timer.h"

AutoPtr<Resource> generateResource() {
    AutoPtr<Resource> res(new Resource(10000000));

    return res;
}

int main() {
    using namespace std;
    streambuf* orig_buf = cout.rdbuf();
    //cout.rdbuf(NULL); //disconnnect cout rom buffer

    Timer timer;

    {
        AutoPtr<Resource> main_res;
        main_res = generateResource();
    }

    cout.rdbuf(orig_buf);
    cout <<fixed<<std::setprecision(10)<< timer.elapsed() << endl;

    return 0;
}
