//
// Created by Justin Park on 2020/06/17.
//

#pragma once

#include <iostream>
#include <string>
#include "Teacher.h"
#include "Student.h"

class Lecture{
private:
    std::string m_name;

    Teacher *teacher;
    std::vector<Student*> students;

public:
    Lecture(std::string str) {

    }

    ~Lecture() {
        //do NOT delete teacher
        //do NOT delete students
    }


    void assignTeacher(Teacher * const teacher_input) {
        teacher = teacher_input;
    }

//    void assignTeacher(Teacher * const teacher_input) {
//        teacher = teacher_input;
//    }

    void registerStudent(Student * const student_input) {
        students.push_back(student_input);
    }

    void study() {
        std::cout << m_name <<" Study " << std::endl << std::endl;

//        for(auto &element: students) //!!! use & to relect value changes
////            *element.setIntel(*element.getIntel() + 1);

        for(auto &element: students) //!!! use & to relect value changes
            element->setIntel(element->getIntel() + 1);


    }

    friend std::ostream &operator<<(std::ostream &out, const  Lecture &lec) {
        out << "Lecuture name : " << lec.m_name << std::endl;

        out << lec.teacher << std::endl;
        for(auto element: lec.students)
            out << *element << std::endl;

        return out;

    }

};

