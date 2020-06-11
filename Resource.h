//
// Created by Justin Park on 2020/06/11.
//

#ifndef CPP_PRACTICE_RESOURCE_H
#define CPP_PRACTICE_RESOURCE_H

#include <iostream>

class Resource {
public:
    int* m_data = nullptr;
    unsigned int m_length = 0;
public:
    Resource() {
        std::cout<< "Resource constructed" << std::endl;
    }
    Resource(unsigned length) {
        std::cout<< "Resource Length constructed" << std::endl;
        this->m_data = new int[length];
        this->m_length = length;
    }

    Resource(const Resource &res) {
        std::cout<< "Resource Copy constructed" << std::endl;
        Resource(res.m_length);

        for(unsigned i = 0; i < m_length; ++i) {
            m_data[i] = res.m_data[i];
        }
    }

    ~Resource() {
        std::cout<< "Resource destructed" << std::endl;

        if(m_data != nullptr) delete[] m_data;
    }

    Resource & operator = (Resource &res) {
        std::cout <<"Resource copy assignment" << std::endl;

        if(&res == this) return * this;

        if(this->m_data != nullptr) delete [] m_data;

        m_length = res.m_length;
        m_data = new int[m_length];

        for(unsigned i = 0; i < m_length; ++i)
            m_data[i] = res.m_data[i];

        return *this;
    }

    void print() {
        for(unsigned i = 0; i < m_length; ++i) {
            std::cout << m_data[i] << " ";
        }
        std::cout << std::endl;
    }

};
#endif //CPP_PRACTICE_RESOURCE_H
