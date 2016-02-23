#include <iostream>
using namespace std;

int main()
{
	cout << "Let's guess a number: ";	
	int Guessnumber;
	cin >> Guessnumber;
 
	int number = 5;
	
	while (Guessnumber != number)
	{
		if (Guessnumber > number)
		{
			cout << "Oops, too large! Guess again: ";
			cin >> Guessnumber;
		}
		else
		{
			cout << "Oops. too small! Guess again: ";
			cin >> Guessnumber;
		} 
	}
	
	cout << "Bingo! The number you guessed is correct.\n";	
}
