//
// Created by Justin Park on 2020/06/29.
//

#include "Student.h"
#include "Teacher.h"

int main_39() {

    Student std("jack Jack");
    std.setName("Jack Jack 2");
    std::cout<< std.getName() << std::endl;

    Teacher teacher1("Dr. H");
    teacher1.setName("Dr. K");
    std::cout<< teacher1.getName() << std::endl;
    std::cout << std << std::endl;
    std::cout << teacher1 << std::endl;

    std.doNothing();
    teacher1.doNothing();

    Person person;
    person.setName("Mr. Incredible");
    person.getName();
//    person.study; // error
//    person.teacher(); // error


    return 0;
}

