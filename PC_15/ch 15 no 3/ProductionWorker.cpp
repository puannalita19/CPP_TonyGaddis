#include "ProductionWorker.h"
#include <iostream>

void ProductionWorker::setShift(int n)
{
  // only set the shift if it is valid
  if (n == ProductionWorker::DAY_SHIFT || n == ProductionWorker::NIGHT_SHIFT){
    shift = n;
  }
  else
    std::cerr << "Attempted to assigne " << n << " to a shift.";
}

void ProductionWorker::setPayRate(double p)
{
  // only set the pay rate to non-negative values
  if (p >= 0)
  {
    payRate = p;
  }
  else
    std::cerr << "Attempted to assign a negative pay rate.";
}



