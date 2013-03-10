// Author: Bujar Mamudi
// Date: 21/12/2012
// Name: Sum of digits
// Description: 
//            INPUT: The first line is a natural number N (0 <= N <= 30000) which need to calculate the sum of digits.
//            OUTPUT: The output consists of one line in which to print the sum of the digits of N.

#include<iostream>
using namespace std;

//function prototype
int findSumD(int);

int main()
{
	//read input
	int n;
	cin>>n;

	//function call
	cout<<findSumD(n);

	return 0;
}

//function defintion
int findSumD(int x)
{
	int sum = 0;
	do
	{
		sum += x % 10;
		x /= 10;

	}
	while(x>0);

	return sum;
}