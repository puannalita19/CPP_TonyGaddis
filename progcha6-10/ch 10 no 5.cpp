#include <iostream>
#include <string>
#include <string.h>
using namespace std;
 
string capitalizeFirst(char *);
 
 
const int LENGTH = 200; 
 
int main()
{
	char input[LENGTH];
 
	cout << "Enter a few sentences, without capitalizing the first word of each sentence.\n";
	cin.getline(input, LENGTH);
 
	cout << capitalizeFirst(input) << endl;
 
	return 0;
}
 
string capitalizeFirst(char *strPtr)
{
	for (int i = 0; i < strlen(strPtr); i++)
	{
		if(ispunct(strPtr[i]) || i == 0)
		{
			if (isalpha(strPtr[i]))
			{	
				strPtr[i] = toupper(strPtr[i]);
			}
 
			if(isspace(strPtr[i+1]))
			{
				strPtr[i+2] = toupper(strPtr[i+2]);
				i += 2;
			}
		}
	}
	return strPtr;
}
