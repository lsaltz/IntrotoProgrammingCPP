/*
Lyndon Saltz
Mancala 2
4/17/2020
Description: Outputs lines of stars
*/
#include <iostream>
using namespace std;

void makeSolidLine( int stars ); //creates line of stars based off of star parameter
/***************************************************************************************
Method: makeSolidLine
Description: Takes an integer and prints that amount of the character '*'
@param: stars - number of characters
@return: void
***************************************************************************************/
void printDottedLine( ); //prints a star followed by 6 spaces 8 times
/***************************************************************************************
Method: printDottedLine
Description: Takes an integer and prints that amount of the character '*' followed by 6 spaces 8 times
@param: none
@return: void
***************************************************************************************/
int main( )
{

	makeSolidLine( 30 );
	cout << endl;
	makeSolidLine( 100 );
	cout << endl;
	printDottedLine( );
	cout << endl;
	system( "pause" );
	return 0;
}

void makeSolidLine( int stars )
{
	for ( int i = 0; i < stars; i++ )	//for loop creating line of stars
	{
		cout << "*";
	}	
}	//end makeSolidLine
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
//problems: none