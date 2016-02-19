#include <iostream>
using namespace std;

int main() {
	double x = 0;
	double sum = 0;
	
	for(int i = 1; i < 4; i++)
	{
		cout << "Input " << i << ": ";
		cin >> x;
		cout << endl;
		
		sum = sum + x;
	}
	
	cout << "Sum of above numbers is: " << sum << endl;
}
