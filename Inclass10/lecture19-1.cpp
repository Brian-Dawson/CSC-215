/************************************************************
* Name      : Prof. Domen			
* Class     : CSC 215-01
* When      : Spring 2018
* Professor : Domen
* 
* Assignment: Object Oriented Programming
*
* To compile this, you need also need circle.h and circle.cpp
* 
* g++ lecture19.cpp circle.cpp -o lecture19.exe
*
* In this example, "Circle" is the class.  circle1, circle2
* and circle3 are objects.
*************************************************************/
#include <iostream> 
using namespace std;
#include "circle.h"  // Include the definition for our Circle class

int main() {
	// Define three different circle's using our new Circle class
	// Each one uses a different one of the constructors we wrote.
	Circle circle1; 
	Circle circle2 = Circle(5);
	Circle circle3 = Circle(6,"red");
	Circle circle4;
	Circle circle5;
	Circle circle6;
	Circle circle7;
	
	// Display the information about each circle
	// When you call the print() method, the code that was
	// written in the circle.cpp file for the print() 
	// method is executed.
	cout << "Circle1's infomation:"  << endl;
	cout << circle1;
	cout << endl;
 
	cout << "Circle2's infomation:"  << endl;
	cout << circle2;
    cout << endl;

	circle3.setRadius(-2);
	
	cout << "Circle3's infomation:"  << endl;
	cout << circle3;
	cout << endl;
	
	circle4 = circle2 + circle3;
	cout << "Circle4's infomation:"  << endl;
	cout << circle4;
	cout << endl;
	
	circle4 = circle4 + 5;
	cout << "Circle4's new infomation:"  << endl;
	cout << circle4;
	cout << endl;

	cout << "Circle5's infomation:" << endl;
	cout << circle5;
	cout << endl;

	circle6.setDiameter(14);

	cout << "Circle6's information:" << endl;
	cout << circle6;
	cout << endl;

	circle7 = circle4 + 5.7;
	cout << "Circle7's information:" << endl;
	cout << circle7;
	cout << endl;
	
	
   return 0;
   
} // end of main()