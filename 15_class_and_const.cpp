//
// Created by Labry on 2020/05/11.
//

#include <iostream>
#include <string>

using namespace std;

class Something {
public:
    string m_string = "default";

    Something() {
        cout<<"void constructor"<<endl;
    }

    Something(const Something& st_in) {
        cout<<"copy constructor"<<endl;
        m_string = st_in.m_string;
    }

    void setValue(const string value)
    {
        m_string = value;
    }

    const string& getValue() const {
        int i = 0;
        i = 1;
        return (string &) "const";
    }
    string& getValue() {
        return (string &) "non-const";
    }
};

void print(const Something &st) {
    cout << &st << endl;
    cout << st.getValue() << endl;
}

int main_15() {
    const Something something;
//    something.setValue(3);
    cout<<something.getValue();

    Something sth2;
    cout <<sth2.getValue() << endl;

    return 0;
}