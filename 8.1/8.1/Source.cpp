#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/**********************************************************
The following program prints the votes, candidates, voting 
percentages, and results of an election between 5 candidates.
***********************************************************/

/*
 Use a loop to calculate the percentages into the percentage
array, again saving the unneeded variables. Lastly you need to format the 
output like the example with the numbers being aligned on the right. 
You can use the "right" formatting feature to do that. 
Also make the percentage only 2 decimals
*/
int main( )
{


	int i;
	double totalVotes = 0;
	const int LENGTH = 5;
	int maxVotes;
	string winner;

	cout << "Enter candidate's name and votes for said candidate: " << endl;
	string canArray[LENGTH];
	int votesArray[LENGTH];
	for ( i = 0; i < LENGTH; i++ )
	{
		cin >> canArray[i];
		cin >> votesArray[i];
		totalVotes = totalVotes + (double)votesArray[i];
	}

	double percentArray[LENGTH];		//percent of votes array
	
	for ( i = 0; i < LENGTH; i++ )
	{
		percentArray[i] = (double)votesArray[i] / totalVotes * 100;
	}

	cout << "Candidate" << right << setw(20) << "Votes Recieved" << right << setw(20) << "% of Total Votes" << endl;

	for ( i = 0; i < LENGTH; i++ )		//prints out all arrays
	{
		cout << canArray[i] << right << setw(20) << votesArray[i] << right << setw(20) << setprecision( 2 ) << fixed << percentArray[i] << endl;
	}
	cout << "Total Votes: " << totalVotes << endl;
	for ( i = 0; i < LENGTH; i++ )	//finds max vote count and equates that to a winner
	{
		maxVotes = votesArray[0];
		if ( maxVotes < votesArray[i] )
		{
			maxVotes = votesArray[i];
			winner = canArray[i];
		}
	}
	
	cout << "The winner of the elextion is: " << winner << endl;
	return 0;
}