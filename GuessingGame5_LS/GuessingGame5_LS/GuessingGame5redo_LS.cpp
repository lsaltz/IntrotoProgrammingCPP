/*
Lyndon Saltz
Guessing Game 5
4/6/2020
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
	int high = 20; //high limit
	int low = 10; //low limit
	double averageScore; //average score of all games
	int gamesPlayed = 0; //total games played
	int userNum; //user entered number

	do //loops until user quits
	{
	compNum = rand( ) % (high - low + 1) + low;
	score = 5;
	cout << "Make a guess between 10 and 20: ";
	cin >> userNum;
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
/*problems: Had trouble figuring out exactly how to do the scoring system.
Then I looked back on old psuedocode on how to store previous variables and figured it out.
Needed empty else, needed comments on variables, incorrect formatting
*/