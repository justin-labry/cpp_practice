//
// Created by Justin Park on 2020/06/17.
//

#ifndef CPP_PRACTICE_STUDENT_H
#define CPP_PRACTICE_STUDENT_H

#include "Person.h"

class Student : public Person{
private:
    int m_intel; // intelligence;


public:
    Student(const std::string &name_in = "No Name", const int &intel_in =0)
        : Person(name_in), m_intel(intel_in)
    { }

    void setIntel(const int & intel_in) {
        m_intel = intel_in;
    }

    int getIntel() const {
        return m_intel;
    }

    friend std::ostream &operator<<(std::ostream &out, const Student &student) {
        out << student.getName() << " " << student.getIntel();
        return out;

    }



};

#endif //CPP_PRACTICE_STUDENT_H
