#include <iostream>
#include <string>
using namespace std;

int main()
{
	string studentName [5] = {"Andrew", "Ben", "Carrie","Denny", "Eliot"};
	int studentScore [5] = {50, 80, 100, 70, 2};
	
	string input;
	cout << "Input Student Name: ";
	cin >> input;
	
	bool searchFound = false;
	for(int i=0; i < 5; i++)
	{
		if(studentName[i] == input)
		{
			cout << studentScore [i] << endl;
			searchFound = true;
		}
	}
	if(!searchFound) 
	{
		cout << "No match for stduent name" << endl;
	}
	return 0;
}

