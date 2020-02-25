#include <iostream>
using namespace std;

// Function prototypes
void getValue(int&);
int linearSearch(int[], int, int, int&);
int binarySearch(int[], int, int, int&);

int main()
{
	const int SIZE = 20;
	int Array[SIZE] = { 1,  2,  3,  4,  5,  6,  7,  8,  9, 10,
					   15, 20, 30, 40, 50, 60, 70, 80, 90, 100};

	int LinBMark = 0,
		BinBMark = 0,
		value,
		LinResults,
		BinResults;


	getValue(value);

	LinResults = linearSearch(Array, SIZE, value, LinBMark);
	
	BinResults = binarySearch(Array, SIZE, value, BinBMark);

	cout << "Number of comparisons made before finding the value: "
		 << value << endl;
	cout << "The linear Search algorithm: " << LinBMark
		 << endl;
	cout << "The binary Search algorithm: " << BinBMark
		 << endl;

	return 0;
}

/******************************************************************************
 *                                getValue                                    *
 ******************************************************************************/
void getValue(int &value)
{
	cout << "Enter the value to search for: ";
	cin  >> value;
}


int linearSearch(int list[], int size, int value, int &LinBMark)
{
	int index = 0;			// Used as a subscript to search array
	int position = -1;		// Used to record the position of search value
	bool found = false;     // Flag to indicate if the value was found

	while(index < size && !found)
	{
		if (list[index] == value)	// If the value is found
		{
			found = true;			// Set the flag
			position = index;		// Record the value's subscript
		}
		index++;

		if (position == -1)
			LinBMark++;
	}
	return position;				// Return the position, or -1
}

/****************************************************************************** 
 *                                BinarySearch                                *
 ******************************************************************************/
int binarySearch(int array[], int size, int value, int &BinBMark)
{
	int first = 0,							
		last = size - 1,					
		middle,								
		position = -1;						
	bool found = false;						

	while (!found && first <= last)
	{
		middle = (first + last) / 2;		// Calculate midpoint
		if (array[middle] == value)			// If value is found
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > value)		// If value is in the lower half
			last = middle - 1;
		else
			first = middle + 1;				
		if (position == -1)
			BinBMark++;
	}
	return position;
}
