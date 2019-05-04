#include <iostream>
#include<cmath>
#include <iomanip>
#include <conio.h>

using namespace std;

int main ()
{
	float v;
	int x, y;
	const float z = 2.5;
	
	cout << "Enter a value for x: \n";
	cin >> x;
	cout << "Enter a value for y: \n";
	cin >> y;

	switch (x)
	{
		case 1:
			if (1 < y < 5)
			v = (x*y*z);
			else if (y >= 5)
			v = (x+(y/z));
			break;
	
		case 2:
			if (y <= 5)
			v = (fabs(x-y)/z);
			else if (y > 5)
			v = (x-(sqrt(y+z)));
			break;
			
		default:
			v = x+y+z;
			break;	
	}
	cout << fixed << setprecision (2);
	cout << setw (10) << "The value of V is: " << v;
	cout << endl;
	
	
	_getch();
	return 0;
}
