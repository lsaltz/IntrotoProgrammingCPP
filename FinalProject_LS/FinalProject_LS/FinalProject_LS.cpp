#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int setCoordinates(int xU, int yU, double xCabCoordinates[], double yCabCoordinates[] )
{
	int index = 0;
	double shortestDistance;
	double rise[20];
	double run[20];
	cout << "Your coordinates are: " << xU << ", " << yU << endl;
	srand( time( 0 ) );
	double distanceArray[20];
	for ( int i = 0; i < 20; i++ )
	{
		cout << "Here is Cab " << i + 1 << "'s coordinates: " << xCabCoordinates[i] << ", " << yCabCoordinates[i] << endl;
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
		
		cout << "This is Cab " << i + 1 <<"'s distance from you: " << distanceArray[i] << endl;
		
	}
	shortestDistance = distanceArray[0];

	for ( int i = 0; i < 20; i++ )
	{

		if ( distanceArray[i] < shortestDistance )
		{
			shortestDistance = distanceArray[i];
		}
	}
	for (int i = 0; i < 20; i++)
	{
		if ( distanceArray[i] == shortestDistance )
		{
			index = i;
			break;
		}
	}
	cout << "The closest cab is " << shortestDistance << " away from you" << " at position " << xCabCoordinates[index] << ", " << yCabCoordinates[index] << endl;
	return index;
}


int main( )
{
	int x, y;
	cout << "Input X coordinate(0-100)";
	cin >> x;
	cout << "Input Y coordinate(0-100)";
	cin >> y;
	double rX, rY;
	rX = rand( ) % (100 - 0 + 1) + 0;
	rY = rand( ) % (100 - 0 + 1) + 0;
	double xArray[20] =
	{
		100.0, 3.0, 91.0, 72.0, 8.0, 9.0, 10.0, 13.0, 29.0, 52.0, 67.0, 81.0, 19.0, 12.0, 43.0, 65.0, 18.0, 91.0, 80.0, rX
	};
	double yArray[20]
	{
		10.0, 5.0, 18.0, 63.0, 29.0, 23.0, 14.0, 86.0, 33.0, 39.0, 93.0, 10.0, 11.0, 62.0, 79.0, 73.0, 85.0, 32.0, 29.0, rY
	};

	int ind = setCoordinates(x, y, xArray, yArray);
	cout << "Cab " << ind << " is ready to pick you up.";
	cout << endl;
	system( "pause" );
	return 0;
}