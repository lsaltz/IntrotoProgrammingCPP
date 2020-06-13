/*
Lyndon Saltz
Parts Done: 1, 2, 3, 4, 5, 7
*/
#include <iostream>
using namespace std;

const int numberAmount = 30;
double average( double num[numberAmount] );
void createArray( double num[numberAmount] );
void printArray( double num[numberAmount] );
double findHigh( double num[numberAmount] );
double findLow( double num[numberAmount] );

int main( )
{
	double num[numberAmount];
	double avg;
	double highVal;
	double lowVal;
	createArray( num );
	cout << "You have entered in " << numberAmount << " numbers" << endl;
	avg = average( num );
	cout << "Average is: " << avg << endl;
	printArray( num );
	highVal = findHigh( num );
	cout << "Highest Value is: " << highVal << endl;
	lowVal = findLow( num );
	cout << "Lowest value is: " << lowVal;
	cout << endl;
	system( "pause" );
	return 0;
}


void createArray( double num[numberAmount] )
{
	for ( int i = 0; i < numberAmount; i++ )
	{
		cout << "Enter in " << i + 1 << " number";
		cin >> num[i];
	}
}
double average( double num[numberAmount] )
{
	double sum = 0;
	double avg = 0;
	for ( int i = 0; i < numberAmount; i++ )
	{
		sum = num[i] + sum;
		avg = sum / numberAmount;
	}
	return avg;
}
void printArray( double num[numberAmount] )
{
	for ( int i = 0; i < numberAmount; i++ )
	{
		cout << num[i] << endl;
	}
}
double findHigh( double num[numberAmount] )
{
	double high = num[0];
	for ( int i = 0; i < numberAmount; i++ )
	{
		if ( high < num[i] )
		{
			high = num[i];
		}
	}
	return high;
}
double findLow( double num[numberAmount] )
{
	double low = num[0];
	for ( int i = 0; i < numberAmount; i++ )
	{
		if ( low > num[i] )
		{
			low = num[i];
		}
	}
	return low;
}
/*
 1. Read in 30 numbers from the keyboard, you must use a loop, you may use a smaller number while testing the code. (points 30) 
 2. *Make the quantity of numbers read in as a constant and use it. (points 5) 
 3. *Find and output with appropriate message the average of the numbers.  (points 15) 
 4. Put the numbers into an array. (points 30) 
 5. Print the array. Must be in a separate loop from the one that filled the array. (points 20) 
7. *Find output with appropriate message the highest value and the lowest value. (points 20) */