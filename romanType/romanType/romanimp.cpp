#include"roman.h"
#include<string>
#include<cmath>

using namespace std;

string romanType::storeNumber( )
{
	cout << "Enter roman numeral in all caps with no spaces" << endl;
	cin >> roman;
	return roman;
}
int romanType::r2D( string& rmn )
{
	char* romanArray;
	int arrayMax;
	int decimalFinal = 0;

	arrayMax = rmn.length( );
	romanArray = new char[arrayMax];

	for ( int i = 0; i < arrayMax; i++ )
	{
		romanArray[i] = rmn[i];
	}
	for ( int i = 0; i < arrayMax; i++ )
	{
		if ( romanArray[i] == 'I' )
		{
			decimalFinal = decimalFinal + 1;
		}
		else if ( romanArray[i] == 'V' )
		{
			decimalFinal = decimalFinal + 5;
		}
		else if ( romanArray[i] == 'X' )
		{
			decimalFinal = decimalFinal + 10;
		}
		else if ( romanArray[i] == 'L' )
		{
			decimalFinal = decimalFinal + 50;
		}
		else if ( romanArray[i] == 'C' )
		{
			decimalFinal = decimalFinal + 100;
		}
		else if ( romanArray[i] == 'D' )
		{
			decimalFinal = decimalFinal + 500;
		}
		else if ( romanArray[i] == 'M' )
		{
			decimalFinal = decimalFinal + 1000;
		}
	}
	return decimalFinal;
}
void romanType::printChoice( string& rmn, int& decimal )
{
	char answer;

	cout << "Hit R for Roman, N for normal that everyone should use." << endl;
	cin >> answer;
	if ( answer == 'R' )
	{
		cout << rmn;
	}
	if(answer == 'N' )
	{
		cout << decimal;
	}
}
