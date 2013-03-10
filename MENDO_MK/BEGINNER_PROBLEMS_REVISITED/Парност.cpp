// Author: Bujar Mamudi
// Date: 21/12/2012
// Name:  Even/Odd
// Description: 
//            INPUT:  The first line is a natural number N (1 <= N <= 30000).
//            OUTPUT: The output consists of one line that should be examined "PAREN" (in capital letters, without quotes) if the number is even or write "NEPAREN" if the number is odd.

#include<iostream>
#include<string>
using namespace std;

//function prototype
string interpretResult(int);
int checkEven(int);

int main()
{
	//read input
	int n;
	cin>>n;

	//function call
	cout<<interpretResult(checkEven(n));

	return 0;
}

//function defintion
string interpretResult(int a)
{
	if (a == 1)
		return "PAREN";
	else
		return "NEPAREN";
}
int checkEven(int x)
{
	if (x % 2 == 0)
		return 1;
	else 
		return 0;
}