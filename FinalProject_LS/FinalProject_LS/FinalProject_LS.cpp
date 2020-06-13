/*
Lyndon Saltz
Title: Final Project
Due Date: 5/8/2020
Description: Accepts user input of x,y location then finds the closest available cab to pick them up
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MAX = 20;	//Maximum array index amount
int getX( );	//gets user's x-courdinate
int getY( );	//gets user's y-coordinate
void initializeArrays( double xArray[MAX], double yArray[MAX] );	//initializes arrays of randomly generated cab locations
void printsCabCoordinates( double cabX[ ], double cabY[ ] );	//prints coordinates of all cabs
int computeShortestDistance( int xU, int yU, double xCabCoordinates[ ], double yCabCoordinates[ ] );	//figures out closest cab to user

int main( )
{
	double xArray[MAX];		//cab x values
	double yArray[MAX];		//cab y values
	int x = getX( );		//accepts user's x coordinates
	int y = getY( );		//accepts user's y coordinates
	cout << "Your coordinates are: " << x << ", " << y << endl;		//reprints user's coordinates
	initializeArrays( xArray, yArray );
	printsCabCoordinates( xArray, yArray );
	int ind = computeShortestDistance(x, y, xArray, yArray);	//cab index + 1
	cout << "Cab " << ind << " is ready to pick you up.";
	
	cout << endl;
	system( "pause" );
	return 0;
}

/***************************************************************************************
Method: getX
Description: gets user's x location
@param: none
@return: integer x value
***************************************************************************************/

int getX( )
{
	int x;
	cout << "Input X coordinate(0-100)";
	cin >> x;

	return x;
}	//end getY

/***************************************************************************************
Method: getY
Description: gets user's y location
@param: none
@return: integer y value
***************************************************************************************/

int getY( )
{
	int y;
	cout << "Input Y coordinate(0-100)";
	cin >> y;

	return y;
}	//end getY

/***************************************************************************************
Method: initializeArrays
Description: initializes arrays of randomly generated cab locations
@param: xArray, yArray
@return: void
***************************************************************************************/

void initializeArrays( double xArray[MAX], double yArray[MAX])
{
	srand( time( 0 ) );

	for ( int i = 0; i < MAX; i++ )
	{
		xArray[i] = rand( ) % (100 - 0 + 1) + 0;
		yArray[i] = rand( ) % (100 - 0 + 1) + 0;
	}
}	//end initializeArrays

/***************************************************************************************
Method: printsCabCoordinates
Description: prints out all cab locations
@param: cabX - cab x locations array, cabY - cab y locations array
@return: void
***************************************************************************************/

void printsCabCoordinates( double cabX[ ], double cabY[ ] )
{
	for ( int i = 0; i < MAX; i++ )
	{
		cout << "Here is Cab " << i + 1 << "'s coordinates: " << cabX[i] << ", " << cabY[i] << endl;
	}
}	//end printsCabCoordinates

/***************************************************************************************
Method: computeShortestDistance
Description: calculates all cab distances from user's location, and chooses the shortest distance
@param: xU - user x coordinate, yU - user y coordinate, xCabCoordinates - x cab location, yCabCoordinates - y cab location
@return: integer index + 1 of cab closest to user
***************************************************************************************/

int computeShortestDistance( int xU, int yU, double xCabCoordinates[ ], double yCabCoordinates[ ] )
{
	int index = 0;
	double shortestDistance;
	double rise[MAX];
	double run[MAX];
	double distanceArray[MAX];

	for ( int i = 0; i < 20; i++ )
	{
		rise[i] = { yCabCoordinates[i] - yU };
		rise[i] = pow( rise[i], 2 );
		run[i] = { xCabCoordinates[i] - xU };
		run[i] = pow( run[i], 2 );
		distanceArray[i] = { rise[i] + run[i] };
		distanceArray[i] = sqrt( distanceArray[i] );
		if ( distanceArray[i] < 0 )
		{
			distanceArray[i] = distanceArray[i] * -1;
		}
		cout << "This is Cab " << i + 1 << "'s distance from you: " << distanceArray[i] << endl;
	}
	shortestDistance = distanceArray[0];

	for ( int i = 0; i < 20; i++ )
	{

		if ( distanceArray[i] < shortestDistance )
		{
			shortestDistance = distanceArray[i];
		}
	}
	for ( int i = 0; i < 20; i++ )
	{
		if ( distanceArray[i] == shortestDistance )
		{
			index = i;
			break;
		}
	}
	cout << "The closest cab is " << shortestDistance << " away from you" << " at position " << xCabCoordinates[index] << ", " << yCabCoordinates[index] << endl;
	return index + 1;
}	//end computeShortestDistance