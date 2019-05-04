#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main ()
{
	float hours, pricea, priceb, pricec, totala, totalb, totalc;
	char package;
	
	cout << "Which package did you purchase? \n";
	cin >> package;
	
	if (package == 'A' || package == 'a' || package == 'B' || package == 'b'|| package == 'C' || package == 'c')
	{
		
		cout << "\nHow many hours were used? \n";
		cin >> hours;
		
		if (hours > 744 || hours < 0)
		{
			cout << "HOURS CANNOT BE GREATER THAN 744 NOR LESS THAN 0 \n" << "Enter hours again: \n";
			cin >> hours;
		}
	
	if (package == 'A' || package == 'a')
	{
	pricea = 995;
	if (hours < 10)
	{
		totala = pricea;
	}
	else
	totala = ((hours - 10) * 20) + pricea;
	
	cout << "\nThe total amount due is Php: " << totala << endl;
	}
	
	if (package == 'B' || package == 'b')
	{
	priceb = 1495;
	if (hours < 20)
	totalb = priceb;
	else
	totalb = ((hours - 10) * 10) + priceb;
	
	cout << "\nThe total amount due is Php: " << totalb << endl;
	}
	
	{
	if (package == 'C' || package == 'c')
	{
	pricec = 1995;
	totalc = pricec;
	
	cout << "\nThe total amount due is Php: " << totalc << endl;
	}
	}
		 
	_getch();
	return 0;
	}
}
