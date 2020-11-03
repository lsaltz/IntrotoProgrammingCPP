/*
Lyndon Saltz
Title: Chapter 10 Program 1
Due Date: 9/15/2020
Description: Header of class studentType
*/
#include<iostream>

using namespace std;

class studentType
{
private:
	string firstName; //student's first name
	string lastName;	//student's last name
	char courseGrade;	//letter course grade
	int testScore;	//test score
	int programmingScore;	//programming score
	double GPA;	//numerical GPA on a 4.0 scale

public:
	double assignGPA( char courseGrade );	//assigns gpa
	char assignCourseGrade( int scores );	//assigns course grade based off of GPA
	string getName( string fName, string lName );	//sets full name
	int getScores( void );	//gets test scores
	void printAll( double gpa, string fullName, char cGrade );	//prints all data except test and programming scores
};

