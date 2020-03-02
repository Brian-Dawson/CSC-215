#include <iostream>
using namespace std;
#include "rectangle.h"



int main() {

	Rectangle rectangle1;
	Rectangle rectangle2;
	Rectangle rectangle3;
	Rectangle rectangle4 = Rectangle(20, 20);

	cout << "Rectangle1's information:" << endl;
	cout << rectangle1;
	cout << endl;

	rectangle2.setLength(7);

	cout << "Rectangle2's information:"  << endl;
	cout << rectangle2;
	cout << endl;

	rectangle3.setWidth(10);

	cout << "Rectangle3's information:"  << endl;
	cout << rectangle3;
	cout << endl;


	return 0;
}
