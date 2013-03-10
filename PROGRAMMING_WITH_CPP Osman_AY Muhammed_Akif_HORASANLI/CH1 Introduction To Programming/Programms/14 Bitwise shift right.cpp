/*
PROG:	Operators
*/

#include<iostream>
using namespace std;

int main()					
{
	int num1, shiftRight;
	num1 = 2;
	shiftRight = 23;

	// shiftRight = shiftRight >> num1;  

	// 23 in binary is 0001 0111      we shift 2 times from right side and 
	// the result is   0000 0101      in decimal system is 5
	shiftRight >>= num1;

	cout<<shiftRight<<endl;

	system("PAUSE");
	return 0;
}
