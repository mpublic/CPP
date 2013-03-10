// Author: Bujar Mamudi
// Date: 21/12/2012
// Name: Operations
// Description: 
//            INPUT: In the first row are the natural numbers a and b (1 <= a, b <= 20). In the second row is given the sign of the arithmetic operation to be performed.
//            OUTPUT: The output consists of one line in which to print the result of the arithmetic operation performed.

#include<iostream>
using namespace std;

//function prototype
float performOP(char, int, int);

int main()
{
	// read input
	int a,b;
	cin>>a>>b;
	char op;
	cin>>op;

	//function call
	cout<<performOP(op, a, b);

	return 0;
}

//function definition
float performOP(char op,  int a, int b)
{
	if( op == '+')
		return (float)a+b;
	if( op == '-')
		return (float)a-b;
	if( op == '*')
		return (float)a*b;
	if( op == '/')
		return (float)a/b;
}