#include <iostream>
#include <string>
#include "rectangle.h"

using namespace std;

void Rectangle::setLength (double newLength) {
	if(newLength >= 0)
	{
		length = newLength;
	}
	return;
}
void Rectangle::setWidth (double newWidth) {
	if(newWidth >= 0)
	{
		width = newWidth;
	}
	return;
}

double Rectangle::getLength() const{
	return length;

}
double Rectangle::getWidth() const{
	return width;

}
double Rectangle::getPerimeter() const{
	return ((length*2)+(width*2));

}
double Rectangle::getArea() const{
	return (length*width);

}


Rectangle::Rectangle() {
	length = 5;
	width  = 5;
}
Rectangle::Rectangle(double theLength, double theWidth)
{
	length = theLength;
	width  = theWidth;

}


   
std::ostream &operator<<(std::ostream &os, const Rectangle &c) {
	os << "length: " << c.getLength()    << endl;
	os << "width: " << c.getWidth()     << endl;
	os << "perimeter: " << c.getPerimeter() << endl;
	os << "area: " << c.getArea()      << endl;
	return os;
}





