/*
Lyndon Saltz
Mancala 7
4/29/2020
Description: checks if user's entry is valid
*/
#include <iostream>
#include <iomanip>
using namespace std;

const int MAX = 14;		//max array index amount
void makeSolidLine( int stars );	//creates line of stars based off of star parameter
void printDottedLine( );	//prints a star followed by 6 spaces 8 times
void drawBoard( int beadArray[MAX] );	//creates mancala board
void showTopRowNumbers( );	 //outputs top row of mancala board numbers
void showBottomRowNumbers( );	//outputs bottom row of mancala board numbers
void initializeArray( int beads[MAX] );		//initializes an array of bead amounts
void printArray( int beadsArray[MAX] );		//prints previously initialized array
void showTopBins( int beadArray[MAX] );		//shows amount of beads in top row
void showBottomBins( int beadArray[MAX] );	 //shows amount of beads in bottom row
int gameOverCheck( int beadArray[MAX] );	//determines if mancala game is over
void testArray( int beadArray[MAX] );	//test array
int getStartingBin( int player, int beadArray[MAX] );	//get bin from player

int main( )
{
	int beadArray[MAX];	//array of bead amount
	int winner = -1; //winner of game (-1 no winner, 1 player1 wins, 2 player2 wins, 3 tie)
	int binChoice;	//bin player chooses
	int player = 1; //player 1 or player 2
	//initializeArray( beadArray );
	testArray( beadArray );
	printArray( beadArray );
	drawBoard( beadArray );
	binChoice = getStartingBin( player, beadArray );
	cout << endl;
	cout << binChoice;
	cout << endl;
	cout << beadArray[binChoice];
	winner = gameOverCheck( beadArray );
	cout << endl;
	printArray( beadArray );
	drawBoard( beadArray );

	if ( winner == 1 )
	{
		cout << "Player 1 wins";
	}
	else if ( winner == 2 )
	{
		cout << "Player 2 wins";
	}
	else if ( winner == -1 )
	{
		cout << "No winner";
	}
	else
	{
		cout << "Tie";
	}
	cout << endl;
	system( "pause" );
	return 0;
}

/***************************************************************************************
Method: makeSolidLine
Description: Takes an integer and prints that amount of the character '*'
@param: stars - number of characters
@return: void
***************************************************************************************/

void makeSolidLine( int stars )
{
	for ( int i = 0; i < stars; i++ )	//for loop creating line of stars
	{
		cout << "*";
	}
}	//end makeSolidLine

/***************************************************************************************
Method: printDottedLine
Description: Takes an integer and prints that amount of the character '*' followed by 6 spaces 8 times
@param: none
@return: void
***************************************************************************************/
void printDottedLine( )
{
	for ( int i = 0; i < 8; i++ )	//for loop generating stars
	{
		cout << "*";
		for ( int i = 0; i < 6; i++ )	//for loop for spaces
		{
			cout << " ";
		}
	}
	cout << "*";
}	//end printDottedLine

/***************************************************************************************
Method: drawBoard
Description: Creates a mancala board using other functions
@param: beadArray
@return: void
***************************************************************************************/
void drawBoard( int beadArray[MAX] )
{
	makeSolidLine( 57 );
	cout << endl;
	printDottedLine( );
	cout << endl;
	showTopRowNumbers( );
	cout << endl;
	showTopBins( beadArray );
	cout << endl;
	for ( int i = 0; i < 3; i++ )
	{
		printDottedLine( );
		cout << endl;
	}
	cout << "*" << setw( 3 ) << "13" << setw( 4 );
	makeSolidLine( 43 );
	cout << setw( 3 ) << beadArray[13] << setw( 4 ) << "*";
	
	cout << endl;
	cout << "*" << setw( 3 ) << beadArray[6] << setw( 4 );
	for ( int i = 0; i < 6; i++ )	//for loop generating stars
	{
		cout << "*";
		for ( int i = 0; i < 6; i++ )	//for loop for spaces
		{
			cout << " ";
		}
	}
	cout << "*";
	cout << setw( 3 ) << "6" << setw( 4 ) << "*";
	cout << endl;
	showBottomRowNumbers( );
	cout << endl;
	showBottomBins( beadArray );
	cout << endl;
	for ( int i = 0; i < 3; i++ )
	{
		printDottedLine( );
		cout << endl;
	}
	makeSolidLine( 57 );
} //end drawBoard

/***************************************************************************************
Method: showTopRowNumbers
Description: Outputs top row of numbers
@param: none
@return: void
***************************************************************************************/
void showTopRowNumbers( )
{
	cout << "*";
	cout << setw( 7 );
	for ( int i = 0; i < 6; i++ ) //for loop outputting top numbers
	{
		cout << "*" << setw( 3 );
		cout << i << setw( 4 );
	}
	cout << "*";
	cout << setw( 7 );
	cout << "*";

}	//end showTopRowNumbers

/***************************************************************************************
Method: showTopBins
Description: Outputs top row of mancala bead amount
@param: beadArray
@return: void
***************************************************************************************/
void showTopBins( int beadArray[MAX] )
{
	cout << "*";
	cout << setw( 7 );
	for ( int i = 0; i < 6; i++ ) //for loop outputting top bead amounts
	{
		cout << "*" << setw( 3 );
		cout << beadArray[i] << setw( 4 );
	}
	cout << "*";
	cout << setw( 7 );
	cout << "*";
} //end showTopBins
/***************************************************************************************
Method: showBottomRowNumbers
Description: Outputs bottom row of numbers
@param: none
@return: void
***************************************************************************************/
void showBottomRowNumbers( )
{
	cout << "*";
	cout << setw( 7 );
	for ( int i = 12; i > 6; i-- )	//for loop outputting bottom numbers
	{
		cout << "*" << setw( 3 );
		cout << i << setw( 4 );
	}
	cout << "*";
	cout << setw( 7 );
	cout << "*";

}	//end showBottomRowNumbers

/***************************************************************************************
Method: showBottomRowBins
Description: Outputs bottom row of mancala bead amount
@param: beadArray
@return: void
***************************************************************************************/
void showBottomBins( int beadArray[MAX] )
{
	cout << "*";
	cout << setw( 7 );
	for ( int i = 12; i > 6; i-- )	//for loop outputting bottom bead amounts
	{
		cout << "*" << setw( 3 );
		cout << beadArray[i] << setw( 4 );
	}
	cout << "*";
	cout << setw( 7 );
	cout << "*";
}	//end showBottomBins
/***************************************************************************************
Method: initializeArray
Description: initializes array of bead amount
@param: beadArray - beads array
@return: void
***************************************************************************************/
void initializeArray( int beadArray[MAX] )
{
	for ( int i = 0; i < 6; i++ )
	{
		beadArray[i] = 4;
	}
	beadArray[6] = 0;
	for ( int i = 7; i < 13; i++ )
	{
		beadArray[i] = 4;
	}
	beadArray[13] = 0;
} //end initializeArray

/***************************************************************************************
Method: printArray
Description: prints array of bead amount
@param: seeBeadsArray - beads array
@return: void
***************************************************************************************/
void printArray( int seeBeadsArray[MAX] )
{
	for ( int i = 0; i < 7; i++ )
	{
		cout << seeBeadsArray[i] << " ";
	}
	cout << "| ";
	for ( int i = 7; i < MAX; i++ )
	{
		cout << seeBeadsArray[i] << " ";
	}
	cout << endl;
}

/***************************************************************************************
Method: gameOverCheck
Description: Checks if the game is over and determines who wins
@param: beadArray
@return: winner integer
***************************************************************************************/

int gameOverCheck( int beadArray[MAX] )
{
	int winner = -1;
	int player1Sum = 0;
	int player2Sum = 0;

	for ( int i = 0; i < 6; i++ )
	{
		
		player1Sum = beadArray[i] + player1Sum;
	}

	for ( int i = 7; i < 13; i++ )
	{
		
		player2Sum = beadArray[i] + player2Sum;
	}

	if ( player1Sum == 0 || player2Sum == 0 ) //check if a player have emptied middle bins
	{
		if ( player1Sum == 0 )	//move opponent player middle bins beads
		{
			beadArray[6] = beadArray[6] + player2Sum;
		}
		else
		{
			beadArray[13] = beadArray[13] + player1Sum;
		}
		for ( int i = 0; i < 6; i++ ) //set all player 1 bin to zero
		{
			beadArray[i] = 0;
		}
		for ( int i = 7; i < 13; i++ ) //set all player 2 bin to zero
		{
			beadArray[i] = 0;
		}
		if ( beadArray[6] > beadArray[13] )		//determines winner or tie
		{
			winner = 1;
		}
		else if ( beadArray[13] > beadArray[6] )
		{
			winner = 2;
		}
		else	//tie
		{
			winner = 3;
		}

	}  //check if a player have emptied middle bins
	return winner;
} //end gameOverCheck


/*****************************************************************
Function:  testArray
Description: Fill beadArray with any values for testing
@param: beadArray - number of beads in each bin
@return: N/A
*****************************************************************/
void testArray( int beadArray[MAX] )
{
	//example has the array initialized so that Player2 will win
	beadArray[0] = 3;
	beadArray[1] = 0;
	beadArray[2] = 5;
	beadArray[3] = 0;
	beadArray[4] = 1;
	beadArray[5] = 0;
	beadArray[6] = 20;

	beadArray[7] = 0;
	beadArray[8] = 0;
	beadArray[9] = 0;
	beadArray[10] = 0;
	beadArray[11] = 0;
	beadArray[12] = 0;
	beadArray[13] = 20;
} //end testArray

/*****************************************************************
Function:  getStartingBin
Description: check if entered values by players are acceptable
@param: beadArray - number of beads in each bin, player
@return: int binChoice
*****************************************************************/

int getStartingBin( int player, int beadArray[MAX] )
{
	int binChoice;
	int low;
	int high;
	if ( player == 1 )
	{
		low = 0;
		high = 5;
	}
		
	else
	{
		low = 7;
		high = 12;
	}

	cout << "what is your bin choice, Player " << player;
	cin >> binChoice;
	
	while ( binChoice > high || binChoice < low || beadArray[binChoice] == 0)
	{
			cout << "what is your bin choice, Player " << player;
			cin >> binChoice;
	}

	return binChoice;
}	//end getStartingBin

//Problems: forgot to include beadarray in while loop