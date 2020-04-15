/*
Lyndon Saltz
Guessing Game 2
Turned in late on 3/15/2020
Description: Outputs message if user guesses too high or too low
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

	cout << "\nYour guess: " << userNum;
	cout << "\n The answer: " << compNum;
	if ( userNum > compNum ) //if statements describing how user entered number compares to computer number
	{
		cout << "\nYour guess was too high";
	}
	else if ( userNum < compNum )
	{
		cout << "\nYour guess was too low.";
	}
	else
	{
		cout << "\nYou got it!";
	}

	cout << endl;
	system( "pause" );
	return 0;
}
//problems: none