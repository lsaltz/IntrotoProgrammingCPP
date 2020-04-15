/*
Lyndon Saltz
Title: Flowchart 3 Conversion
Due Date: 3/10/2020
Description: Convert Flowchart 3 to a program
*/
#include <iostream>
using namespace std;

int main( )
{
	int carCode; //car code that corresponds with initial cost
	int daysDriven; //days renting the car
	double milesDriven; //miles spent driving the car
	double total; //total cost of rental
	
	cout << "Enter car code.";
	cin >> carCode;

	cout << "\nEnter days driven.";
	cin >> daysDriven;

	cout << "\nEnter number of miles.";
	cin >> milesDriven;

	if ( carCode == 1 )
	{
		total = (75 * daysDriven) + (1.5 * milesDriven);
	}
	else if ( carCode == 2 )
	{
		total = (45 * daysDriven) + (0.85 * milesDriven);
	}
	else
	{
		total = (35 * daysDriven) + (0.45 * milesDriven);
	}

	cout << "\nYour total is: " << total;

	cout << endl;
	system( "pause" );
	return 0;
}
//problems: none