    /*
    *  UCF COP3330 Fall 2021 Assignment 5 Solution
    *  Copyright 2021 Faiz Ahmed
    */
#include <iostream>
#include <math.h>
#include "std_lib_facilities.h"
using namespace std;

double ctok(double c) // converts Celsius to Kelvin
{
 double k = c + 273.15;
 if(k < -273.15)
 {
     cout<<"Error temp less than –273.15";
 }
 return k;
}

int main()
{
 double c = 0; // declare input variable
 cout << "enter input temp in Celsius to convert to Kelvin: ";
 cin >> c; // retrieve temperature to input variable
 double k = ctok(c); // convert temperature
 cout << k << "\n" ; // print out temperature
}