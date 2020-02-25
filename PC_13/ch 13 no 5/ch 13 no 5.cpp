// Programming Challenge 13.5 - RetailItem

#include "retailitem.hpp"
#include <iostream>
#include <iomanip>
using std::cout;
using std::setw;
using std::setprecision;
using std::fixed;
using std::left;

int main() {
    // initialize all members
    RetailItem item1 ("Jacket", 12, 59.95);

    // default constructor, initialize all members manually
    RetailItem item2;
    item2.description("Designer Jeans");
    item2.unitsOnHand(40);
    item2.price(34.95);

    // initialize all, but correct the price now and correct the inventory
    //   and description while printing out their values.
    RetailItem item3 = RetailItem("Shurt", 1, 99.99); // wrong
    item3.price(24.95);


    cout << fixed << setprecision(2);

    // print all data. Note that the member accessors are the same overloaded
    // method as the member mutators. Simple and easy to remember.
    cout << left << setw(12) << " "
         << left << setw(22) << "Description"
         << left << setw(16) << "Units on Hand"
         << left << setw(9) << "Price"
         << '\n';
    cout << "-----------------------------------------------------------\n";
    cout << left << setw(12) << "Item #1"
         << left << setw(22) << item1.description()
         << left << setw(16) << item1.unitsOnHand()
         << left << setw(9) << item1.price()
         << '\n';
    cout << left << setw(12) << "Item #2"
         << left << setw(22) << item2.description()
         << left << setw(16) << item2.unitsOnHand()
         << left << setw(9) << item2.price()
         << '\n';
    cout << left << setw(12) << "Item #3"
         << left << setw(22) << item3.description("Shirt") // correct
         << left << setw(16) << item3.unitsOnHand(20)      // correct
         << left << setw(9) << item3.price()
         << '\n';

    // dynamically created items.
    // each member attribute comes from a new anonymous instance
    cout << left << setw(12) << "Anonymous"
         << left << setw(22) << (new RetailItem())->description("Just In Time")
         << left << setw(16) << (new RetailItem())->unitsOnHand()
         << left << setw(9) << (new RetailItem())->price(3.50)
         << '\n';

    return 0;
}
