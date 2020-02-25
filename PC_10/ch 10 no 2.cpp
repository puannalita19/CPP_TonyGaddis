#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;


void Backward (char *);

int main()
{
     
char word[41];

cout << "This program will display the letters of a word entered in backwards order"
       "follwed by a period." << endl;
cout << "Please enter a word not over 40 letters:" << endl;

// display word entered backwards
cin >> word;

cout << "The entered word displayed in reverse is: " << word << endl;

Backward(word);

cout << endl;

       system("Pause");
       return 0;
}

void Backward (char *sentencePtr)
{

       char *p = sentencePtr;
       while ( *p != '\0' )

             ++p;

       while ( p != sentencePtr )

             cout.put ( *--p );
      

}
