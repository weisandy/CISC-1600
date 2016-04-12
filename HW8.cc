#include <iostream>
#include <string>
using namespace std;

void outputOne(string studentNames[], int studentScores[], int index)
{
	cout << "Student #" << index << ": name-" << studentNames[index] << " Score-"
	     << studentScores[index] << endl;	
}

void outputAll(string studentNames[], int studentScores[], int arraySize)
{
	for(int i; i < arraySize; i++)
	{
		outputOne(studentNames, studentScores, i);
	}
}

void revalue(string studentNames[], int studentScores[], int& newvalue, int index)
{
	studentScores[index] = newvalue;
	outputOne(studentNames, studentScores, index);
}

int getAverage(int studentScores[],int arraySize)
{
	int sum = 0;
	for(int i; i < arraySize; i++)
	{
		sum += studentScores[i];
	}
	
	int avg = sum / arraySize;
	return avg;
}

int main()
{
	string name[5] = {"Andrew", "Ben", "Cathie", "Denny", "Eli"};
	int score[5] = {60, 70, 80, 90, 100};
	int operation, index;
	bool running = true;

	do{
		cout << "==Menu==" << endl;
		cout << "1 - Output single student's name and score" << endl;
		cout << "2 - Output all students' name and score" << endl;
		cout << "3 - Output average score" << endl;
		cout << "4 - Replace score for a given student index" << endl;
		cout << "Anything else - exit program" << endl;
		cout << "Please input menu item: ";
		cin >> operation;
		
		switch(operation)
		{
			case 1:
				cout << "Please input student #: ";
				cin >> index;
				if(index >= 0 && index < 5)
				{
					outputOne(name, score, index);
				}
				else
				{
					cout << "Invalid index!" << endl;
				}
				break;
			case 2:	
				outputAll(name, score, 5);
				break;
			case 3: 
				cout << "Average score = " << getAverage(score, 5) << endl;
				break;
			case 4: 
				cout << "Please input student #: ";
				cin >> index;
				if(index >= 0 && index < 5)
				{
					int newvalue;
					cout << "Please input new score: ";
					cin >> newvalue;
					revalue(name, score, newvalue, index);
				}
				else
				{
					cout << "Invalid index!" << endl;
				}
				break;
			default:
				running = false;
				break;			
		}	
	}while(running);
		
	return 0;	
}
