#include <iostream>
#include "TeamLeader.h"

using namespace std;

void printTeamLeader(TeamLeader *);

int main() {
  
  const double HRS = 5.0; // need 5 hours of training per year to retain bonus
  const double PAY_RATE = 10.0; // ten currency units per hour for employees
  const double BONUS_AMT = 15.0; // fifteen currency units per month for bunus
  
  // this team leader is on day shift, has the standard pay rate, bonus ammout, and training requirements. He has completed no training.
  TeamLeader *myEmp = new TeamLeader("Wesley Ellis", "80561", "06/01/2009", 1, PAY_RATE, BONUS_AMT, HRS, 0.0);
       
  // show the team leader       
  printTeamLeader(myEmp);
  
  // train the team leader 7.5 hours
  cout << "\nTraining the team leader for 7.5 hours.\n\n";
  myEmp->train(7.5);
  
  // show the team leader
  printTeamLeader(myEmp);
}

void printTeamLeader(TeamLeader *myEmp){
  cout << "Employee information\n"
       << "---------------------\n";
  cout << "Name: " << myEmp->getName() << endl
       << "Id Number: " << myEmp->getNumber() << endl
       << "Hire Date: " << myEmp->getHireDate() << endl
       << "Shift Id: " << myEmp->getShift() << endl
       << "PayRate: " << myEmp->getPayRate() << endl
       << "Training Completed: " << myEmp->getHoursTrained() << endl
       << "Training Required: " << myEmp->getHoursRequired() << endl
       << "Potential Bonus: " << myEmp->getBonus() << endl
       << "Actual Bonus: " << myEmp->getBonusPay() << endl;
}
