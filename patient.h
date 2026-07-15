#pragma once
#include <iostream>
#include <string>
using namespace std;

class Patient {

    private:

    int patientID;
    string name;
    int age;
    string condition;
    string priority;
    bool treated;

    public:

    //Constructor initializing class
    Patient (int ID, string newPatientName, int newPatientAge, string newCondition, string newPriority);
        

    // Getter for accessing patient ID
    int getPatientID();

    // Getter for accessing patient name & setter for modifying patient name
    string getName();
    void setName( string newName);

    // Getter for accessing patient age & setter for modifying patient age
    int getAge();
    void setAge(int newAge);

    // Getter for accessing patient condition & setter for modifying patient condition
    string getCondition();
    void setCondition(string newCondition);

    // Getter for accessing patient priority & setter for modifying patient priority
    string getPriority();
    void setPriority(string newPriority);

    //// Getter for accessing status of patient & setter for modifying patient status
    bool isTreated();
    void setTreated(bool status);
};