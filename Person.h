//
// Created by Justin Park on 2020/06/29.
//

#pragma once
#include <iostream>
#include <string>

class Person {
private:
    std::string m_name;
public:
//    Person()
//    {
//
//    }
    Person(const std::string& name_in="no name")
        : m_name(name_in)
    {

    }

    void setName(const std::string & name_in) {
        m_name = name_in;
    }

    std::string getName() const
    {
        return  m_name;
    }

    void doNothing() const
    {
        std::cout << m_name << " is doing nothing " << std::endl;

    }

};

