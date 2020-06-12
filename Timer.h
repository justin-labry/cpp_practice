//
// Created by Justin Park on 2020/06/12.
//

#ifndef CPP_PRACTICE_TIMER_H
#define CPP_PRACTICE_TIMER_H

#include <iostream>
#include <chrono>
#include <algorithm>
#include <random>
#include <vector>

using namespace std;

class Timer
{
    using clock_t = std::chrono::high_resolution_clock;
    using second_t = std::chrono::duration<double, std::ratio<1>>;

    std::chrono::time_point<clock_t> start_time = clock_t::now();

public:
    double elapsed() {
        std::chrono::time_point<clock_t> end_time = clock_t::now();
        return std::chrono::duration_cast<second_t>(end_time - start_time).count();
    }



};

#endif //CPP_PRACTICE_TIMER_H
