#include <iostream>
#include <iomanip>
#include "ShiftSupervisor.h"

using namespace std;

int main()
{
    //create default ProductionWorker object
    cout << "Creating default ShiftSupervisor object...\n";
    ShiftSupervisor super;
    cout << "Done! All data set to default values!\n\n";

    //format output
    cout << fixed << setprecision(2);

    //display data
    cout << "Now displaying data...\n";
    cout << "Name: " << super.getName() << endl;
    cout << "Employee Number: " << super.getNumber() << endl;
    cout << "Hire Date: " << super.getHireDate() << endl;
    cout << "Salary: $" << super.getSalary() << endl;
    cout << "Yearly bonus: $" << super.getBonus() << endl;

    //now set the various data
    cout << "\nNow setting name to Jane Smith...\n";
    super.setName("Jane Smith");
    cout << "Done!\n";

    cout << "\nNow setting employee number to 3333...\n";
    super.setNumber(3333);
    cout << "Done!\n";

    cout << "\nNow setting hire date to 12/10/2015...\n";
    super.setHireDate(12, 10, 2015);
    cout << "Done!\n";

    cout << "\nNow setting salary to $2000.00 ...\n";
    super.setSalary(2000.00);
    cout << "Done!\n";

    cout << "\nNow setting bonus to $1000.00 ...\n";
    super.setBonus(1000.00);
    cout << "Done!\n";

    //display new values
    cout << "\nNow displaying data again...\n";
    cout << "Name: " << super.getName() << endl;
    cout << "Employee Number: " << super.getNumber() << endl;
    cout << "Hire Date: " << super.getHireDate() << endl;
    cout << "Salary: $" << super.getSalary() << endl;
    cout << "Yearly bonus: $" << super.getBonus() << endl;

    //return 0 to mark successful termination
    return 0;
}
