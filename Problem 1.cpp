#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

int main()
{
	int package_A;
	int package_B;
	int package_C;
	int hours;
	char package;

	package_A = 995, package_B = 1495, package_C = 1995; 

	cout << "Enter which package you purchased ( A, B, C) : ";
	cin >> package;
	
	cout << endl << "How many hours was consumed: ";
	cin >> hours;

	switch(package)
	{
	case 'a':
	case 'A':
		if ( hours <= 10) 
		{
			cout << endl << "Your monthly bill is: " << package_A << endl;
		}
		else
		{
			cout << endl << "Your monthly bill is: " << package_A + hours-10*20 << endl;
		}
		break;
	case 'b':
	case 'B':
		if ( hours <= 20)
		{
			cout << endl << "Your monthly bill is: " << package_B << endl;
		}
		else
		{
			cout << endl << "Your monthly bill is: " << package_B + hours-20*10 << endl;
		}
		break;
	case 'c':
	case 'C':
		cout << endl << "Your monthly bill is: " << package_C << endl;
		break;

	default:
		cout << endl << "Package is invalid" << endl;
	}

	getch();
	return 0;
}


