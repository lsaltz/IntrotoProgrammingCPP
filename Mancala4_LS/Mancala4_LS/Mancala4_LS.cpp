/*
Lyndon Saltz
Mancala 4
4/22/2020
Description: Outputs mancalaboard with numbers and an array of mancala beads
*/
#include <iostream>
#include <iomanip>
using namespace std;

void makeSolidLine( int stars );	//creates line of stars based off of star parameter
void printDottedLine( );	//prints a star followed by 6 spaces 8 times
void drawBoard( );	//creates mancala board
void showTopRowNumbers( );	 //outputs top row of mancala board numbers
void showBottomRowNumbers( );	//outputs bottom row of mancala board numbers
void initializeArray( int beads[14] );	//initializes an array of bead amounts
void printArray( int beadsArray[14] );	//prints previously initialized array

int main( )
{
	int beadArray[14];
	initializeArray( beadArray );
	printArray( beadArray );
	drawBoard( );
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
@param: none
@return: void
***************************************************************************************/
void drawBoard( )
{
	makeSolidLine( 57 );
	cout << endl;
	printDottedLine( );
	cout << endl;
	showTopRowNumbers( );
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
	printDottedLine( );
	cout << endl;
	showBottomRowNumbers( );
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
Method: showBottomRowNumbers
Description: Outputs bottom row of numbers
@param: none
@return: void
***************************************************************************************/
void showBottomRowNumbers( )
{
	cout << "*";
	cout << setw( 7 );
	for ( int i = 7; i < 13; i++ )	//for loop outputting bottom numbers
	{
		cout << "*" << setw( 3 );
		cout << i << setw( 4 );
	}
	cout << "*";
	cout << setw( 7 );
	cout << "*";
}	//end showBottomRowNumbers

/***************************************************************************************
Method: initializeArray
Description: initializes array of bead amount
@param: beadArray - beads array
@return: void
***************************************************************************************/
void initializeArray( int beadArray[14] )
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
@param: beadsArray - beads array
@return: void
***************************************************************************************/
void printArray( int seeBeadsArray[14] )
{
	for ( int i = 0; i < 7; i++ )
	{
		cout << seeBeadsArray[i] << " ";
	}
	cout << "| ";
	for ( int i = 7; i < 14; i++ )
	{
		cout << seeBeadsArray[i] << " ";
	}
	cout << endl;
} //end printArray
//problems: would continue to print defferent numbers than i put in-- i forgot to put [i]