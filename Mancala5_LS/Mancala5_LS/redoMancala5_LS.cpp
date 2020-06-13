/*
Lyndon Saltz
Mancala 5
4/24/2020
Description: Outputs mancalaboard with numbers and bead count
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
void showBottomBins( int beadArray[MAX] );	//shows amount of beads in bottom row

int main( )
{
	int beadArray[MAX];
	initializeArray( beadArray );
	printArray( beadArray );
	drawBoard( beadArray );
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
	cout << setw( 3 ) << "6" << setw( 4 ) << "*";
	cout << endl;
	cout << "*" << setw( 3 ) << beadArray[6] << setw(4);
	for ( int i = 0; i < 6; i++ )	//for loop generating stars
	{
		cout << "*";
		for ( int i = 0; i < 6; i++ )	//for loop for spaces
		{
			cout << " ";
		}
	}
	cout << "*";
	cout << setw( 3 ) << beadArray[13] << setw( 4 ) << "*";
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
	for ( int i = 7; i < 13; i++ )	//for loop outputting bottom bead amounts
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
//Problems: reversed bottom row numbers, did not comment MAX, failed to create new functions for bead amounts