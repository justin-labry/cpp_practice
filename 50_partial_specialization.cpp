//
// Created by Justin Park on 2020/07/15.
//

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
#include <cctype>

using namespace std;

template <class T, int size>
class StaticArray_BASE {
private:
    T m_array[size];

public:
    T* getArray() {return m_array; }

    T& operator[](int index) {
        return m_array[index];
    }
    //template <typename T, int size>
    virtual void print() {
        for(int count = 0; count < size; ++count) {
            std::cout << (*this)[count] << ' ';
        }
        std::cout << endl;
    }
};

template <class T, int size>
class StaticArray : public StaticArray_BASE<T, size>
{

};

template <int size>
class StaticArray<char, size> : public StaticArray_BASE<char, size>
{
public:
    void print() override {
        for(int count = 0; count < size; ++count) {
            std::cout << (*this)[count];
        }
        std::cout << endl;
    }
};

//template <int size>
//void print(StaticArray<char, size> & array) {
//    for(int count = 0; count < size; ++count) {
//        std::cout << array[count];
//    }
//    std::cout << endl;
//}

int main_50() {
    StaticArray<int, 4> int4;
    int4[0] = 1;
    int4[1] = 2;
    int4[2] = 3;
    int4[3] = 4;

    int4.print();

    StaticArray<char, 14> char14;
    char14[0] = 'H';
    char14[1] = 'e';
    char14[2] = 'l';
    char14[3] = 'l';
    char14[4] = 'o';
    char14[5] = ',';
    char14[6] = ' ';
    char14[7] = 'W';
    char14[8] = 'o';
    char14[9] = 'r';
    char14[10] = 'l';
    char14[11] = 'd';
    char14[12] = ' ';
//    char14[13] = '\n';
    // ...
//    strcpy_s(char14.getArray(), 14, "Hello, World");

    char14.print();
    return 0;
}
