// Author: Bujar Mamudi
// Date: 21/12/2012
// Name: Middle digit
// Description: 
//            INPUT: In the first line a three digit number K is located (100 <= K <= 999).
//            OUTPUT: The output consists of one line in which to print the middle digit of the given number.

#include<iostream>
using namespace std;

//function prototype
int findMiddleDigit(int);

int main()
{
	// read input
	int k;
	cin>>k;

	// function call
	cout<<findMiddleDigit(k);

	return 0;
}

// function defintion
int findMiddleDigit(int x)
{
	// int temp;
	// get rid of last digit
	// temp = x / 10;
	// get rid of first digit
	// temp = x % 10;

	return x/10%10;
}
