#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee{
private:
    string name;
    int number;
    int hireDay;
    int hireMonth;
    int hireYear;
public:
    //default constructor
    Employee(){
        //by default assign empty string to name
        //and 0 to other members
        name = "";
        number = 0;
        hireDay = 0;
        hireMonth = 0;
        hireYear = 0;
    }

    //overloaded constructor
    Employee(string n, int num, int d, int m, int y){
        name = n;
        number = num;
        //check for invalid input for day, month and year
        if(d < 0 || d > 31 || m < 0 ||
           m > 12 || y < 1900 || y > 2018){
            //print error message then exit
            cout << "Error! Invalid hire date! Now terminating!\n";
            exit(EXIT_FAILURE);
           }
        else{
            //otherwise set hire date
            hireDay = d;
            hireMonth = m;
            hireYear = y;
        }
    }

    //getter functions
    string getName() const{
        return name;
    }

    int getNumber() const{
        return number;
    }

    string getHireDate() const{
        //create empty string
        string dt = "";

        //fill string with data
        dt += to_string(hireDay) + "/" +
                  to_string(hireMonth) + "/" +
                  to_string(hireYear);

        //return string
        return dt;
    }

    //setter functions
    void setName(string n){
        name = n;
    }

    void setNumber(int num){
        number = num;
    }

    void setHireDate(int d, int m, int y){
        //check for invalid input for day, month and year
        if(d < 0 || d > 31 || m < 0 ||
           m > 12 || y < 1900 || y > 2018){
            //print error message then exit
            cout << "Error! Invalid hire date! Now terminating!\n";
            exit(EXIT_FAILURE);
           }
        else{
            //otherwise set hire date
            hireDay = d;
            hireMonth = m;
            hireYear = y;
        }
    }


};

#endif
