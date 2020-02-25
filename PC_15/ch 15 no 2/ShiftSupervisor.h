#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

//ShiftSupervisor will inherit from
//Employee class
class ShiftSupervisor : public Employee{
private:
    double salary;
    double yrBonus;
public:
    //default constructor
    //which calls default constructor of
    //base class
    ShiftSupervisor() : Employee()
    {
        salary = 0.0;
        yrBonus = 0.0;
    }

    //overloaded constructor, which
    //calls Employee's overloaded constructor
    ShiftSupervisor(string n, int num, int d, int m, int y,
                    double s, double b) : Employee(n, num, d, m, y)
    {
        //first check for invalid input
        if(s < 0 || b < 0){
            cout << "Salary and/or yearly bonus cannot";
            cout << " be negative numbers!\n";
            exit(EXIT_FAILURE);
        }

        //otherwise
        //set the shift supervisor members
        salary = s;
        yrBonus = b;
    }

    //getter functions
    double getSalary() const{
        return salary;
    }

    double getBonus() const{
        return yrBonus;
    }

    //setter functions
    void setSalary(double s){
        //validate input using while loop
        while(s < 0){
            cout << "Salary cannot be negative number!";
            cout << " Enter again: ";
            cin >> s;
        }
        //after validation
        salary = s;
    }

    void setBonus(double b){
        //validate input using while loop
        while(b < 0){
            cout << "Bonus cannot be negative number!";
            cout << " Enter again: ";
            cin >> b;
        }
        //after validation
        yrBonus = b;
    }
};

#endif
