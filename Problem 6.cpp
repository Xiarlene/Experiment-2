#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int num, SUM;

	while (num>0)
	{
		cout << "Enter a number: ";
		cin >> num;

		if(num>0)
		{
			SUM = num*(num+1)/2;
			cout << "The sum of all whole numbers from 1 to " << num << " is " << SUM << endl;
			continue;
		}
		else if (num<=0)
		{
			cout << "Thank you!!" << endl;
		}
		else 
		{
			cout << "You entered an invalid input" << endl;
		}
	}
	getch();
	return 0;
}
