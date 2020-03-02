/*******************************************************
* Name      : Prof. Domen			
* Class     : CSC 215-01
* When      : Spring 2018
* Professor : Domen
* 
* Assignment: Object Oriented Programming
********************************************************/
#include <string> 
using namespace std;
/****************************************************************
* Circle Class
*
* This file defines all the data and methods in the Circle class 
*****************************************************************/
class Circle {
	/*************************************************************
	* Private data that can only be accessed via public functions
	**************************************************************/
	private:
		double radius;
		string color;
		double pi;
		
	/***********************************
	* Public methods that can be called
	************************************/
	public:
		// Constructor method.  Note the lack of a return data type.
		// Also note the method is overloaded with different input parameters.
		Circle ();
		Circle (double theRadius);
		Circle (double theRadius, string theColor);
		
		// Methods that set data
		void   setRadius (double newRadius);
		void   setColor  (string newColor);
		void   setDiameter	(double newDiameter);
		
		// Methods that return data.
		// The 'const' keyword means the method cannot change data.
		//void   print           () const;
		string getColor        () const;
		double getRadius       () const;
		double getCircumference() const;
		double getDiameter     () const;
		double getArea         () const;

		// Operators to be used with Circle objects
		Circle operator+(Circle op2);
		Circle operator+(int    op2);
		Circle operator+(double op3);
		
		

}; // end of the Circle class

/**********************************************************
* The << operator used along with cout is defined a bit
* differently.  It is defined outside the class definiton.
***********************************************************/
std::ostream &operator<<(std::ostream &os, const Circle &a);