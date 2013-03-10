// Author: Bujar Mamudi
// Date: 21/12/2012
// Name: LCM
// Description: 
//            INPUT: In the first row are the natural numbers M and N (1 <= M, N <= 500). The numbers are separated by a character space.
//            OUTPUT: The output consists of one line in which to print the calculated LCM.

#include<iostream>
using namespace std;

/* ********************************
int findLCM(int, int);
********************************* */

// function prototype
int showLCM(int,int,int);
int findGCD(int,int);

int main()
{
	//read input
	int m, n;
	cin>>m>>n;

/* ********************************
	cout<<findLCM(m,n);
********************************** */

	//function call
	cout<<showLCM(m,n,findGCD(m,n));

	return 0;
}

/* ****************************************
int findLCM(int x, int y)
{
	for(long int i = 1; i< 250000; i++)
	{
		if ((i % x == 0) && (i % y == 0) )
		{
			return i;
		    break;
		}
	}
}
****************************************** */

// function defintion
int showLCM(int a,int b,int gcd)
{
	return a*b/gcd;
}

int findGCD(int a,int b)
{
	for (;;)
    {
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}