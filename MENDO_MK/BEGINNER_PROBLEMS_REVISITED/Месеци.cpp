// Author: Bujar Mamudi
// Date: 21/12/2012
// Name: Months
// Description: 
//            INPUT: The first line is a natural number M (1 <= M <= 12), indicating the reference number of the month in the year.
//            OUTPUT: The output consists of one line in which to print the number of days entered month.

#include<iostream>
using namespace std;

// function prototype
int findMonth(int);

int main()
{
	// read input
	int m;
	cin>>m;

	cout<<findMonth(m);

	return 0;
}

// function defintion

int findMonth(int x)
{
	if (x == 2)
		return 28;
	else if ((x == 1) || (x == 3) || (x == 5 ) || (x == 7 ) || (x == 8 ) || (x == 10 ) || (x == 12 ))
		return 31;
	else
		return 30;
}