/*
* Lyndon Saltz
* Chapter 7 Program 1
* 7/19/2020
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;
/**************************************************
The following program takes a student's name, 
social security number, user ID, and password. 
It outputs all of them, replacing the ssn with x's 
in place of digits, and replacing the password with 
x's as well.
***************************************************/
int main( )
{
	string str1;	//inputted string
	string fName;	//first name
	string lName;	//last name
	string ssn;		//social security number
	string uID;		//user ID
	string pass;	//password
	char delim = ' ';	//deliminator
	int i1;		//index 1
	int i = 0;	//index for looping

	cout << "Enter a student's name, SSN, user id, and password in one line: ";
	getline( cin, str1 );	//gets string
	
	i1 = str1.find( delim );	//finds index of deliminator
	fName = str1.substr( 0, i1 );	//string is substring ending at deliminator
	str1 = str1.erase( 0, i1 + 1 );		//clears that portion of the string

	i1 = str1.find( delim );
	lName = str1.substr( 0, i1 );
	str1 = str1.erase( 0, i1 + 1);

	i1 = str1.find( delim );
	ssn = str1.substr( 0, i1 );
	str1 = str1.erase( 0, i1 + 1 );
	
	i1 = str1.find( delim );
	uID = str1.substr( 0, i1 );
	str1 = str1.erase( 0, i1 + 1 );

	i1 = str1.find( delim );
	pass = str1.substr( 0, i1 );
	str1 = str1.erase( 0, i1 + 1 );
	
	ssn.replace( 0, 1, "x" );	//replaces every digit except for dashes with "x"
	ssn.replace( 1, 1, "x" );
	ssn.replace( 2, 1, "x" );
	ssn.replace( 4, 1, "x" );
	ssn.replace( 5, 1, "x" );
	ssn.replace( 7, 1, "x" );
	ssn.replace( 8, 1, "x" );
	ssn.replace( 9, 1, "x" );
	ssn.replace( 10, 1, "x" );	//I know there's a better way to do this, but I was unable to figure it out

	for ( i; i < pass.size( ); i++ )	//loop replacing password with "x"
	{
		pass.replace( i, i, "x" );
	}
	pass.replace( pass.size( ), 1, "x" );	//replaces last digit in password with "x"
	cout << fName << delim << lName << delim << ssn << delim << uID << delim << pass;

	return 0;
}