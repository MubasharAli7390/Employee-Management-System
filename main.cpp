#include<iostream>
#include<string>
using namespace std;


int main() {
    int firstOption;
    int index = 1;
    string employeeName[100] = {"Mubashar", "Ali", "Ahmad"};
    string employeeID[100] = {"EMPLOYEE1", "EMPLOYEE2", "EMPLOYEE3"};
    string employeeDesignation[100] = {"Software Engineer", "Jr. Software Engineer", "Sr.Software Engineer"};
    int employeeSalary[100] = {50000, 35000, 80000};
    string employeePhone[100] = {"03134567890", "03000000000", "03987654321"};
    cout<<"Employee Management System"<<endl;
    cout<<"Please Select an option"<<endl;
    cout<<"1.Search Employee"<<endl;
    cout<<"2. Add Employee"<<endl;
    cin>>firstOption;
    
    switch(firstOption) {
        case 1:
        int searchOption;
        cout<<"Please Select an option"<<endl;
        cout<<"1.Search By Name"<<endl;
        cout<<"2.Search By ID"<<endl;
        cout<<"3.Search By Designation"<<endl;
        cout<<"4.Search By Salary"<<endl;
        cin>>searchOption;

        switch(searchOption) {
            case 1:
            {
            string name;
            cout<<"Enter Name of the Employee: ";
            getline(cin, name);
            cout<<name;
            break;
            };
            case 2:
            {
            string id;
            cout<<"Enter ID of the Employee: ";
            getline(cin, id);
            cout<<id;
            break;
            };
            case 3:
            {
            string designation;
            cout<<"Enter Designation to search: ";
            getline(cin, designation);
            cout<<designation;
            break;
            };
            case 4:
            {
            int salary;
            cout<<"Enter salary to search for: ";
            getline(cin, salary);
            cout<<salary;
            break;
            };
        }
        break;
        case 2:
        cout<<"Add Employee";
        break;
    }

   /* if (firstOption == 1) {
        cout<<"Search Employee";
    } else if (firstOption == 2) {
        cout<<"Add Employee";
    } */
}