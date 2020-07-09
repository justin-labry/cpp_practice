//
// Created by Justin Park on 2020/06/17.
//

#ifndef CPP_PRACTICE_TEACHER_H
#define CPP_PRACTICE_TEACHER_H

#include <iostream>
#include "Person.h"

class Teacher : public Person {
private:
    //TODO: more members like home address, salary, age, evaluation, etc.

public:
    Teacher(std::string name_in = "No Name")
        : Person(name_in)
    {
        this->getName();

    }


    friend std::ostream &operator<<(std::ostream &out, const Teacher &teacher) {
        out << teacher.getName();
        return out;

    }

};

#endif //CPP_PRACTICE_TEACHER_H
