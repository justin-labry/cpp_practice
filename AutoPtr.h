//
// Created by Justin Park on 2020/06/11.
//

#pragma once

#include <iostream>

template<class T>
class AutoPtr {
public:
    T *m_ptr = nullptr;

public:
    AutoPtr(T *ptr = nullptr)
        : m_ptr(ptr) {

    }

    ~AutoPtr() {
        if(m_ptr != nullptr) delete m_ptr;
    }

    AutoPtr(AutoPtr &a) {

        std::cout<< "AutoPtr copy constructor " << std::endl;

        // deep copy
        m_ptr = new T;
        *m_ptr = *a.m_ptr;
    }

    AutoPtr& operator = (AutoPtr &a) {
        std::cout<< "AutoPtr copy assignment " << std::endl;

        if(&a == this) { //prevent self-assignment
            return *this;
        }

        delete m_ptr;
        m_ptr = a.m_ptr;
        a.m_ptr = nullptr;
        return *this;
    }

    T& operator*() const { return *m_ptr; }
    T* operator->() const { return m_ptr; }
    bool isNull() const { return m_ptr == nullptr; }
};