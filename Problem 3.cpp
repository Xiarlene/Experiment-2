#include<iostream>
#include<iomanip>
#include<cmath>
#include<conio.h>

using namespace std;

int main()
{
	int x, y;
	double V;
	const float z = 2.5;

	cout << "Enter value for x: ";
	cin >> x;
	cout << endl << "Enter value for y: ";
	cin >> y;

	switch(x)
	{
	case 1: 
		if (y>1 && y<5)
		{
			cout << fixed << showpoint << setw(10);
			cout << fixed << showpoint << setprecision(2);
			cout << endl << "V = xyz, V = " << x*y*z;
		}
		else (y>=5);
		{
			cout << fixed << showpoint << setw(10);
			cout << fixed << showpoint << setprecision(2);
			cout << endl << "V = x + y / z, V = " << x+y/z;
		}
		break;
	case 2:
		if (y<=5) 
		{
			cout << fixed << showpoint << setw(10);
			cout << fixed << showpoint << setprecision(2);
			cout << endl << "V = |(x-y)/z|, V = " << abs((x-y)/z);
		}
		else (y>5);
		{
			cout << fixed << showpoint << setw(10);
			cout << fixed << showpoint << setprecision(2);
			cout << endl << "V = x-sqrt(y+z), V = " << x-sqrt(y+z);
		}
		break;
	default:
		cout << fixed << showpoint << setw(10);
		cout << fixed << showpoint << setprecision(2);
		cout << "V = x+y+z, V = " << x+y+z;
	}
	getch();
	return 0;
}
