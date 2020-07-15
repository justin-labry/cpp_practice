//
// Created by Justin Park on 2020/07/14.
//
#include "Storage.h"


template <>
void Storage<double>::print() {
    std::cout << "Double type";
    std::cout << std::scientific << m_value <<  std::endl;
}

