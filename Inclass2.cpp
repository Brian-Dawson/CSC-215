#include <iostream>
#include <string>
using namespace std;

int main()
{
	float num;
	float average = 0;
	float b = 0;

	for(int i = 0; i < 5; i++)
	{
		 if(i == 0)
		 {
		 	cout << "Enter your first number" << endl;
		 	cin >> num;
		 	average = num + average;
		 	b++;
		 }
		 if(i == 1)
		 {
		 	cout << "Enter your second number" << endl;
		 	cin >> num;
		 	average = num + average;
		 	b++;
		 }
		 if(i == 2)
		 {
		 	cout << "Enter your third number" << endl;
		 	cin >> num;
		 	average = num + average;
		 	b++;
		 }
		 if(i == 3)
		 {
		 	cout << "Enter your fourth number" << endl;
		 	cin >> num;
		 	average = num + average;
		 	b++;
		 }
		 if(i == 4)
		 {
		 	cout << "Enter your fifth number" << endl;
		 	cin >> num;
		 	average = num + average;
		 	b++;
		 	
		 }
	}
	
	system("PAUSE");
	system("CLS");

	cout << "Your average is " << (average/b) << endl;

return 0;

}
