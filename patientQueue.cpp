#include <iostream>
#include <vector>
#include "PatientQueue.h"
#include "Patient.h"
using namespace std;

vector<Patient> waitingPatients;
vector <Patient> treatedPatients;

//Constructor
PatientQueue::PatientQueue(){

    nextPatientID =1000;
}

// Implementing addPatient() function

void PatientQueue:: addPatient(){

    string name, condition, priority;
    int age;

    cout << " Enter Patient Name: ";
    getline(cin, name);

    cout << " Enter Patient Age: ";
    cin >> age;

    while (age < 0){

        cout << "Invalid Input! " << endl;
        cin >> age;
    }

    cin.ignore();

    cout << "Enter Patient Condition: ";
    getline(cin, condition);

    cout << "Enter Patient priority: " << endl;
    cin >> priority;

    while ( priority != "High" && priority != "Medium" && priority != "Low" ){

        cout << "Invalid Input! " << endl;
        cin >>priority;
    }

    waitingPatients.emplace_back(nextPatientID, name, age, condition, priority);
    nextPatientID++;
}

// Implementing displayPatient() function
