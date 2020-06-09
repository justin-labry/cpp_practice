#include <iostream>

using namespace std;


struct Person {
    int age;
    double weight;
};


void doSomething(const int& x) {
    cout<< x<< endl;
}

int main_1() {
    //std::cout << "Hello, World!" << std::endl;
    //using namespace std;
    const int& ref_x = 3 + 4;

    std::cout<<ref_x<<endl;
    std::cout<<&ref_x<<endl;

    int a = 1;

    doSomething(a);
    doSomething(1);
    doSomething((3 * 4));

    Person person;

    person.age = 5;
    person.weight = 30;

    Person& ref =person;

    ref.age = 15;
    ref.weight = 40;

    Person* ptr = &person;
    ptr->age = 20;
    ptr->weight = 45;

    cout<<ptr->age<<" "<<ptr->weight<<endl;
    return 0;
}
