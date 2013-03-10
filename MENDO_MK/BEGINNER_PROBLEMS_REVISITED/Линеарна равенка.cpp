// Author: Bujar Mamudi
// Date: 21/12/2012
// Name: Linear Equation
// Description: 
//            INPUT: In the first row are integers a and b (-20 <= a, b <= 20), which are the parameters of the linear equation. The numbers are separated by a character space.
//            OUTPUT: The output consists of one line in which to print the answer - the solution or comment in accordance with the instructions of the task. Comments need to print in lowercase (as given above, only without the quotes)

#include<iostream>
#include<string>
#include<sstream>  // convert float to string
using namespace std;

string findSolutionLE(int,int);

int main()
{
	// read input
	int a, b;
	cin>>a>>b;

	// function call
	
	cout<<findSolutionLE(a,b);

	return 0;
}

//function definition
string findSolutionLE(int a,int b)
{
	if ((a == 0) && (b != 0))
		return "nema resenie";
	else if ((a == 0) && (b == 0))
		return "ima beskonecno resenija";

	else  
	{
	 	 stringstream ss (stringstream::in | stringstream::out);
		 ss << -(float)(b)/(float)(a);
		 string temp = ss.str();
		 return temp;
	 }
}