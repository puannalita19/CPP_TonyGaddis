#include<iostream>
#include<string>

using namespace std;

int stringCount(string);

int main()
{
	char string[100];
	cout << "Enter string:" << endl;
	cin >> string;

	int strCount;
	strCount = stringCount(string);
	
	cout << "The number of characters in the string " << string << " is " << strCount << ".\n";

return 0;

}
int stringCount(char * str)
{
	int count = 0;

	for(count; str[count] != 0; count++)
	{
	
	}
	return count;
}
