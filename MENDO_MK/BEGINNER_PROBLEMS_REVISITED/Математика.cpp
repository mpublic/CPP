// Author: Bujar Mamudi
// Date: 21/12/2012
// Name: Matematika
// Description: 
//            INPUT: In the first row X and Y are integers (1 <= Y <= X <= 100). In all test examples, Y will be a divisor of X..
//            OUTPUT: The output consists of one line in which to print the sum, difference, product and quotient of the given numbers.

#include<iostream>
using namespace std;

// function prototypes
int findSum(int,int);
int findDiff(int,int);
int findProd(int,int);
float findQuot(int,int);

int main()
{
	//read input
	int x, y;
	cin>>x>>y;

	// call functions to find sum, diff, prod, quot
	cout<<findSum(x,y);
	cout<<" ";
	cout<<findDiff(x,y);
	cout<<" ";
	cout<<findProd(x,y);
	cout<<" ";
	cout<<findQuot(x,y);

	return 0;
}

// function definitions
int findSum(int a,int b)
{
	return a+b;
}
int findDiff(int a,int b)
{
	return a-b;
}
int findProd(int a,int b)
{
	return a*b;
}
float findQuot(int a,int b)
{
	return (float) a/b;
}
