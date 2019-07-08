#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int f, num1, num2, num;

	num1 = 0;
	num2 = 1;

	cout << "List of Fibonacci Numbers after 0 and 1: " << endl;

	for (num=0; num <= 21; num++)
	{
		if(num==0)
		{
			cout << endl << num1 << ", ";
			continue;
		}
		if(num==1)
		{
			cout << num2 << ", ";
			continue;
		}

		f = num1 + num2;
		num1 = num2;
		num2 = f;

		cout << f << ", ";

	}
	getch();
	return 0;
}
