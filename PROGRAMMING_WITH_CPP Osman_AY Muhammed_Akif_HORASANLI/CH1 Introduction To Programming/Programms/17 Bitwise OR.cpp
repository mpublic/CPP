/*
PROG:	Operators
*/

#include<iostream>
using namespace std;

int main()					
{
	int num1, bitOr;
	num1 = 25;
	bitOr = 19;
	
	// bitOr = bitOr | num1;       

	// 19 in binary is 0001 0011       
	// 25 in binary is 0001 1001     we aply the logical OR operation we get
	//                 0001 1011     which in decimal system is 27
	bitOr |= num1;

	cout<<bitOr<<endl;

	system("PAUSE");
	return 0;
}
