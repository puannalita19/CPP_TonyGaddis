#include <iostream>
#include <iomanip>
#include "Essay.h"
#include "GradedActivity.cpp"

using namespace std;

int main()
{
    //create default Essay object object
    cout << "Now creating default Essay object...\n";
    Essay ess;
    cout << "Done!\n";

    //display current points
    cout << "\nNow displaying score...\n";
    cout << "Score: " << ess.getScore();
    cout << "\nDone!\n";

    //now set points using user input
    int points;
    cout << "\nNow setting points for each category...";
    cout << "\nEnter grammar points: ";
    cin >> points;
    ess.setGrammar(points);

    cout << "\nEnter spelling points: ";
    cin >> points;
    ess.setSpelling(points);

    cout << "\nEnter correct length points: ";
    cin >> points;
    ess.setLength(points);

    cout << "\nEnter content points: ";
    cin >> points;
    ess.setContent(points);
    cout << "Done!\n";

    //display score again
    cout << "\nNow displaying score again...\n";
    cout << "Score: " << ess.getScore();
    cout << "\nDone!\n";

    //now display letter grade
    cout << "Letter grade: " << ess.getLetterGrade() << endl;

    //return 0 to mark successful termination
    return 0;
}
