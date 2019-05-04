#include <iostream>
#include <conio.h>

using namespace std;
int main ()
{
	int counter, counter1;
	
	cout << "Counting...\n";

	counter = 1;
	do
	{
		cout << counter << ",";
		counter++;
	} while (counter<=10);
	
	counter = 12;
	do
	{
		cout << counter << ",";
		counter+=2;
	} while (counter<=28);
	
	do
	{
		cout << counter << " ";
	} while (counter==28);
	
	
	_getch();
	return 0;
}
