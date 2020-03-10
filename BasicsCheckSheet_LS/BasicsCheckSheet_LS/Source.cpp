/*
Lyndon Saltz
Title: Visual Studio Basics Check Sheet
Due Date: 2/11/20
Description: Learn how to use Visual Studio
*/
#include <iostream>
using namespace std;

int main()
{
	int num1; //first value
	int num2; //user inputed number
	int num3; //sum of first two numbers

	num1 = 10;
	cout << "First number is: " << num1;

	cout << "\nEnter second number: ";
	cin >> num2;

	num3 = num1 + num2;
	cout << "Total: " << num3;

	cout << endl;
	system("pause");
	return 0;
}
//problems: none