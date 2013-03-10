// Author: Bujar Mamudi
// Date: 21/12/2012
// Name: Sum with step 3
// Description: 
//            INPUT: The first line is a natural number K (1 <= K <= 100).
//            OUTPUT: The output consists of one line in which to print the sum of the numbers.

#include<iostream>
using namespace std;

// function prototype
int findSum(int);

int main()
{
	//read input
	int k;
	cin>>k;

	// function call
	cout<<findSum(k);

	return 0;
}

//function definition
int findSum(int x)
{
	int sum=0;
	for(int i = 0, j=1; i <x; i++, j+=3)
	{
		sum += j;
	}

	return sum;
}