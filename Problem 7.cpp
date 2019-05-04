#include <iostream>
#include <conio.h>

using namespace std;
int main ()
{
	int n, sum;
	bool stop = false;
	
	do
	{
		sum = 0;
		cout << "Enter a number: ";
		cin >> n;
	
		for (int i = 1; i <= n; ++i)
	{
		sum += i;
	}
		cout << "The sum of all whole numbers from 1 to " << n << " is " << sum << ".\n";
		if (n==0 || n <= 0)
		{
			break;
		}
	} while (!stop);	

	_getch();
	return 0;
}
