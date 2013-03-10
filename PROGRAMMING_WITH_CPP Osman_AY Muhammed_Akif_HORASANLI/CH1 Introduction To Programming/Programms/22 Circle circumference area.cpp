/*
PROG:		Circle.cpp
DESCRIPTION:	Use constant M_PI as declared from the cmath library.
*/

#define _USE_MATH_DEFINES	
#include<cmath> 			// include the cmath library
#include<iostream>
using namespace std;

int main()
{
	// declare variables
	float radius, circumference, area;

	// get radius from user
	cout<<"Enter the length of the radius: ";
	cin>> radius;

	// calculate and show circumference
	circumference = 2 * M_PI * radius;
	cout<<"\nCircumference = "<<circumference<<endl;

	//calculate and show area
	area = M_PI * radius * radius;
	cout<<"Area = "<<area<<endl<<endl;

	system("PAUSE");
	return 0;
}
