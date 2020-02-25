#include <iostream>
using namespace std;

#include "TimeClock.h"

int main()
{
    TimeClock TC;
    TC.setStartTime(2200);
    TC.setEndTime(2300);
    cout << "Start time: " << TC.getStartTime() << endl;
    cout << "End time: " << TC.getEndTime() << endl;
    TC.timeElapsed();

    TimeClock TC2(900, 1330);
    cout << endl << "Start time: " << TC2.getStartTime() << endl;
    cout << "End time: " << TC2.getEndTime() << endl;
    TC2.timeElapsed();

    cout << endl << "These should generate an error: " << endl;
    TimeClock TC3(2500, 0);
    TimeClock TC4(2359, -1);

    cout << "Press Enter to quit." << endl;
    cin.ignore();
    cin.get();

    return 0;
}
