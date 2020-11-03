/*
* Lyndon Saltz
* 07/05/2020
* Chapter 5 Program 1
*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const int DIVISOR = 2;
const int ODDREMAINDER = 1;
const int MAXNUM = 10;

/******************************************
This program accepts two numerical inputs, 
the first being lower than the second. Then, 
from that input it will need to output all 
odd numbers between the two inputs, the sum of 
all even numbers between the two inputs, output 
the numbers 1-10 and their squares, and output 
all uppercase letters.
*******************************************/

int main( )
{
	int num1, num2;		//two numbers user input
	cout << "Please enter two numbers, the second greater than the first." << endl;
	cin >> num1 >> num2;
	cout << "Entered numbers: " << num1 << setw( 2 ) << num2 <<endl;	//prints entered numbers
	while ( num1 > num2 || !cin )	//catch for invalid input
	{
		cout << "Please try again." << endl;
		cin >> num1 >> num2;
		cout << "Entered numbers: " << num1 << setw( 2 ) << num2 << endl;
	}

	int oddNum = num1;
	int evenNum = num1;
	int totalNum = 0;
	int totalSquareNum = 0;

	cout << "Odd integers between " << num1 << " and " << num2 << " are:" << endl;

	while ( oddNum <= num2 )	//prints odd numbers between the user entered numbers and adds up squares of odd numbers
	{
		if ( oddNum % DIVISOR == ODDREMAINDER )
		{
			cout << oddNum << setw( 6 );
			totalSquareNum = oddNum * oddNum + totalSquareNum;
		}
		else { };

		oddNum++;
	}
	cout << endl;

	cout << "Sum of even integers between " << num1 << " and " << num2 << " is:" << endl;
	while ( evenNum <= num2 )	//adds up even intergers between user entered numbers
	{
		if ( evenNum % DIVISOR != ODDREMAINDER )
		{
			totalNum = evenNum + totalNum;
		}
		else { };
		evenNum++;
	}
	cout << totalNum << endl;

	cout << "Number" << setw( 6 ) << "Square of Number" << endl;
	int i = 1;
	while ( i <= MAXNUM )	//prints numbers 1-10 and squares of those numbers
	{
		int sqr = i * i;
		cout << i << setw( 6 ) << sqr << endl;
		i++;
	}
	cout << "Sum of the squares of odd integers between " << num1 << " and " << num2 << " = " << totalSquareNum << endl;

	cout << "All uppercase letters are: " << endl;
	char alphabet = 'A';
	while ( alphabet <= 'Z' )	//prints alphabet in uppercase
	{
		cout << alphabet << setw( 3 );
		alphabet++;
	}
	return 0;
}

