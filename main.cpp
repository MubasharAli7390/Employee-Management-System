#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;


string employeeName[100] = {"Mubashar", "Ali", "Ahmad"};
string employeeID[100] = {"EMPLOYEE1", "EMPLOYEE2", "EMPLOYEE3"};
string employeeDesignation[100] = {"Software-Engineer", "Jr.-Software-Engineer", "Sr.Software-Engineer"};
int employeeSalary[100] = {50000, 35000, 80000};
string employeePhone[100] = {"03134567890", "03000000000", "03987654321"};
int arraySize = 100;
int indexToAdd = 3;
int continueOrBreak;


void infoRetrieval(int indx);
int displayMainMenuAndGetChoice();
int displaySearchMenuAndGetChoice();
void nameSearch();
void idSearch();
void designationSearch();
void salarySearch();
void phoneSearch();
void addEmployee();
void closeOrContinue();

int main() {
    int menuOption;;
    int wait;
do {
    menuOption = displayMainMenuAndGetChoice();
    if (menuOption == 1) {

        int searchOption = displaySearchMenuAndGetChoice();

        switch(menuOption){
        case 1:
        nameSearch();
        closeOrContinue();
        break;
        case 2:
        idSearch();
        closeOrContinue();
        break;
        case 3:
        designationSearch();
        closeOrContinue();
        break;
        case 4:
        salarySearch();
        closeOrContinue();
        break;
        case 5: 
        phoneSearch();
        closeOrContinue();
        break;
    }

    } else if (menuOption == 2) {

        addEmployee();
        closeOrContinue();


    } else if (menuOption == 3) {

        cout<<"Application closing.";
        continueOrBreak = 2;
    
    } } while (continueOrBreak == 1);
    
};



int displayMainMenuAndGetChoice() {
    int choice;
    cout<<"Employee Management System"<<endl;
    cout<<"Please Select an option"<<endl;
    cout<<"1.Search Employee"<<endl;
    cout<<"2.Add Employee"<<endl;
    cout<<"3.Close Application"<<endl;
    cin>>choice;
    system("clear");
    return choice;
};



int displaySearchMenuAndGetChoice() {
        int choice;
        cout<<"Please Select an option"<<endl;
        cout<<"1.Search By Name"<<endl;
        cout<<"2.Search By ID"<<endl;
        cout<<"3.Search By Designation"<<endl;
        cout<<"4.Search By Salary"<<endl;
        cout<<"5.Search By Phone Number"<<endl;
        cin>>choice;
        system("clear");
        return choice;
};



void nameSearch() {
    string name;
    cout<<"Enter Name of the Employee: ";
    cin>>name;

    for (int i = 0; i <= arraySize; i++) {
        if (employeeName[i] == name) {
            infoRetrieval(i);
            break;

        }
    }
    cout<<endl<<endl;
};



void idSearch() {
    string id;
    cout<<"Enter ID to search by: ";
    cin>>id;

    for (int i = 0; i <= arraySize; i++) {
        if (employeeID[i] == id) {
            infoRetrieval(i);
            break;

        }
    }
    cout<<endl<<endl;
};



void designationSearch() {
    string designation;
    cout<<"Enter Designation to search: ";
    cin>>designation;
    for (int i = 0; i <= arraySize; i++) {
        if (employeeDesignation[i] == designation) {
            infoRetrieval(i);
            break;

        }
    }
    cout<<endl<<endl;

};



void phoneSearch() {
    string ph;
    cout<<"Enter phone number to search by: ";
    cin>>ph;
    for (int i = 0; i <= arraySize; i++) {
        if (employeePhone[i] == ph) {
            infoRetrieval(i);
            break;

        }
    }
    cout<<endl<<endl;
};



void salarySearch() {
    int salary;
    cout<<"Enter salary to search for: ";
    cin>>salary;
    for (int i = 0; i <= arraySize; i++) {
        if (employeeSalary[i] == salary) {
            infoRetrieval(i);

        }
    }
    cout<<endl<<endl;
};



void infoRetrieval(int indx) {
    cout<<"Name: "<<employeeName[indx]<<endl;
    cout<<"ID: "<<employeeID[indx]<<endl;
    cout<<"Designation: "<<employeeDesignation[indx]<<endl;
    cout<<"Salary: "<<employeeSalary[indx]<<endl;
    cout<<"Phone Number: "<<employeePhone[indx]<<endl;
};



void addEmployee() {
        cout<<"Name: ";
        cin>>employeeName[indexToAdd];
        cout<<"ID: ";
        cin>>employeeID[indexToAdd];
        cout<<"Designation: ";
        cin>>employeeDesignation[indexToAdd];
        cout<<"Salary: ";
        cin>>employeeSalary[indexToAdd];
        cout<<"Phone Number: ";
        cin>>employeePhone[indexToAdd];
        indexToAdd++;
        cout<<"Employeee added successfully"<<endl;
};



void closeOrContinue(){
    cout<<"\nEnter 1 to go back to main menu. 2 to close the program."<<endl;
    cin>>continueOrBreak;
    system("clear");
    if (continueOrBreak == 2) {
        cout<<"Thanks for using the application."<<endl;
    }
};