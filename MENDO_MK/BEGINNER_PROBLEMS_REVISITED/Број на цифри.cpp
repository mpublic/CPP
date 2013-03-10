// Author: Bujar Mamudi
// Date: 21/12/2012
// Name: 
// Description: 
//            INPUT: The first line is a natural number N (0 <= N <= 30000) which should count the number of digits.
//            OUTPUT: The output consists of one line in which to print the number of digits of N.

#include<iostream>
using namespace std;

//function prototype
int findND(int);

int main()
{
	// read input
	int n;
	cin>>n;

	//function call
	cout<<findND(n);

	return 0;
}

//function defintion
int findND(int x)
{
	int i = 0;
	do
	{
		x /=10;
		i++;
	}
	while(x > 0);

	return i;
}