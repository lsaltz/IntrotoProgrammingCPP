/*
Lyndon Saltz
Guessing Game 3
3/16/2020
Description: Outputs message if user guesses too high or too low, and loops program until user guesses correctly
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main( )
{
	srand( time( 0 ) );

	int low = 10; //low number
	int high = 20; //high number
	int compNum; //computer generated number
	int userNum; //user entered number

	compNum = rand( ) % (high - low + 1) + low;

	cout << "\nEnter your number between 10 and 20: ";
	cin >> userNum;
	while ( userNum != compNum ) //loops until user gets answer correct
	{
		cout << "\nYour guess: " << userNum;
		if ( userNum > compNum ) //if statements describing how user entered number compares to computer number
		{
			cout << "\nYour guess was too high";
		}
		else
		{
			cout << "\nYour guess was too low.";
		}

		cout << "\nEnter your number between 10 and 20: ";
		cin >> userNum;
	}
	
	cout << "\nYour guess: " << userNum;
	cout << "\nYou got it!";
	cout << "\n The answer: " << compNum;

	cout << endl;
	system( "pause" );
	return 0;
}
//problems: ran into an infinite loop