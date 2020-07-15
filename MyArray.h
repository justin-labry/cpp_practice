//
// Created by Justin Park on 2020/07/14.
//

#pragma once

#include <assert.h>
#include <iostream>

template<typename T, int T_SIZE>
class MyArray {
private:
  //  int m_length;
    T *m_data;

public:
    MyArray() {
    //    m_length = 0;
        m_data = new T[T_SIZE];
    }

    MyArray(int length) {
        m_data = new T[T_SIZE];
       // m_length = length;
    }

    ~MyArray() {
        reset();
    }

    void reset() {
        delete[] m_data;
        m_data = nullptr;
        //m_length = 0;
    }

    T &operator[](int index) {
        assert(index >= 0 && index < T_SIZE);
        return m_data[index];
    }

    int getLegth() {
        return T_SIZE;
    }

    void print() {
        std::cout<<T_SIZE << std::endl;
        for (int i = 0; i < T_SIZE; ++i) {
            std::cout << m_data[i] << " ";
        }
        std::cout << std::endl;
    }

};