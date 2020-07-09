//
// Created by Justin Park on 2020/06/17.
//

#include <iostream>
#include "Monster.h"
#include "Position2D.h"

using namespace std;

int main_33() {

    Monster mon1("Sanson", Position2D(0,0));

    {
        mon1.moveTo(Position2D(1,1));
        cout << mon1 << endl;
    }

    Monster mon2("Parsival", Position2D(10,10));
    mon2.moveTo(Position2D(25,35));

    cout<< mon2 << endl;


    return 0;

}
