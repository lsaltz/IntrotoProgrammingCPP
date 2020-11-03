#include<iostream>

using namespace std;

class romanType
{
public:
	string storeNumber( );
	int r2D( string& );
	void printChoice( string&, int& );
private:
	string roman;
	int dec;
};