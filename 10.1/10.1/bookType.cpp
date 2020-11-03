/*
* Lyndon R.Saltz
* August 8, 2020
* Chapter 10 Program 1
* The following defines the functions for the bookType class.
*/
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "bookType.h" 

using namespace std;

void bookType::printbookTitle( )    //prints book title
{
    cout << "Title: " << title << endl;
}
void bookType::printbookTitleAndISBN( )     //prints title and ISBN
{
    cout << "Title: " << title << " ISBN: " << ISBN << endl;
}

void bookType::setBookInfo( string t, string isbn, string pub, int pY, string authrs[4], double c, int amt, int aC )
{
    //sets Book Information
    title = t;
    ISBN = isbn;
    publisher = pub;
    pubYear = pY;
    for ( int i = 0; i < 4; i++ )
    {
        authors[i] = authrs[i];
    }
    price = c;
    copiesOfBooks = amt;
    numAuthors = aC;
}

void bookType::printInfo( ) //prints book information
{
    cout <<"Title: " << title << endl;
    cout << "ISBN: " << ISBN << endl;
    cout << "Publisher: " << publisher << endl;
    cout << "Year Published: " << pubYear << endl;
    cout << "Number of Authors: " << numAuthors << endl;
    cout << "Authors:" << endl;
    for ( int i = 0; i < 4; i++ )
    {
        cout << authors[i] << endl;
    }
    cout << "Copies: " << copiesOfBooks << endl;
    cout << "Price: " << price;
}

bool bookType::isISBN( string isbn )    //checks if isbn matches
{
    if ( isbn == ISBN )
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool bookType::isTitle( string t )  //checks if title matches
{
    if ( title == t )
    {
        return true;
    }
    else
    {
        return false;
    }
}

int bookType::updateQuantity( int c )   //updates book quantity
{
    c = copiesOfBooks;
    return c;
}