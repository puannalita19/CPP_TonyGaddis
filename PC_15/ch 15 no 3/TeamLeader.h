#ifndef TEAMLEADER_H
#define TEAMLEADER_H
#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker
{
  private:
    double bonus; // monthly bonus
    double hoursTrained; // training completed
    double hoursRequired; // hours required to get the monthly bonus
  public:
  // Default Constructor
  TeamLeader() : ProductionWorker()
  {
    hoursRequired = 1;
    hoursTrained = 0;
    bonus = 4.3;
  }
  // Constructor
  TeamLeader (std::string nom, std::string idNum, std::string hd, int shft, double p, double bonusAmt, double hrsNeeded, double hrsCompleted) : ProductionWorker(nom, idNum, hd, shft, p)
  {
    bonus = bonusAmt;
    hoursTrained = hrsCompleted;
    hoursRequired = hrsNeeded;
  }
  
  // Accessors
  double getBonus() { return bonus; }
  double getHoursTrained() { return hoursTrained; }
  double getHoursRequired() { return hoursRequired; }
  
  // Mutators
  void setBonus(double);
  void setHoursTrained(double);
  void setHoursRequired(double);
  
  // Bonus pay is different from bonus ammount
  double getBonusPay();
  
  // Provide a way to train a TeamLeader
  void train(double);
};

#endif

