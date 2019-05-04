#include <iostream>
#include <conio.h>

using namespace std;
int main ()
{
	int first = 0;
	int second = 1;
	
		cout << "Fibonnaci numbers: \n";
		
	for (int i=1; i<=21; ++i)
	{
		cout << first << ",";
		int sum = first+second;
		first = second;
		second = sum;
	}
	
	do
	{
		cout << first << " ";
	} while (first==21);
	
	_getch();
	return 0;
}
