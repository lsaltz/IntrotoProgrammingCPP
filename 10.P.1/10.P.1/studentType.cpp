/*
Lyndon Saltz
Title: Chapter 10 Program 1
Due Date: 9/15/2020
Description: Class studentType
*/
#include<iostream>
#include<cmath>
#include "Header.h"
using namespace std;

char studentType::assignCourseGrade( int scores )	//calculates course grade based off test scores
{
	double grade = scores / 2;
	char courseGrade;
	if ( grade >= 90 )
	{
		courseGrade = 'A';
	}
	else if ( grade >= 80 && grade < 90 )
	{
		courseGrade = 'B';
	}
	else if ( grade >= 70 && grade < 80 )
	{
		courseGrade = 'C';
	}
	else if ( grade >= 60 && grade < 70 )
	{
		courseGrade = 'D';
	}
	else
	{
		courseGrade = 'F';
	}
	return courseGrade;
}
double studentType::assignGPA( char courseGrade )	//assigns GPA based off course grade
{
	double gpa;
	if ( courseGrade == 'A' )
	{
		gpa = 4.0;
	}
	else if ( courseGrade == 'B' )
	{
		gpa = 3.0;
	}
	else if ( courseGrade == 'C' )
	{
		gpa = 2.0;
	}
	else if ( courseGrade == 'D' )
	{
		gpa = 1.0;
	}
	else
	{
		gpa = 0.0;
	}
	return gpa;
}
string studentType::getName( string fName, string lName )	//sets full name
{
	string fullName = fName + " " + lName;
	return fullName;
}

int studentType::getScores( void )	//collects scores
{
	int pS;
	int tS;
	cout << "Please input Programming Score" << endl;
	cin >> pS;
	cout << "Please input Test Score" << endl;
	cin >> tS;
	int score = tS + pS;
	return score;
}

void studentType::printAll( double gpa, string fullName, char cGrade )	//prints all data except test scores
{
	cout << "Student Name: " << fullName << endl;
	cout << "GPA: " << gpa << endl;
	cout << "Course Grade: " << cGrade << endl;
}
