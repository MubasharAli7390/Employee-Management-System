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


void infoRetrieval(int indx);


int main() {

    int firstOption;
    int index = 3;
    int continueOrBreak;
    int wait;

    
do {

    cout<<"\nEmployee Management System"<<endl;
    cout<<"Please Select an option"<<endl;
    cout<<"1.Search Employee"<<endl;
    cout<<"2. Add Employee"<<endl;
    cin>>firstOption;
    system("clear");

    

    if (firstOption == 1) {

        int searchOption;
        cout<<"Please Select an option"<<endl;
        cout<<"1.Search By Name"<<endl;
        cout<<"2.Search By ID"<<endl;
        cout<<"3.Search By Designation"<<endl;
        cout<<"4.Search By Salary"<<endl;
        cout<<"5.Search By Phone Number"<<endl;
        cin>>searchOption;
        system("clear");

        if (searchOption == 1) {
            
            string name;
            cout<<"Enter Name of the Employee: ";
            cin>>name;
            for (int i = 0; i <= arraySize; i++) {
                if (employeeName[i] == name) {
                    infoRetrieval(i);
                    break;

                }
            }

        } else if (searchOption == 2) {

            string id;
            cout<<"Enter ID to search by: ";
            cin>>id;

            for (int i = 0; i <= arraySize; i++) {
                if (employeeID[i] == id) {
                    infoRetrieval(i);
                    break;

                }
            }

        } else if (searchOption == 3) {

            string designation;
            cout<<"Enter Designation to search: ";
            cin>>designation;
            for (int i = 0; i <= arraySize; i++) {
                if (employeeDesignation[i] == designation) {
                    infoRetrieval(i);
                    break;

                }
            }

            } else if (searchOption == 4) {

            int salary;
            cout<<"Enter salary to search for: ";
            cin>>salary;
            for (int i = 0; i <= arraySize; i++) {
                if (employeeSalary[i] == salary) {
                    infoRetrieval(i);

                }
            }

        }  else if (searchOption == 5) {
            string ph;
            cout<<"Enter phone number to search by: ";
            cin>>ph;
            for (int i = 0; i <= arraySize; i++) {
                if (employeePhone[i] == ph) {
                    infoRetrieval(i);
                    break;

                }
            }
        
        }
    } else if (firstOption == 2) {

        cout<<"Name: ";
        cin>>employeeName[index];
        cout<<"ID: ";
        cin>>employeeID[index];
        cout<<"Designation: ";
        cin>>employeeDesignation[index];
        cout<<"Salary: ";
        cin>>employeeSalary[index];
        cout<<"Phone Number: ";
        cin>>employeePhone[index];
        index++;
        cout<<"Employeee added successfully"<<endl;
        cout<<"\nEnter 1 to go back to main menu. 2 to close the program."<<endl;
        cin>>continueOrBreak;
        system("clear");
        if (continueOrBreak == 2) {
            cout<<"Thanks for using the program."<<endl;
        }


    }
     } while (continueOrBreak == 1);
    
}


void infoRetrieval(int indx) {
    cout<<"Name: "<<employeeName[indx]<<endl;
    cout<<"ID: "<<employeeID[indx]<<endl;
    cout<<"Designation: "<<employeeDesignation[indx]<<endl;
    cout<<"Salary: "<<employeeSalary[indx]<<endl;
    cout<<"Phone Number: "<<employeePhone[indx]<<endl;
}
