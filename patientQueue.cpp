#include <iostream>
#include <vector>
#include "PatientQueue.h"
#include "Patient.h"
using namespace std;


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
void PatientQueue::displayWaitingPatients(){
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
void PatientQueue::displayTreatedPatients(){
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

// Implementing search function for waiting patients
void PatientQueue::searchWaitingPatient(){

    int searchID;

    cout << " Enter patient ID: " << endl;
    cin >> searchID;

    for (int i = 0; i < waitingPatients.size(); i++){

        if ( searchID == waitingPatients[i].getPatientID() ){

            cout << "Patient ID is: " << waitingPatients[i].getPatientID() << endl;
            cout << "Patient name is: " << waitingPatients[i].getName() << endl;
            cout << "Patient age is: " << waitingPatients[i].getAge() << endl;
            cout << "Patient condition is: " << waitingPatients[i].getCondition() << endl;
            cout << "Patient priority is: " << waitingPatients[i].getPriority() << endl;
            cout <<endl; 

            return;

        }
        }
        cout << " Patient not found." << endl;
    }
    
// Implementing search function for treated patients
void PatientQueue::searchTreatedPatient(){

    int searchID;

    cout << " Enter patient ID: " << endl;
    cin >> searchID;

    for (int i = 0; i < treatedPatients.size(); i++){

        if ( searchID == treatedPatients[i].getPatientID() ){

            cout << "Patient ID is: " << treatedPatients[i].getPatientID() << endl;
            cout << "Patient name is: " << treatedPatients[i].getName() << endl;
            cout << "Patient age is: " << treatedPatients[i].getAge() << endl;
            cout << "Patient condition is: " << treatedPatients[i].getCondition() << endl;
            cout << "Patient priority is: " << treatedPatients[i].getPriority() << endl;
            cout <<endl; 

            return;

        }
        }
        cout << " Patient not found." << endl;
    }

// Implementation for function that moves treated to another vector
void PatientQueue:: markPatientsAsTreated(){

    int searchID;
    cout << "Enter Patient ID: " << endl;
    cin >> searchID;

    //Loop that searches through the waiting patients vector
    for (int i = 0; i < waitingPatients.size(); i++){

        if ( searchID == waitingPatients[i].getPatientID() ){
        
        //Changing status of the patient
        waitingPatients[i].setTreated(true);
        if (waitingPatients[i].isTreated()) {
        cout << "Status: Treated" << endl;
        } else {
        cout << "Status: Waiting" << endl;
    }
        //Adding treated patients to the treated patients vector
        treatedPatients.push_back(waitingPatients[i]);

        //Removing treated patients from waiting patients vector
        waitingPatients.erase(waitingPatients.begin() + i);

        cout << " Patient has been successfully treated!"  << endl;

     return;
    }
    

}
cout << "Patient not found." << endl;}

