/*
Lyndon Saltz
Title: Guessing Game 1
Due Date: 2/11/20
Description: Learn how to use random number generator
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));

	int low = 10; //low number
	int high = 20; //high number
	int comp; //computer generated number
	int us; //user entered number

	comp = rand() % (high - low + 1) + low;
	
	cout << "\nEnter your number between 10 and 20: ";
	cin >> us;

	cout << "\nYour guess: " << us;
	cout << "\n The answer: " << comp;

	cout << endl;
	system("pause");
	return 0;
}