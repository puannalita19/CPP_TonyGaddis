#ifndef MILTIME_H_
#define MILTIME_H_

#include <iostream>
#include "Time.h"
using namespace std;

class MilTime : public Time
{
protected:
    int milHours; //eg 1630 for 4:30pm
    int milSeconds;
public:
    MilTime() : Time()
        { milHours = 0; milSeconds = 0; }
    MilTime(int mh, int ms) : Time()
        {setTime(mh, ms);}

    void setTime(int mh, int  ms)
    {
        if(!milHoursValid(mh) ||  !secondsValid(ms))
            cout << "Error: invalid Input";
        else {
            milHours = mh;
            milSeconds = ms;
            sec = milSeconds;
            min = milHours % 100;
            hour = (milHours > 1259) ? (milHours - 1200) / 100 : milHours / 100;
        }
    }

    virtual bool milHoursValid(int hrs)
        { return (hrs <= 2359 && hrs >= 0 ); }
    virtual bool secondsValid(int sec)
        { return (sec <= 59 && sec >= 0); }
    virtual int getHour() const { return milHours; }
    int getStandHr()const {return hour;}

};
#endif /* MILTIME_H_ */

