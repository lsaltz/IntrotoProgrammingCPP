//Write a program that prompts the user to input a number of quarters, dimes, and nickels.The program then outputs the total value of the coins in pennies.
#include <iostream>
using namespace std;

int main( )
{
	int n; //nickels
	int d; //dimes
	int q; //quarters
	cout << "enter number of quarters" << endl;
	cin >> q;
	cout << "enter number of dimes" << endl;
	cin >> d;
	cout << "enter number of nickels" << endl;
	cin >> n;
	int p = (q * 25) + (d * 10) + (n * 5); //number of pennies computed
	cout << "number of pennies: " << p;

	cout << endl;
	system( "pause" );
	return 0;
}



