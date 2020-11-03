/*
Lyndon Saltz
Title: Chapter 11 Program 1
Due Date: 9/20/2020
Description: Implementation file. Stores a string in a character array and outputs the 
string in all uppercase letters.
*/
#include<iostream>
#include<string>
#include<cmath>
#include<cstring>

using namespace std;

int main( )
{
	string myString;
	char *stringArray;	//stringArray is a pointer
	int arraySize;

	getline(cin, myString);		//gets line input
	arraySize = myString.length( );	//sets size of array to be length of string
	stringArray = new char[arraySize];		//stringArray is now a dynamic array

	for ( int i = 0; i < arraySize; i++ )
	{
		stringArray[i] = myString[i];	//coppy from myString to stringArray
		stringArray[i] = toupper( stringArray[i] );	//convert characters of stringArray to uppercase
		cout << stringArray[i];	//output stringArray

	}
		
	return 0;
}