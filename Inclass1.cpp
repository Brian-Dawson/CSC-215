#include <iostream>
#include <string>
using namespace std;

int main()
{
	float num1;
	float num2;
	float num3;
	float num4;
	float num5;
	float average;

	cout << "Enter your first number" << endl;
		cin >> num1;
	cout << "Enter your second number" << endl;
		cin >> num2;
	cout << "Enter your third number" << endl;
		cin >> num3;
	cout << "Enter your fourth number" << endl;
		cin >> num4;
	cout << "Enter your fifth number" << endl;
		cin >> num5;

	average = ((num1 + num2 + num3 + num4 + num5)/5);

	system("PAUSE");
	system("CLS");

	cout << "Your average is " << average << endl;

return 0;

}
