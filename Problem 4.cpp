#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	float n1, n2, n3;
	
	cout << "Enter first number: ";
	cin >> n1;
	cout << "Enter second number: ";
	cin >> n2;
	cout << "Enter third number: ";
	cin >> n3;
	
	if (n1 >= n2 && n3)
	{
		cout << "\nThe LARGEST of the three numbers is: " << n1;
	}
	
	else if (n2 >= n1 && n3)
	{
		cout << "\nThe LARGEST of the three numbers is: " << n2;
	}
	
	else if (n3 >= n1 && n2)
	{
		cout << "\nThe LARGEST of the three numbers is: " << n3;
	}
	

	_getch();
	return 0;
}
