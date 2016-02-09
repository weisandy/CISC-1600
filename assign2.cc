// 02/08/16 assignment #2
#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string name;
	cout << "What's your name? ";
	getline (cin, name);
	
	int age = 0;
	cout << "What's your age? ";
	cin >> age;
	
	string thing;
	cout << "What's your favorite thing? ";
	cin >> thing;
	
	cout << "Hi, " << name << ".\n"
	     << "I know your are " <<  age
	     << " years old and like " << thing << ".\n";
	
}
