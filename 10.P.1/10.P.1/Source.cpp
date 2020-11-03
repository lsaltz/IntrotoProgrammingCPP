/*
Lyndon Saltz
Title: Chapter 10 Program 1
Due Date: 9/15/2020
Description: Executes class studentType
*/
#include<iostream>
#include<cmath>
#include "Header.h"
using namespace std;

/***********************************
* function: main
* implements header and studentType files
************************************/

int main( )
{
	studentType student1;
	string fName;
	string lName;
	string fullName;
	char cGrade;
	double gpa;
	int score;
	cout << "Please input first name" << endl;
	cin >> fName;
	cout << "Please input last name" << endl;
	cin >> lName;
	fullName = student1.getName( fName, lName );
	score = student1.getScores( );
	cGrade = student1.assignCourseGrade( score );
	gpa = student1.assignGPA( cGrade );
	student1.printAll( gpa, fullName, cGrade );
	system( "pause" );
	return 0;
}