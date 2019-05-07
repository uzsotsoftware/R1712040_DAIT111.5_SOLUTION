/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include<cstring>
#include "employee.h"

using namespace std;

 Employee::Employee(){
       }
 
 Employee::Employee(int eId,char* n, char* d,int sal,int hrs) {
        employeeId = eId;
        strcpy(name, n);
        strcpy(department, d);
        salary = sal;
        hours = hrs;
    }

    void Employee::GetEmployee(){
        cout<<"\n";
        cout << "Employee ID...." <<employeeId<< endl;
        cout << "Name...." <<name<< endl;
        cout << "Department...." <<department<< endl;
        cout << "Salary...." <<salary<< endl;
        cout << "Working hours...." <<hours<< endl;
    }
   //void Employee::WriteToFile(Employee employee);

void Employee::GetRecordDetails() {
    char opt;
    char ch;
    
    int eId;
    char eName[40];
    char eDepartment[25];
    int eSalary;
    int eHours;
    
    do {
        cout << "Enter Employee ID..";
        cin >> eId;
        cin.ignore();
        cout << "Enter Employee Name..";
        cin.getline(eName,40);
        cout << "Enter Department...";
        cin.getline(eDepartment, 25);
        cout << "Enter Salary...";
        cin >> eSalary;
        cout << "Enter Working Hours...";
        cin >> eHours;
        Employee employee(eId,eName,eDepartment,eSalary,eHours);
        WriteToFile(employee);
        
        cout << "Another record <y-yes n-no>" << endl;
        opt = getchar();
        cin.ignore();
        
    } while (opt != 'n');

    
}

void Employee::WriteToFile(Employee employee) {
    
    ofstream outFile("employee", ios::app | ios::binary);
    outFile.write((char*) &employee, sizeof (Employee));
    outFile.flush();

    if (outFile)
        cout << "\nRecord saved successfully" << endl;
    else
        cout << "Error saving file" << endl;

    outFile.close();

}

//void Employee::ReadFromFile(streamsize position);

void Employee::ReadRecordPosition() {
    streamsize position;
    cout << "Enter the record number to retrieve...";
    cin>>position;
    ReadFromFile(position);
}

void Employee::ReadFromFile(streamsize position) {
    Employee employee;

    ifstream inFile("employee", ios::in | ios::binary);

    inFile.seekg(sizeof (Employee)*(position - 1), ios::beg);
    inFile.read((char *) &employee, sizeof (Employee));
    employee.GetEmployee();
}