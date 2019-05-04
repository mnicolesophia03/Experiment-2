#include <iostream>
#include <conio.h>

using namespace std;
int main ()
{
	int r, c;

	cout << "How many rows: \n";
	cin >> r;
	cout << "How many columns: \n";
	cin >> c;
		
	for (int i=1; i<=r; i++)
	{
		cout << "\n *";
		for (int i=2; i<=c; i++)
		
			cout << "*";	
	}	
	
	_getch();
	return 0;
}
