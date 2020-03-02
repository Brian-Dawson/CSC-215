#include <iostream>
#include <string>

using namespace std;

int main()
{
		string y;
		string x = "peter piper picked a peck of pickled peppers";
		int z;
		int a;
	
		do{
			z = x.find("pi");
			a = x.find(" ",z);
			y =	x.substr(z , (a-z));
				cout << y << endl;
				y = x.erase(0,(z+1));



		}
		while(x.find("pi") != string::npos);


	return 0;

}