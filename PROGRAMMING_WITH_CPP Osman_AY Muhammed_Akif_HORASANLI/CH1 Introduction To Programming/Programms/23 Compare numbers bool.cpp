/*
PROG:		Bool.cpp
DESCRIPTION:	Compare if first is bigger than second
*/

#include<iostream>
using namespace std;

int main()
{
	float num1, num2;

	// get user input
	cout<<"Enter the firs number: ";
	cin>> num1;
	cout<<"Enter second number: ";
	cin>> num2;

	// compare if first is greater
	cout<<endl<< (num1 > num2)<<endl<<endl;

	system("PAUSE");
	return 0;
}
