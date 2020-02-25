#include <iostream>
using namespace std;


double getLength();
double getWidth();
double getArea( double&, double&);
void displayData( double&, double&, double& );

int main() {
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea( length, width );
   
   // Display the rectangle's data.
   displayData( length, width, area );
          
   return 0;
}

//***************************************************
// You must write the getLength, getWidth, getArea, *
// and displayData functions.                       *
//***************************************************
 
// getLength - This function should ask the user to enter the rectangle's
//             length and return that value as a double.
double getLength() {
	double length;
	cout << "Enter the rectangle's length: ";
	cin >> length;
	return length;
}

// getWidth - This function should ask the user to enter the rectangle's
//            width and return that value as a double.
double getWidth() {
	double width;
	cout << "Enter the rectangle's width: ";
	cin >> width;
	return width;
}

// getArea - This function should accept the rectangle's length and width as
//           arguments and return the rectangle's area. The area is calculated
//           by multiplying the length by the width.
double getArea( double& l, double& w ) {
	return l * w;
}

// displayData - This function should accept the rectangle's length, width, and
//               area as arguments, and display them in an appropriate message
//               on the screen.
void displayData( double& l, double& w, double& a ) {
	cout << "Length: " << l << " | Width: " << w << " | Area: " << a << '\n';
}
