#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee {
  protected:
    std::string name;
    std::string number;
    std::string hireDate;
    // function to validate date
    // this doesn't really belong here, but
    // i didn't want to create a whole other class for dates
    bool isValidDate(std::string);
  public:
    // Default Constructor
    Employee()
      { name = ""; number = ""; hireDate = ""; }
    // Constructor
    Employee(std::string n, std::string num, std::string dt)
      { name = n;
        number = num;
        hireDate = dt;
      }
      
    // Accessor Functions
    std::string getName() { return name; }
    std::string getNumber() { return number; }
    std::string getHireDate() { return hireDate; }
    
    // Mutator Prototypes
    void setName(std::string);
    void setNumber(std::string);
    void setHireDate(std::string);
};


#endif
