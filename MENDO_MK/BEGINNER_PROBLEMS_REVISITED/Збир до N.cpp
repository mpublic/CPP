// Author: Bujar Mamudi
// Date: 21/12/2012
// Name: Sum to N
// Description: 
//            INPUT: The first line is a natural number N (1 <= N <= 130).
//            OUTPUT: The output consists of one line in which to print the sum of the numbers.

#include<iostream>
using namespace std;

//function prototype
int findSum(int);

int main()
{
	//read input
	int n;
	cin>>n;

	//function call
	cout<<findSum(n);

	return 0;
}

// function definition
int findSum(int x)
{
	int sum = 0;
	for(int i = 0; i <= x; i++)
	{
		sum += i;
	}
	return sum;
}