#ifndef TIMECLOCK_H_
#define TIMECLOCK_H_

#include <iostream>
using namespace std;
#include "MilTime.h"

class TimeClock : public MilTime
{
private:
    int startTime, endTime; // mil format

public:
    TimeClock() : MilTime()
        {startTime = 0; endTime = 0;}
    TimeClock(int st, int et) : MilTime()
        { setStartTime(st); setEndTime(et); }

    void setStartTime (int st)
    {
        if (milHoursValid(st)) startTime = st;
        else cout << "Invalid input" << endl;
    }

    void setEndTime (int et)
    {
        if (milHoursValid(et)) endTime = et;
        else cout << "Invalid input" << endl;
    }

    int getStartTime() const {return startTime;}
    int getEndTime() const {return endTime;}


    int hrsElapsed() const
        {return (endTime - startTime)/100;}

    int minsElapsed() const
        { return (endTime - startTime)%100; }

    void timeElapsed() const
    {
        string hrWd = (hrsElapsed() != 1 ) ? " hours " : " hour ";
        string minWd = (minsElapsed() != 1) ? " minutes " : " minute ";
        if (minsElapsed() == 0) cout << "Time elapsed: " << hrsElapsed()<< hrWd << endl;
        else cout << "Time elapsed: " << hrsElapsed()<< hrWd << minsElapsed() << minWd << endl;
    }
};
#endif /* TIMECLOCK_H_ */
