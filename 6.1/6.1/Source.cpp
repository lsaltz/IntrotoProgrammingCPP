/*
* Lyndon Saltz
* Programming Assignment Chapter 6
* 7/12/20
*/
#include <iostream>
#include <cmath>

using namespace std;

void getUserInput( double& windSpeed, double& temp );	//function to acquire user input
double calcWindChill( double windspeed, double temp );	//function to calculate the windchill

/*****************************************************************
Method: main
Description: handles other functions to return windchill
@param: none
@return: 0
*****************************************************************/

int main( )
{
	double v = 0.0;		//wind speed
	double t = 0.0;		//temperature
	int chill;		//result from calcWindChill

	getUserInput( v,t );	
	chill = calcWindChill( v, t );
	cout << "Wind chill is: " << chill << endl;

	return 0;
}

/*****************************************************************
Method: getUserInput
Description: gets user's input and passes references to windSpeed,
temp, as well as printing temp
@param: double& windSpeed, double& temp 
@return: void
*****************************************************************/

void getUserInput( double& windSpeed, double& temp )
{
	cout << "Input Wind speed in MPH: ";
	cin >> windSpeed;
	cout << endl;
	cout << "Enter Temperature in Farenheit: ";
	cin >> temp;
	cout << "Current Temperature is " << temp << "F" << endl;
}

/*****************************************************************
Method: calcWindChill
Description: calculates wind chill using speed and temperature
@param: windSpeed, temp
@return: windChill
*****************************************************************/

double calcWindChill(double windSpeed, double temp )
{
	double windChill = 35.74 + 0.6215 * temp - 35.75 * pow( windSpeed, 0.16 ) + 0.4275 * temp * pow( windSpeed, 0.16 ); //formula to calc wind chill
	return windChill;
}