/*
Lyndon Saltz
Title: Psuedocode 3 Conversion
Due Date: 3/10/2020
Description: Convert Psuedocode 3 to a program
*/
#include <iostream>
using namespace std;

int main( )
{
	int count = 0; //counting people entering in data
	int expertData = 0; //the good data
	int goodCount = 0; //good data from volunteers
	int precipitation = 0; //user input precipitation
	int avPrecip = 0; //average precipitation
	int volunteer = 0;

	while( count < 3 ) //for loop declaring, initializing, and incrementing a counter
	{
		cout << "\nEnter precipitation";
		cin >> precipitation;
		expertData = expertData + precipitation;
		count++;
	}
	expertData = expertData / count;
	cout << "\nExpert Data is: " << expertData;
	while ( count < 200 )
	{
		cout << "\nEnter precipitation";
		cin >> precipitation;

		if ( !(precipitation > ( 1.25 * expertData )) || !(precipitation < (0.75 * expertData)))
		{
			volunteer = volunteer + precipitation;
			goodCount = goodCount + 1;
		}

		count++;
	}

	avPrecip = ((volunteer / goodCount) + expertData) / 2;
	cout << "\nAverage Precipitation is: " << avPrecip;

	cout << endl;
	system( "pause" );
	return 0;
}
//problems: none