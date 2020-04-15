/*
Lyndon Saltz
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main( )
{
	int numberChars;
	char sym;

	cout << "Enter number of symbols: ";
	cin >> numberChars;

	cout << "Enter desired symbol: ";
	cin >> sym;

	for ( int i = 0; i < numberChars; i++)
	{
		cout << sym;
	}

	cout << endl;
	system( "pause" );
	return 0;
}