//
// Created by Justin Park on 2020/07/06.
//
#include <iostream>
#include <string>

using namespace std;

class Animal {

protected:
    string m_name;

public:
    Animal(std::string name)
            : m_name(name)
    {}

public:
    string getName() { return m_name;}
    virtual void speak() const = 0; // pure virtual function
};


//void Animal::speak() const {
//    cout << m_name << "???" << endl;
//}


class Cat: public Animal {
public:
    Cat(string name)
            :Animal(name)
    {

    }

    void speak() const {
        cout << m_name << " goes Meow " << endl;
    }
};

class Dog: public Animal {
public:
    Dog(string name)
            :Animal(name) {

    }

public:
    void speak() const override {
        cout<< m_name << " goes Woof " << endl;
    }
};




int main_43() {
//    Animal animal("my animal");
    Cat cat("my cat");
    Dog dog("my dog");

//    animal.speak();
    cat.speak();
    dog.speak();

    Animal *ptr_animal1 = &cat;
    Animal *ptr_animal2 = &dog;

    ptr_animal1->speak();
    ptr_animal2->speak();

    Cat cats[] = {Cat("cat1"), Cat("cat2")};
    Dog dogs[] = {Dog("dog1"), Dog("dog2")};

    for(auto animal : cats) {
        animal.speak();
    }
    cout<<"----------------"<<endl;
    Animal *my_animals[] = {&cats[0], &cats[1], &dogs[0], &dogs[1]};

    for(auto animal : my_animals) {
        animal->speak();
    }
}