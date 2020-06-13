/*
* Lyndon Saltz
* 6/11/2020
* Chapter 2, Program 1
*/

#include <iostream>

using namespace std;
/*******************************************************
* This is the main code that asks for input and computes 
* the amount the driver can drive before refueling
********************************************************/
int main( )
{
	double mileage;
	int gallons;
	int totalMilesPerTank;

	cout << "Please enter miles/gallon: " << endl;
	cin >> mileage;
	cout << "Please enter tank capacity: " << endl;
	cin >> gallons;
	totalMilesPerTank = gallons * mileage; //computes amount
	cout << "Amount of miles you can travel on 1 tank of gas: " << totalMilesPerTank << endl;

	system( "pause" );
	return 0;
}