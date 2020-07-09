//
// Created by Justin Park on 2020/06/24.
// Make this and use smart pointer instead of regular pointers
//

#include <iostream>
#include <vector>
#include <array>

using namespace std;

class IntArray {
private:
    int m_length = 0;
    int *m_data = nullptr;

public:
    IntArray(const int& length)
            : m_length(length)
    {
        m_data = new int[length];
    }

    IntArray(const std::initializer_list<int> &arr)
            :IntArray(arr.size())
    {
        int count = 0;
        for (auto & e : arr) {
            m_data[count] = e;
            ++count;
        }
    }

    //Get rid of this after implementing smart pointer based Impl.
    ~IntArray() {

    }

    void initialize() {

    }

    void reset() {
        //delete
        //assign empty list

    }

    void resize() {
        // make ^2 room
    }

    void insertBefore(const int& value, const int & ix){

    }

    void remove(const int & ix) {

    }

    void push_back(const int value) {
        //if memory enough
        // push
        // if memory not enough resize and push

    }

};


int main_37() {

    IntArray my_arr{1, 3, 5, 7, 8};

    my_arr.insertBefore(10, 1);   // 1, 10, 3, 5, 7, 9
    my_arr.remove(3);                   // 1, 10, 3, 7, 9
    my_arr.push_back(13);            // 1, 10, 3, 7, 9, 13

//    std::vector<int> int_vec;
//    std::array<int,10> int_arry;


    return 0;
}
