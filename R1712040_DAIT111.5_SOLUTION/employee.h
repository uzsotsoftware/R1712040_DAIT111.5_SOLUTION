/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   employee.h
 * Author: R1712040
 *
 * Created on April 25, 2019, 10:36 AM
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <fstream>
#include <cstdlib>
#include<cstring>
#include "employee.h"

using namespace std;

class Employee {
    
    int employeeId;
    char name[40];
    char department[25];
    int salary;
    int hours;
    
public:

    Employee();

    Employee(int eId,char* n, char* d,int sal,int hrs);
    void GetEmployee() ;
    void WriteToFile(Employee employee);
    void GetRecordDetails();
    void ReadFromFile(streamsize position);
    void ReadRecordPosition();
};
#endif /* EMPLOYEE_H */

