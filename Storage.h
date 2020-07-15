//
// Created by Justin Park on 2020/07/14.
//

#pragma once

#include <iostream>

template<class T>
class Storage {
private:
    T m_value;

public:
    Storage(T value) {
        m_value = value;
    }

    ~Storage() {

    }

    void print() {
        std::cout << m_value << '\n';
    }


};


