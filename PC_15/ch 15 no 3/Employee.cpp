#include "Employee.h"

// Mutator Functions
void Employee::setName(std::string nom) 
{ 
  // only change the name if the new name is not empty
  // and it is different from the old name
  if (nom != "" && nom != name)
  {
    name = nom;   
  }
}

void Employee::setNumber(std::string n) 
{ 
  // only change the employee id number if the new number
  // is not blank and it is different from the old number
  if (n != "" && n!=number)
  {
    number = n;   
  }
}

void Employee::setHireDate(std::string d) 
{ 
  // only change the date if it is a valid date
  // and it is different from the old hireDate
  if (isValidDate(d) && d != hireDate)
  {
    hireDate = d;   
  }
}

// stub for a function that would validate a date string
bool Employee::isValidDate(std::string d) {
  return true;
}

