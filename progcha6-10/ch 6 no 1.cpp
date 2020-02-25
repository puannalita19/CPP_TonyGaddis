#include<iostream> //headers
#include<iomanip>

using namespace std;
//calculatedRetail function prototype
double calculatedRetail (double cost, double markUp);

int main()
{
double retail, cost, markUp; //variables set to double data type

cout<<fixed<<showpoint<<setprecision(2); //set outformat for retail price

cout<<"Enter the wholesale cost for the item: $";
cin >>cost;
//validate the cost price
while (cost<0)
{
cout<<"Please enter a positive number. $"<<endl;
cin >>cost;
}

cout<<"Now please enter its markup percentage: ";
cin >>markUp;
//validate the markup percentage
while (markUp<0)
{
cout<<"Please enter a positive number for markup: ";
cin >>markUp;
}
//convert markup percentage to two decimal point
markUp = (markUp/100);

/*************************************************
*****Call calculatedRetail fuction to calculate***
******************retail price********************
*************************************************/

cout<<"The retail price for the item is: "<<endl;
cout<<"$ " <<calculatedRetail(cost, markUp)<<endl;

return 0;
}
double calculatedRetail (double cost, double markUp)
{
return (cost*markUp)+cost; //calculate retail price and return value to main fuction
}
