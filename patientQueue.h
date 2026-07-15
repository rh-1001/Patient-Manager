#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Patient.h"

using namespace std;

class PatientQueue{

    private:
    vector <Patient> waitingPatients;
    vector <Patient> treatedPatients;
    int nextPatientID;

    public:

    PatientQueue();
    void addPatient();
    void removePatient();
    void displayWaitingPatients();
    void displayTreatedPatients();
    void searchWaitingPatient();
    void searchTreatedPatient();
    void markPatientsAsTreated();

};