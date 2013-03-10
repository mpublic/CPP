// Author: Bujar Mamudi
// Date: 21/12/2012
// Name: Two Digits
// Description: 
//            INPUT: In the first row there are two three digit numbers K and L (100 <= K, L <= 999). The numbers are separated by a character space.
//            OUTPUT: The output consists of one line in which to print the sum of the middle digits of the numbers.

#include<iostream>
using namespace std;

//function prototype
int findSum(int,int);
int findMiddleDigit(int);

int main()
{
	int k, l;
	cin>>k>>l;

	// function call
	cout<<findSum(findMiddleDigit(k),findMiddleDigit(l));

	return 0;
}

//function defintion
int findSum(int a,int b)
{
	return a+b;
}

int findMiddleDigit(int c)
{
	return c/10%10;
}
