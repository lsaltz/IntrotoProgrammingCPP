/*
* Lyndon Saltz
* 06/28/2020
* Chapter 4 Program 1
The problem is one of sorting cookies into boxes, 
and determining what is leftover, and handling those
situations accordingly. This problem gives the limit of 
24 cookies per box and 75 boxes per container. The output
is the amount of boxes and containers required to hold the
cookies, and the remaining cookies if they are less than 
the amount needed to fill a box, and the remaining boxes 
if they are less than what is needed to fill a container.
*/
#include <cmath>
#include <iostream>
using namespace std;

const int BOXVOL = 24;	//box capacity
const int CONTAINVOL = 75;	//container capacity

int boxes( int cookieAmount );	//outputs boxes needed and leftover cookies
void containers( int boxesNeeded );		//outputs containers needed and remaining boxes


/***************************************************
This is the main function. It takes no paramaters and
returns the exit code. It handles invalid input as well a the 
other functions. It prints out the cookie amount, boxes needed,
as well as a request for cookies and an error message.
****************************************************/

int main( )
{
	int cookieAmount, boxesNeeded;
	cout << "Input the amount of cookies you are shipping: \n";
	if (!(cin >> cookieAmount))
	{
		cout << "Invalid input. Close this program and try again." << endl;
	}
	else
	{
		cout << "Cookie Amount: " << cookieAmount << endl;
		boxesNeeded = boxes( cookieAmount );
		cout << "You need: " << boxesNeeded << " boxes." << endl;
		containers( boxesNeeded );
	}
	return 0;
}
/***************************************************
This is the boxes function. It takes cookie amount as 
its parameter and returns boxes needed. It outputs the remaining cookies 
amount.
****************************************************/


int boxes( int cookieAmount )
{
	int boxesNeeded = cookieAmount / BOXVOL;
	int remainingCookies = cookieAmount % BOXVOL;
	if ( remainingCookies != 0 )
	{
		cout << "Leftover cookies: " << remainingCookies << endl;
	}
	else { };
	return boxesNeeded;
}
/***************************************************
This is the containers function. It takes boxes needed
as its parameter and returns nothing. It prints containers
needed and leftover boxes.
****************************************************/
void containers( int boxesNeeded )
{
	int containersNeeded = boxesNeeded / CONTAINVOL;
	int remainingBoxes = boxesNeeded % CONTAINVOL;
	cout << "You need: " << containersNeeded << " containers." << endl;
	if ( remainingBoxes != 0 )
	{
		cout << "Leftover boxes: " << remainingBoxes << endl;
	}
	else { };
}
