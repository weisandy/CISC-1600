#include <iostream>
#include <string>
using namespace std;

int addition (int a, int b)
{
	int add;
	add = a + b;
	return add;
}

int subtraction (int a, int b)
{
	int sub;
	sub = a - b;
	return sub;
}

int factorial (int a)
{
	int factor = 1;
	while ( a > 1)
	{
		factor *= a;
		a = a - 1;
	}
	return factor; 
}

int main()
{
	int x = 0;
	int y = 0;
	cout << "Please input value for x: ";
	cin >> x;
	cout << "And input value for y: ";
	cin >> y;

	int operation = 1;
	while (operation != 0)
	{
		cout << "Choose one of followings: " << endl
		     << "1) print x+y" << endl
		     << "2) print x-y" << endl
		     << "3) print x!" << endl
		     << "4) print y!" << endl
		     << "0) exit program" << endl
		     << "Please make your choice: ";
		cin  >> operation;
		
		int output;
		if (operation == 1)
		{
			output = addition(x, y);
		}
		else if (operation == 2)
		{
			output = subtraction(x, y);
		}
		else if (operation == 3)
		{
			output = factorial(x);
		}
		else if (operation == 4)
		{
			output = factorial(y);
		}
		else 
		{
			break;
		}
		cout << output << endl;
	}
	return 0;	
}
