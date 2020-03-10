/*
Lyndon Saltz
Title: If Statement and Random Number Check Sheet
Due Date: 2/9/20
Description: Learn how to use if statement and random generator
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	
	int low = 1; //low number
	int high = 10; //high number
	int comp; //computer generated number
	int us; //user entered number

	comp = rand() % (high - low + 1) + low; //computer generated random formula
	cout << "Computer generated number is: " << comp;

	cout << "\nEnter your number between 1 and 10: ";
	cin >> us;

	if (us <= high && us >= low) //if number is within range
	{
		cout << "Range is good";
	}
	else
	{
		cout << "\nWrong. Re-enter your number between 1 and 10: ";
		cin >> us;
	}

	cout << "\nComputer number: " << comp;
	cout << "\nYour number: " << us;

	cout << endl;
	system("pause");
	return 0;
}
//problems: forgot to initialze high and low