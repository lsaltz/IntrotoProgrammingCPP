/*
Debugging Check Sheet
Correct the syntax errors first.
Find one syntax error, fix and compile.
Then repeat.
After a successful compile, fix the logic errors.
*/

#include <iostream>
using namespace std;

int main()
{
    double piePrice = 4.35;
    int cents;
    double radius = 4.5;
    double circumference;
    double pi = 3.14;

    cents = 100 * piePrice;
    circumference = 2 * pi * radius;

    cout << "The cost of the apple pie in cents: " << cents << endl;
    cout << "I love pies  " << endl;
    cout << "The circumference of the circle is  " << endl;
    cout << "2 x pi x radius =  " << circumference << endl;

    cout << endl;
    system("pause");
    return 0;
}
