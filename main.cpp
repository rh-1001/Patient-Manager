#include <iostream>
#include "PatientQueue.h"
using namespace std;

int main(){

PatientQueue p;
int choice;

do{

//Menu

cout << "=================================" << endl;
cout << "   Patient MAnagement System   " << endl;
cout << "=================================" << endl;

cout << "1. Add Patient" << endl;
cout << "2. Display Waiting Patients " << endl;
cout << "3. Display Treated Patients" << endl;
cout << "4. Search Waiting Patient " << endl;
cout << "5. Search Treated Patient" << endl;
cout << "6. Mark Patient as Treated " << endl;
cout << "7. Exit" << endl;

cout << "Enter your choice: ";
cin >> choice;

cin.ignore();

switch(choice){

    case 1:
        p.addPatient();
        break;
    
    case 2:
         p.displayWaitingPatients();
         break;

    case 3:
        p.displayTreatedPatients();
        break;

    case 4:
        p.searchWaitingPatient();
        break;

    case 5:
        p.searchTreatedPatient();
        break;

    case 6:
        p.markPatientsAsTreated();
        break;
    
    case 7:
        cout << "Exiting program..." << endl;
        break;

    default:
    cout << "Invalid menu option. Please try again." << endl;
    break;

}

}while(choice !=7);

return 0;

}