
#include <iostream>
using namespace std; 

int main(){
	 
int const SMALL_LIST_SIZE = 10;
int const LARGE_LIST_SIZE = 20;

int list1       [SMALL_LIST_SIZE] = {5,2,8,4,6,2,90,12,1,50};
int list2       [SMALL_LIST_SIZE] = {85,34,1,6,23,7,8,12,4,0};
int x = 0;
int y = 0;
int sortedList [LARGE_LIST_SIZE];

for(int i = 0; i < 10; i++)
{
	x = list1[i];
	sortedList[i] = x;
}
for(int j = 0; j < 10; j++)
{
	y = list2[j];
	sortedList[j+10] = y;
}
int min;
int temp;
for(int a = 0; a < 19; a++)
{
	min = a;
	for(int j = a + 1; j < 20; j++)
	{
		if(sortedList[j] < sortedList[min])
		{
			min = j;
		}

	}
	if(min != a)
	{
		temp = sortedList[a];
		sortedList[a] = sortedList[min];
		sortedList[min] = temp;
	}

} 
for(int z = 0; z < 20; z++)
{
	cout << sortedList[z] << endl;
}

}

