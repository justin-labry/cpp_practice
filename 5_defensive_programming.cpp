//
// Created by Labry on 2020/05/09.
//

#include <iostream>
#include <string>

using namespace std;

int main_5() {
    // violated assumption

    string hello = "Hello, my m_name is Jack the jack";

    int ix;

    while(true) {
        cout << "input from 0 to " << hello.size() - 1 << ": ";
        cin >> ix;
        if(ix == -1) {
            break;
        }

        if (ix >= 0 && ix <= hello.size() - 1) {
            cout << hello[ix] << endl;
        } else {
            cout << "Please try again" << endl;
        }
    }

    return 0;
}