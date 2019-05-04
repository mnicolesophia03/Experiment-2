#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	float cost, meter, usecharge;
	int waterdemand, latecharge, gallonsused, lastmonth;
	
	waterdemand = 35;
	usecharge = 1.10;
	latecharge = 20;
	
	cout << "Enter unpaid balance from the previous month: \n";
	cin >> lastmonth;
	
	cout << "\nEnter how many gallons you used: \n";
	cin >> gallonsused;
	
	if (lastmonth > 0)
	{
		cout << "\nYour total amount due is: " << waterdemand + (usecharge * gallonsused) + lastmonth + latecharge << endl;
	}
	else
		cout << "\nYour total amount due is: " << waterdemand + (usecharge * gallonsused) << endl;
	
	
	_getch();
	return 0;
}
