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

// Implementing displayPatient() function for waiting patients
void PatientQueue::displayPatients(){
    if (waitingPatients.empty()){
        cout << "No patients waiting."<< endl;

    }else{

        for(int i=0; i < waitingPatients.size(); i++ ){

            cout << "Patient ID is: " << waitingPatients[i].getPatientID() << endl;
            cout << "Patient name is: " << waitingPatients[i].getName() << endl;
            cout << "Patient age is: " << waitingPatients[i].getAge() << endl;
            cout << "Patient condition is: " << waitingPatients[i].getCondition() << endl;
            cout << "Patient priority is: " << waitingPatients[i].getPriority() << endl;
            cout <<endl; 

            }
        }
    }

// Implementing displayPatient() function for treated patients
void PatientQueue::displayPatients(){
    if (treatedPatients.empty()){
        cout << "No patients have been treated yet."<< endl;

    }else{

        for(int i=0; i < treatedPatients.size(); i++ ){

            cout << "Patient ID is: " << treatedPatients[i].getPatientID() << endl;
            cout << "Patient name is: " << treatedPatients[i].getName() << endl;
            cout << "Patient age is: " << treatedPatients[i].getAge() << endl;
            cout << "Patient condition is: " << treatedPatients[i].getCondition() << endl;
            cout << "Patient priority is: " << treatedPatients[i].getPriority() << endl;
            cout <<endl; 

            }
        }
    }

// Implementing search function
void PatientQueue::searchPatient(){

    int patientID;

    cout << " Enter patient ID: " << endl;
    cin >> patientID;

    for (int i = 0; waitingPatients.size(); i++){

        if ( patientID == patientID ){

            cout << "Patient ID is: " << waitingPatients[i].getPatientID() << endl;
            cout << "Patient name is: " << waitingPatients[i].getName() << endl;
            cout << "Patient age is: " << waitingPatients[i].getAge() << endl;
            cout << "Patient condition is: " << waitingPatients[i].getCondition() << endl;
            cout << "Patient priority is: " << waitingPatients[i].getPriority() << endl;
            cout <<endl; 
        }else{

            cout << " Patient not found." << endl;
        }
    }

}
