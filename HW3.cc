#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cout << "Please enter your name: ";
	getline (cin, name);

	int a = 0;
	cout << "Please input an integer: ";
	cin >> a;
	
	double b = 0;
	cout << "Please input an decimal: ";
	cin >> b;

	cout << "Hi " << name
  	     << ", I've calculated that " 
             << a << "+" << b << " is " << a + b
	     << ", and " << a << "-" << b << " is " << a - b << endl;
	
	return 0;
}
