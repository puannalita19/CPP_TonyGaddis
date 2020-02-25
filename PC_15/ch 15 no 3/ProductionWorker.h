#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"

class ProductionWorker : public Employee
{
  private:
    int shift;    // the shift the employee is assigned to
    double payRate;  // the hourly pay rate of an employee
  public:
    // Default constructor
    ProductionWorker() : Employee()
    {
      shift = 0;          
      payRate = 0.0;      
    }
    // Constructor
    ProductionWorker(std::string name, std::string id, std::string hireDate, int shiftNum, double pay) : Employee(name, id, hireDate)
    {
      shift = shiftNum;
      payRate = pay;
    }
    
    // accessors
    int getShift() { return shift; }
    double getPayRate() { return payRate; }
    
    // mutators
    void setShift(int);
    void setPayRate(double);
    
    const int DAY_SHIFT = 1;
    const int NIGHT_SHIFT = 2;
};

#endif

