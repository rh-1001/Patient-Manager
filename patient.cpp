#include <iostream>
#include "Patient.h"
using namespace std;

//Constructor initializing class
   Patient::Patient (int ID, string newPatientName, int newPatientAge, string newCondition, string newPriority){

    patientID = ID;
    name = newPatientName;
    condition = newCondition;
    treated = false;
    setAge(newPatientAge);
    setPriority(newPriority);

    };

    //Implementation of getPatientID function
    int Patient::getPatientID(){

        return patientID;

    }

    //Implementation of getName function
    string Patient::getName(){

        return name;

    }

    //Implementation of setName function
    void Patient::setName( string newName){
        name =newName;

    }

    //Implementation of getAge function
    int Patient::getAge(){
            return age;
        }

    //Implementation of setAge function
    void Patient::setAge(int newAge){

        if( newAge >=0){
         age = newAge;
        }else{

            cout << "Invalid Input!" << endl; 
            age = 0;
        }
    }

    //Implementation of getCondition function
    string Patient::getCondition(){

        return condition;

    }

    //Implementation of setCondition function
    void Patient::setCondition( string newCondition){
        condition = newCondition;
    }

    //Implementation of getPriority function
    string Patient::getPriority(){

        return priority;

    }

    //Implementation of setPriority function
    void Patient::setPriority(string newPriority){

        if (newPriority == "High" || newPriority == "Medium" || newPriority == "Low"){

            priority = newPriority;

        }else{

            cout << "Invalid Input!" << endl;
        }
    }

    