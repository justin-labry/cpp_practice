//
// Created by Labry on 2020/05/10.
//

#include <iostream>

using namespace std;

class Date {
//public: //access speifier
//    Date(int m_day, int m_month, int m_year) {
//        this->m_day = m_day;
//        this->m_month = m_month;
//        this->m_year = m_year;
//    }
private:
    int m_month;
    int m_day;
    int m_year;
public:
    const int getMMonth() {
        return m_month;
    }

    void setMMonth(const int& mMonth) {
        m_month = mMonth;
    }

    const int getMDay() {
        return m_day;
    }

    void setMDay(const int& mDay) {
        m_day = mDay;
    }

    const int getMYear(){
        return m_year;
    }

    void setMYear(const int& mYear) {
        m_year = mYear;
    }

    void copyFrom(const Date& original) {
        m_day = original.m_day;
        m_month = original.m_month;
        m_year = original.m_year;
    }

    bool operator==(const Date &rhs) const {
        return m_month == rhs.m_month &&
               m_day == rhs.m_day &&
               m_year == rhs.m_year;
    }

    bool operator!=(const Date &rhs) const {
        return !(rhs == *this);
    }

    void print() {
        cout << "m_month: " << m_month << " m_day: " << m_day << " m_year: " << m_year<<endl;
    }

    virtual ~Date() {
        cout<<"destruct!"<<endl;
    }
};

int main_10() {

    Date today;
    today.setMDay(14);
    today.setMMonth(5);
    today.setMYear(2020);
    today.print();

    Date copy;
    copy.copyFrom(today);

    copy.print();

    return 0;
}
