#include <string>
using namespace std;

class Rectangle {

	private:

		double length;
		double width;

	public:

		Rectangle();
		Rectangle(double theLength, double theWidth);

		void setLength (double newLength);
		void setWidth   (double newWidth);

		double getLength 	()const;
		double getWidth  	()const;
		double getPerimeter ()const;
		double getArea		()const;

		

};
std::ostream &operator<<(std::ostream &os, const Rectangle &a);