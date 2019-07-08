#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

int main()
{
	double recent_meter, previous_meter, consumption, balance;
	int demand_charge, late_charge, answer;

	cout << "Enter Previous meter reading in gallons: ";
	cin >> previous_meter;

	cout << endl << "Enter Recent meter reading in gallons: ";
	cin >> recent_meter;

	cout << endl << endl << "Your current meter reading is: " << previous_meter - recent_meter << endl;

	cout << endl << "Do you have any unpaid balance? ( 1 if yes, 2 if none): ";
	cin >> answer;

	if(answer==2)
	{
		cout << "Your water bill is: P " << 1.10+35*previous_meter - recent_meter << endl;

	} else if (answer==1)
	{
		cout << "How much is your unpaid balance: P ";
		cin >> balance;
		cout << "Your water bill is: P " << (1.10*previous_meter - recent_meter)+(20+35+balance) << endl;
	}
	else {
		cout << "DATA IS INVALID" << endl;
	}

	getch();
	return 0;

}
