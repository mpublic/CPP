/*
PROG:	Operators
*/

#include<iostream>
using namespace std;

int main()					
{
	int num1, bitXor;
	num1 = 25;
	bitXor = 19;

	// bitOr = bitXor ^ num1;       

	// 19 in binary is 0001 0011       
	// 25 in binary is 0001 1001     we aply the logical XOR operation we get
	//                 0000 1010     which in decimal system is 10
	bitXor ^= num1;

	cout<<bitXor<<endl;

	system("PAUSE");
	return 0;
}
