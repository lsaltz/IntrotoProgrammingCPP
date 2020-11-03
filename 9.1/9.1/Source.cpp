/*
* Lyndon R. Saltz
* 08/01/2020
* Chapter 9 Program 1
*/

#include<iostream>
#include<cmath>
#include<iomanip>
#include<fstream>

using namespace std;

/**************************************************************************
This program will achieve the following:
1. Read studentsf names and test scores
2. Output studentsf names, test scores and appropriate grades
3. Output the highest test score, along with the name of the 
student who has the highest test score
***************************************************************************/

struct studentType
{
	string studentFName, studentLName;
	int testScore;
	char grade;

};
studentType studentsArray[20];
studentType* readData( studentType studentsArray [20] );
studentType* giveGrade( studentType( &studentsArray )[20] );
void printData( studentType studentsArray[20] );
int findHighest( studentType studentsArray[20] );
void printHighest( studentType studentsArray[20], int highestGrade );
std::ifstream inFile;
std::ofstream studentData( "Student_Data.txt" );
/****************************************************************
main
This function contains the other functions
*****************************************************************/
int main( )
{
	int highestGrade;
	studentType* arrayOfStudents[20];	//returning array as pointer
	*arrayOfStudents = readData( studentsArray );
	*arrayOfStudents = giveGrade( studentsArray );
	printData( studentsArray );
	highestGrade = findHighest( studentsArray );
	printHighest(studentsArray, highestGrade);
}
/****************************************************************
readData
uses pointers to return the studentsArray, opens and reads from file
*****************************************************************/
studentType* readData( studentType studentsArray[20] )
{
	inFile.open( "Ch9_Ex2Data.txt", ios::in );
	for ( int i = 0; i < 20; i++ )
	{
		inFile >> studentsArray[i].studentFName 
			>> studentsArray[i].studentLName 
			>> studentsArray[i].testScore;
	}
	
	return studentsArray;
}
/****************************************************************
giveGrade
uses pass by reference and pointer to read and return array with grades added
*****************************************************************/
studentType* giveGrade( studentType (&studentsArray)[20] )
{
	for ( int i = 0; i < 20; i++ )
	{
		if ( studentsArray[i].testScore >= 0 && studentsArray[i].testScore < 60 )
		{
			studentsArray[i].grade = 'F';
		}
		else if ( studentsArray[i].testScore >= 60 && studentsArray[i].testScore < 70 )
		{
			studentsArray[i].grade = 'D';
		}
		else if ( studentsArray[i].testScore >= 70 && studentsArray[i].testScore < 80 )
		{
			studentsArray[i].grade = 'C';
		}
		else if ( studentsArray[i].testScore >= 80 && studentsArray[i].testScore < 90 )
		{
			studentsArray[i].grade = 'B';
		}
		else
		{
			studentsArray[i].grade = 'A';
		}
	}
	return studentsArray;
}
/****************************************************************
printData
prints and formats student data
*****************************************************************/
void printData( studentType studentsArray[20] )
{
	studentData << left << "Student Name" << setw( 25 ) << right << "Test Score" << setw( 10 ) << "Grade" << endl;
	for ( int i = 0; i < 20; i++ )
	{
		studentData << left
			<< studentsArray[i].studentLName << ", "
			<< studentsArray[i].studentFName
			<< setw( 25 )
			<< right
			<< studentsArray[i].testScore
			<< setw( 10 )
			<< studentsArray[i].grade
			<< endl;
	}
}
/****************************************************************
findHighest
finds and prints highest grade amount
*****************************************************************/
int findHighest( studentType studentsArray[20] )
{
	int highGrade = studentsArray[0].testScore;
	for ( int i = 0; i < 20; i++ )
	{
		if ( highGrade < studentsArray[i].testScore )
		{
			highGrade = studentsArray[i].testScore;
		}
		else { };
	}

	studentData << "Highest Test Score: " << highGrade << endl;

	return highGrade;
}
/****************************************************************
printHighest
finds students with highest grade and prints their names
*****************************************************************/
void printHighest( studentType studentsArray[20], int highestGrade )
{
	studentData << "Students having the highest test score:" << endl;
	for ( int i = 0; i < 20; i++ )
	{
		if ( studentsArray[i].testScore == highestGrade )
		{
			studentData << studentsArray[i].studentLName << ", " << studentsArray[i].studentFName << endl;
		}
	}
	studentData.close( );
}
