/*
Lyndon Saltz
Title: Chapter 13 Program 1
Due Date: 11/10/2020
Description: Header file for rectangleType
*/
#include<iostream>
#include<cmath>

using namespace std;

class rectangleType
{
public:
	void setDimension( double l, double w );
	double getLength( ) const;
	double getWidth( ) const;
	double area( ) const;
	double perimeter( ) const;
	void print( ) const;
	rectangleType doubleDimensions( );

	rectangleType& setLength( double l );
	rectangleType& setWidth( double w );
	rectangleType( double l = 0.0, double w = 0.0 );
	rectangleType( );
private:
	double length;
	double width;
};