// Author: Bujar Mamudi
// Date: 21/12/2012
// Name: Square and Cube
// Description: 
//            INPUT: In the first row there is a natural number N (1 <= N <= 25) for which you have to find its square (N2) and cube (N3).
//            OUTPUT: The output is a single row where you should print the square and the cube of the number.

#include<iostream>
using namespace std;

// function prototype
int findSquare(int);
int findCube(int);

int main()
{
	// read input
	int x;
	cin>>x;

	// function call to find square and cube
	cout<<findSquare(x);
	cout<<" ";
	cout<<findCube(x);

	return 0;
}

// function defintion
int findSquare(int a)
{
	return a*a;
}

int findCube(int b)
{
	return b*b*b;
}