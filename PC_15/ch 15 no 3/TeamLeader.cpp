#include "TeamLeader.h"

void TeamLeader::setBonus(double b)
{
  // only set the bonus ammount if it is greater than 0
  if (b >= 0)
  {
    bonus = b;
  }
}

void TeamLeader::setHoursTrained(double hrs)
{
  // only train hours in the positive direction
  if (hrs > 0)
  {
    hoursTrained = hrs;
  }
}

void TeamLeader::setHoursRequired(double hrs)
{
  // only set hours required to a non-negative value
  if (hrs >= 0)
  {
    hoursRequired = hrs;
  }
}
  
double TeamLeader::getBonusPay()
{
  if (hoursTrained > hoursRequired)
  {
    return bonus;
  }
  else
    return 0;
}

// train the team leader for the given number of hours
void TeamLeader::train(double hrs)
{
  // only train if hrs if positive
  if (hrs > 0){
    hoursTrained += hrs;
  }  
}

