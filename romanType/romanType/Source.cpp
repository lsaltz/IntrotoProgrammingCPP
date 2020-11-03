#include"roman.h"
#include<string>
#include<cmath>

using namespace std;

int main( )
{
	string romanAnswer;
	romanType romanInput;
	int decimalOutput;

	romanAnswer = romanInput.storeNumber( );
	decimalOutput = romanInput.r2D( romanAnswer );
	romanInput.printChoice( romanAnswer, decimalOutput );

}