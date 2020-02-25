// Programming Challenge 11.3 - Corporate Sales Data

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct CorpData
{
	string DivName;     // Division name
	double FstQtr,		// First quarter sales
	       SecQtr,		// second quarter sales
	       TrdQtr,		// Third quarter sales
	       FthQtr,		// Fourth quarter sales
	       TotAnn,		// Total annual sales
	       AvgQtrly;	// Average quarterly sales

	// constructor that allows the division name and four quarterly
	// sales amounts to be specified at the time a CorpData variable
	// is created.
	CorpData(string D, double f, double s, double t, double fr)
	{
		DivName = D;
		FstQtr = f;
		SecQtr = s;
		TrdQtr = t;
		FthQtr = fr;
	}
};

// Function Prototypes
void calcSales(CorpData &);
void displayDivInfo(CorpData);

int main()
{   // Creates four variables of the CorpData struture
	// each representing a corporate division.
	CorpData East("East", 1000, 1500, 1250, 1750);
	CorpData West("West", 2500, 2000, 2750 , 2250);
	CorpData North("North", 3750, 3500, 3250, 3000);
	CorpData South("South", 4250, 4750, 4000, 4500);

	calcSales(East);
	calcSales(West);
	calcSales(North);
	calcSales(South);

	displayDivInfo(East);
	displayDivInfo(West);
	displayDivInfo(North);
	displayDivInfo(South); 
	return 0;
}

/*************************************************************
 *                       calcSales                           *
 * This function accepts a CorpData variable as an argument. *
 * calculates and stores total sales and average quarterly   *
 * sales for that division.                                  *
 *************************************************************/
void calcSales(CorpData &D)
{
	D.TotAnn = D.FstQtr + D.SecQtr + D.TrdQtr + D.FthQtr;
	D.AvgQtrly = D.TotAnn/4;
}

/*************************************************************
 *                     displayDivInfo                        *
 * This function accepts a CorpData variable as an argument. *
 * Displays the division name, totals sales and quarterly    *
 * average.                                                  *
 *************************************************************/
void displayDivInfo(CorpData D)
{
	cout << "\n           Sales Data\n"
		 << "---------------------------------------\n";
    cout << fixed << showpoint << setprecision(2);
	cout << "Division :          " << D.DivName << endl;
	cout << "Total Sales :       $" << D.TotAnn << endl;
	cout << "Quarterly average : $" << D.AvgQtrly << endl;
}
