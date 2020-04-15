/*
Lyndon Saltz
Guessing Game 4
4/3/2020
Description: Player is scored based off of how many tries they get
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
	int score = 5; //score assigned to user based off of number of tries

	compNum = rand( ) % (high - low + 1) + low;

	cout << "\nEnter your number between 10 and 20: ";
	cin >> userNum;

	while ( userNum != compNum ) //loops until user gets answer correct
	{
		cout << "\nYour guess: " << userNum;
		if ( userNum > compNum ) //if statements describing how ser entered number compares to computer number
		{
			cout << "\nYour guess was too high";
		}
		else
		{
			cout << "\nYour guess was too low.";
		}
		
		cout << "\nEnter your number between 10 and 20: ";
		cin >> userNum;
		
		score--;

		if (score <= 0)
		{
			score = 0;
		}
	}

	cout << "\nYour guess: " << userNum;
	cout << "\nYou got it!";
	cout << "\nThe answer: " << compNum;
	cout << "\nScore: " << score;

	cout << endl;
	system( "pause" );
	return 0;
}
//problems: tried a for loop to regulate the score-- did NOT work out-- would count down to zero from five while inside the while loop