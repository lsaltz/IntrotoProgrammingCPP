/*
Lyndon Saltz
Mancala 1
4/15/2020
Description: Outputs line of stars based off of function parameters
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
int main( )
{

	makeSolidLine( 30 );
	cout << endl;
	makeSolidLine( 100 );
	cout << endl;
	makeSolidLine( 5 );
	cout << endl;
	system( "pause" );
	return 0;
}

void makeSolidLine( int stars )		
{
	for ( int i = 0; i < stars; i++ )	//for loop creating line of stars
	{
		cout << "*";
	}	//end makeSolidLine
}
//problems: did not comment functions