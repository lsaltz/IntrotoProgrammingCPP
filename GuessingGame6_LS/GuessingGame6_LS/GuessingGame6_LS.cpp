/*
Lyndon Saltz
Guessing Game 6
4/8/2020
Description: Player plays the game a few times and it keeps track of their points
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main( )
{
	srand( time( 0 ) );

	int compNum; //computer generated number
	char quitVal; //value entered to quit game
	int score; //score per game
	int totalScore = 0; //total score of all games
	int high; //high limit
	int low; //low limit
	double averageScore; //average score of all games
	int gamesPlayed = 0; //total games played
	int userNum; //user entered number

	cout << "Set a low range\n";
	cin >> low;
	cout << "Set a high range\n";
	cin >> high;
	while ( high <= low ) //if input is invalid, loops back
	{
		cin.clear( );
		cin.ignore( );
		cout << "Invalid" << endl;
		cout << "Set a low range\n";
		cin >> low;
		cout << "Set a high range\n";
		cin >> high;
	}
	
	do //loops until user quits
	{
		compNum = rand( ) % (high - low + 1) + low;
		score = 5;
		cout << "Make a guess between " << low << " and " << high << endl;
		cin >> userNum;
		while ( ( userNum < low ) || ( userNum > high ) ) //if input is invalid, loops back to ask again
		{
			cin.clear( );
			cin.ignore( );
			cout << "Invalid" << endl;
			cout << "Make a guess between " << low << " and " << high << endl;
			cin >> userNum;
		}
		cout << "\nYou guessed: " << userNum;

		while ( userNum != compNum ) //loops game while guess is incorrect
		{
			if ( userNum > compNum )
			{
				cout << "\nToo high, try again.";
				cout << "\nMake a guess between 10 and 20: ";
				cin >> userNum;
				cout << "\nYou guessed: " << userNum;
			}
			else
			{
				cout << "\nToo low, try again.";
				cout << "\nMake a guess between 10 and 20: ";
				cin >> userNum;
				cout << "You guessed: " << userNum;
			}
			score--;

			if ( score < 0 )
			{
				score = 0;
			}
			else { ; }
		}
		gamesPlayed++;
		cout << "\nScore for this game: " << score;
		totalScore = score + totalScore; //calculating total score by adding up previous scores
		averageScore = (double)totalScore / (double)gamesPlayed; //casting ints to doubles to get an accurate score
		cout << "\nPress q to quit. Otherwise, press any other letter. ";
		cin >> quitVal;
	} while ( quitVal != 'q' );

	cout << "\nTotal score is: " << totalScore;
	cout << "\nYou played " << gamesPlayed << " games.";
	cout << "\nAverage points per game: " << averageScore;
}

/*problems: recieved error of cout/cin ambiguous. Turns out I forgot to put () after clear and ignore
Fixed: allows for re-entry of BOTH low and high range now
*/