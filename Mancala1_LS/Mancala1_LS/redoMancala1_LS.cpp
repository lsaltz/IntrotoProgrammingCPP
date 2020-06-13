//data 5.5 5.0 7.2 9.0 10.5 0 11.0 13.5
#include <iostream>
using namespace std;
double getMoneyAmount( );
void convertToCoinsAndBills( double change, int& dollars, int& coin );
void printChange( int dollars, int coin );

int main( )
{
	double change;
	int dollars;
	int coin;

	change = getMoneyAmount( );
	convertToCoinsAndBills( change, dollars, coin );
	printChange( dollars, coin );

	cout << endl;
	system( "pause" );
	return 0;
}
double getMoneyAmount( )
{
	double cost;
	double money;
	double change;

	cout << "How much does the item cost? ";
	cin >> cost;
	cout << "How much does the customer give you? ";
	cin >> money;
	while ( money < cost && money != 0 )
	{
		cout << "ERROR not enough money\n";
		cout << "Enter an amount bigger than " << cost << " or zero to quit" << endl;
		cin >> money;
	}
	change = money - cost;
	return change;
}

void convertToCoinsAndBills( double change, int& dollars, int& coin )
{
	dollars = (int)change;
	coin = (change - dollars) * 100;
	cout << coin << endl;
}

void printChange( int dollars, int coin )
{
	cout << "You get " << dollars << " dollar(s)";
	cout << " and " << coin << " in coins";
}
