/*
PROG:	Operators
*/

#include<iostream>
using namespace std;

int main()					
{
	int num1, shiftLeft;
	num1 = 2;
	shiftLeft = 23;

	// shiftLeft = shiftLeft << num1;  

	// 23 in binary is 0001 0111      we shift 2 times from left side and 
	// the result is   0101 1100      in decimal system is 92
	shiftLeft <<= num1;

	cout<<shiftLeft<<endl;

	system("PAUSE");
	return 0;
}
