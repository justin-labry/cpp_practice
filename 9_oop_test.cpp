//
// Created by Labry on 2020/05/10.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Friend: m_name, m_address, data of birth -> m_age, m_height, m_weight
class Friend {
public:
    Friend(const string name, const string address, int age, double height, double weight) {
        this->m_name = name;
        this->m_address = address;
        this->m_age = age;
        this->m_height = height;
        this->m_weight = weight;
    }

    Friend(Friend *pFriend) {
        this->m_name = pFriend->m_name;
        this->m_address = pFriend->m_address;
        this->m_age = pFriend->m_age;
        this->m_height = pFriend->m_height;
        this->m_weight = pFriend->m_weight;
    }

    string m_name;
    string m_address;
    int m_age;
    double m_height;
    double m_weight;

    void print() {
        cout << m_name << " " << m_address << " " << m_age << " " << m_height << " "
             << m_weight << endl;
    }
};



int main_9() {
    vector<Friend> list_of_friend;
    list_of_friend.push_back(new Friend{"Jack Jack", "Uptown", 23, 163.5, 55.2});
    list_of_friend.push_back(new Friend{"Justin Park", "Downtown", 37, 163.5, 55.2});
    list_of_friend.push_back(new Friend{"Steven Lee", "LA", 47, 178.5, 75.2});

    for(auto &elem: list_of_friend) {
        elem.print();
    }

    return 0;
}
