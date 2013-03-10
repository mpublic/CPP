/*
PROG:	Operators
*/

#include<iostream>
using namespace std;

int main()					
{
	int num1, bitAnd;
	num1 = 25;
	bitAnd = 19;
	
	// bitAnd = bitAnd & num1;       

	// 19 in binary is 0001 0011       
	// 25 in binary is 0001 1001     we aply the logical AND operation we get
	//                 0001 0001     which in decimal system is 17
	bitAnd &= num1;

	cout<<bitAnd<<endl;

	system("PAUSE");
	return 0;
}
