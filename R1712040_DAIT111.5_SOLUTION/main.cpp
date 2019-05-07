/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: R1712040
 *
 * Created on April 25, 2019, 10:14 AM
 */


#include <iostream>
#include <fstream>
#include <cstdlib>
#include<cstring>
#include "employee.h"

using namespace std;


int main() {
    Employee e;
    e.GetRecordDetails();
    e.ReadRecordPosition();
}