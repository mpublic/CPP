// Author: Bujar Mamudi
// Date: 21/12/2012
// Name: Triangle
// Description: 
//            INPUT: In the first row are the numbers a, b and c (1 <= a, b, c <= 30). The numbers are separated by a character space. 
//            OUTPUT: The output consists of one line in which to print "DA" (in capital letters, without quotes) if the numbers could be sides of a triangle, or "NE" if the numbers could be sides of the triangle.

#include<iostream>
#include<string>
#include <cmath>  // absolute value
using namespace std;

//function prototype
string interpretResult(int, int, int);
int checkTriangle(int,int,int);

int main()
{
	// read input
	int a, b, c;
	cin>>a>>b>>c;

	//function call
	cout<<interpretResult(checkTriangle(a, b, c), checkTriangle(b, c, a), checkTriangle(c, a, b));

	return 0;
}

string interpretResult(int a, int b, int c)
{
	if ((a == 1) && (b == 1) && (c == 1))
		return "DA";
	else 
		return "NE";

}
int checkTriangle(int x, int y, int z)
{
	if ( (x+y>z) && (abs(x-y)<z)) 
		return 1;
	else 
		return 0;
}