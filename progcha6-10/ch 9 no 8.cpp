#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>	
using namespace std;

int * makeArray(int);
void showArray(int *, int);
int mode(int *, int);


int main()
{
	int size;
	
	cout << "Choose the size of the array to get the mode. \t ";
	
	cin >> size;
	
	while(size < 2)
	{
		cout << endl << "At least input a size that's 2 or more. "
			 << endl << endl;
		
		cout << "Choose the size of the array to get the mode. \t ";
	
		cin >> size;
	}

	//declares a pointer to a dynamic array of random positive integers
	int * array = makeArray(size);

	cout << endl << "The array is:" << endl << endl;

	//as the name suggests, it shows the array to the user
	showArray(array, size);

	//declares and determines the mode of the array
    int mode_array = mode(array, size);

	cout << endl << endl;

	//the case where there's no mode
	if(mode_array == -1)
	{
		cout << "There is no mode from this array." << endl;

		return 0;
	}

	cout << "The mode from this array is: " << mode_array << endl;

	return 0;
}

int * makeArray(int size)
{
	//makes the seed with the given time
	srand(time(NULL));

	//creates the dynamic array of integers
	int * array = new int[size];

	//checks if such an array was created successfully
	if(!array)	return NULL;

	//loop that fills the array with the random integers
	for(int i = 0; i < size; i++)
		*(array + i) = rand()%50;

	return array;
}

//Function that displays an array to the user
void showArray(int * array, int size)
{
	for(int i = 0; i < size; i++)
		cout << *(array + i) << " ";
}

//The main objective function of this program
//Givem an array of integers, the function calculates the mode from it
int mode(int * array, int size)
{
	//creates a parallel array that will contain the amount of times
	//an integer is repeated in the array of integers
	short * amount = new short[size];

	//checks if the creation is successful
	if(!amount) return -1;

	//loop that sets all the values to 0
	for(int k = 0; k < size; k++)
		*(amount + k) = 0;

	//Loop that check if an element is repeated in the array.
	//It starts with the first element and compares to other size - 2
	//elements in the array and so on.
	for(int i = 0; i < (size - 1); i++)
	{
		for(int j = i + 1; j < size; j++)
		{
			if(*(array + i) == *(array + j))
				*(amount + i) = *(amount + i) + 1;
		}
	}


	int position = 0, max = *amount, true_mode = *array;

	//Loop that checks the maximum from the short array
	for(int s = 1; s < size; s++)
	{
		if(max < *(amount + s))
		{
			max = *(amount + s);
			true_mode = *(array + s);
			position = s;
		}
	}

	//got to free some memory
	delete [] amount;
	delete [] array;

	//the case where there is no mode
	if(max == 0) return -1;

	return true_mode;
}


