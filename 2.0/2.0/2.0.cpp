/*
* Lyndon Saltz
* 06/12/2020
* Chapter 2 Program 1
*/

#include <iostream>
using namespace std;

/******************************************
This function stores values for numbers, 
then outputs those values and the average 
of those values.
*******************************************/

int main( )
{
	int num1, num2, num3, average;
	num1 = 115;
	num2 = 29;
	num3 = -15;

	average = (num1 + num2 + num3) / 3;

	cout << num1 << endl << num2 << endl << num3 << endl << average << endl;

	system( "pause" );
	return 0;

}