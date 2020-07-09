//
// Created by Justin Park on 2020/06/24.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Doctor; //forward declaration

class Patient
{
private:
    string m_name;
    vector<Doctor*> m_doctors;
public:
    Patient(string name_in)
        : m_name(name_in)
        { }

    void meetDoctors();

    void addDoctor(Doctor * new_doc) {
        m_doctors.push_back(new_doc);
    }

    friend class Doctor;
};

class Doctor {
    string m_name;
    vector<Patient*> m_patients;
    vector<Doctor*> m_doctors;
public:
    Doctor(string name_in)
        : m_name(name_in)
    {}

    void meetPatients() {
        for(auto & ele : m_patients) {
            cout<<"Meet patients :" << ele->m_name << endl;
        }
    }

    void meetDoctors() {
        for(auto & ele : m_doctors) {
            cout<<"Meet doctor : "<< ele->m_name << endl;
        }
    }

    void addPatient(Patient * new_patient) {
        m_patients.push_back(new_patient);
    }

    void addDoctor(Doctor * new_doc) {
        m_doctors.push_back(new_doc);
    }

    friend class Patient;
};

void Patient::meetDoctors() {
    for(auto & ele : m_doctors) {
        cout<<"Meet doctor : "<< ele->m_name << endl;
    }
}


int main_35() {

    Patient *p1 = new Patient("Jack Jack");
    Patient *p2 = new Patient("Dash");
    Patient *p3 = new Patient("Violet");

    Doctor *d1 = new Doctor("Doctor K");
    Doctor *d2 = new Doctor("Doctor L");
    Doctor *d3 = new Doctor("Doctor WHO");

    p1->addDoctor(d1);
    d1->addPatient(p1);

    p2->addDoctor(d2);
    d2->addPatient(p2);

    p2->addDoctor(d1);
    d1->addPatient(p2);

    d1->addDoctor(d2);
    d1->addDoctor(d3);

    //patients meet dockers
    p2->meetDoctors();

    //dockers meet patients
    d1->meetPatients();

    //doctors meet docs
    d1->meetDoctors();
    //deletes

    delete p1;
    delete p2;
    delete p3;

    delete d1;
    delete d2;

    return 0;
}
