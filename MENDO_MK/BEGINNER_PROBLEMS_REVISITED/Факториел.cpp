// Author: Bujar Mamudi
// Date: 21/12/2012
// Name: Factorial
// Description: 
//            INPUT: The first line is a natural number N (0 <= N <= 10) to calculate the factorial.
//            OUTPUT: The output consists of one line in which to print the result N!.

#include<iostream>
using namespace std;

//function prototype
int showF(int);

int main()
{
	//read input
	int n;
	cin>>n;

	//function call
	cout<<showF(n);

	return 0;
}

//function definition
int showF(int x)
{
	int prod = 1;
	for(int i=1; i<=x; i++)
	{
		prod *= i;
	}
		return prod;
}