/*
* Lyndon R.Saltz
* August 8, 2020
* Chapter 10 Program 1
* The following is a header file for the class bookType
*/
#include <string>

using namespace std;


class bookType
{
public:
	void printbookTitle( );
	void printbookTitleAndISBN( );
	void setBookInfo( string, string, string, int, string[4], double, int, int );
	void printInfo( );
	bool isISBN( string );
	bool isTitle( string );
	int updateQuantity( int );
private:
	string title;
	string ISBN;
	string authors[4];
	int numAuthors;
	double price;
	int pubYear;
	string publisher;
	int copiesOfBooks;
};