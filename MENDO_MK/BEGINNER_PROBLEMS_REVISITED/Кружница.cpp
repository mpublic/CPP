// Author: Bujar Mamudi
// Date: 21/12/2012
// Name: Circle Line
// Description: 
//            INPUT: The first line is the natural number r (1 <= R <= 25), which represents the radius of the given circle.
//            OUTPUT: The output consists of one line in which to print the perimeter (2 * R * π) and area (R * R * π) of the circle.
//            RESTRICTION: Print the result in 4 decimal places.

#include<iostream>
#include <iomanip>  // library where setprecision() is defined
using namespace std;

// function prototype
float findPerimeter(int);
float findArea(int);

// global constant 
#define PI 3.1415
//const float PI = 3.1415

int main()
{
	//get input
	int r;
	cin>>r;

	// function call
	cout<<setprecision(4)<<fixed<<findPerimeter(r);
	cout<<" ";
	cout<<setprecision(4)<<fixed<<findArea(r);

	return 0;
}

// function definition
float findPerimeter(int a)
{
	return 2*PI*a;
}

float findArea(int b)
{
	return PI*b*b;
}