/*
PROG:		Rectangle.cpp
DESCRIPTION:	Find the perimeter and area of a rectangle.
*/
#include<iostream>
using namespace std;

int main()
{
	// declare variables 
	int length, width, perimeter, area;

	// get user input
	cout<<"Enter rectangle length: ";
	cin>> length; 

	cout<<"Enter rectangle width: ";
	cin>> width;

	// calculate and show perimeter and area
	perimeter = 2 * ( length + width );
	cout<<"\nPerimeter = "<<"2 * ("<< length << " + " << width << ") = "    							<<perimeter<<endl;

	area = length * width;
	cout<<"Area = "<< length << " * " << width << "= "<<area<<endl;

	system("PAUSE");
	return 0;
}
