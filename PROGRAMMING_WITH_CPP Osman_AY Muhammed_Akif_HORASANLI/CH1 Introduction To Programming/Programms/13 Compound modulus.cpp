/*
PROG:	Operators
*/

#include<iostream>
using namespace std;

int main()					
{
	int mod, num1;
	num1 = 4;
	mod = 7;

	// mod = mod % num1;       i can write the same in a shorter way
	mod %= num1;
	
	cout<<mod<<endl;

	system("PAUSE");
	return 0;
}
