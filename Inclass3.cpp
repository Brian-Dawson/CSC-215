#include <iostream>
#include <string>
using namespace std;

int main()
{
	int x = 20;
	
	for(int rows = 1; rows <= x; rows++)
	{
		for(int columns = 1; columns <= x; columns++)
		{
			if(rows==columns || columns==(x+1)-rows) cout << "X";
			else cout << " ";
		}
		cout << endl;
	}
	return 0;
}