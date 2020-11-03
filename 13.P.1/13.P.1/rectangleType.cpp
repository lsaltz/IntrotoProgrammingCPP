/*
Lyndon Saltz
Title: Chapter 13 Program 1
Due Date: 11/10/2020
Description: Class rectangleType
*/
#include<iostream>
#include<cmath>
#include "Header.h"

using namespace std;

void rectangleType::setDimension( double l, double w )
{
	if ( l >= 0 )
	{
		length = 1;
	}
	else
	{
		length = 0;
	}
	if ( w >= 0 )
	{
		width = w;
	}
	else
	{
		width = 0;
	}
}

double rectangleType::getLength( ) const
{
	return length;
}

double rectangleType::getWidth( ) const
{
	return width;
}

double rectangleType::area( ) const
{
	return length * width;
}

double rectangleType::perimeter( ) const
{
	return 2 * (length * width);
}

void rectangleType::print( ) const
{
	cout << "Length = " << length << "Width = " << width;
}

rectangleType rectangleType::doubleDimensions( )
{
	length = 2 * length;
	width = 2 * width;

	return *this;
}

rectangleType& rectangleType::setLength( double l )
{
	length = l;
	return *this;
}

rectangleType& rectangleType::setWidth( double w )
{
	width = w;
	return *this;
}

rectangleType::rectangleType( double l, double w )
{
	setDimension( l, w );
}

rectangleType::rectangleType( )
{
	length = 0;
	width = 0;
}