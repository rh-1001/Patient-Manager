#include <iostream>
#include <string>
#include <vector>
#include "patient.h"

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
    void displayPatients();
    void searchPatient();
    void markPatientsAsTreated();

};