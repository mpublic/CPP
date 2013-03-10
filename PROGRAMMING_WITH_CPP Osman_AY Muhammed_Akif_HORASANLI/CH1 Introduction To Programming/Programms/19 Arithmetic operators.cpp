/*
PROG:			Arithmetic.cpp
DESCRIPTION:		Demonstrating arithmetic operators.
*/
#include<iostream>
using namespace std;

int main()					
{
	// declare two variables
	int num1, num2;

	// get input from user
	cout<<"Enter the two integers: ";
	cin>> num1 >> num2;

	// calculate sum
	cout<<endl<<num1<<"+"<<num2<<"="<<num1 + num2<<endl;
	cout<<num2<<"+"<<num1<<"="<<num2 + num1<<endl<<endl;

	// calculate difference
	cout<<num1<<"-"<<num2<<"="<<num1 - num2<<endl;
	cout<<num2<<"-"<<num1<<"="<<num2 - num1<<endl<<endl;

	// calculate product
	cout<<num1<<"*"<<num2<<"="<<num1 * num2<<endl;
	cout<<num2<<"*"<<num1<<"="<<num2 * num1<<endl<<endl;

	// calculate quotient as integer and then as float type
	cout<<"integer:  "<<num1<<"/"<<num2<<"="<<num1 / num2<<endl;
	cout<<"float:    "<<num1<<"/"<<num2<<"="<<(float)num1 / num2<<endl;

	cout<<"integer:  "<<num2<<"/"<<num1<<"="<<num2 / num1<<endl;
	cout<<"float:    "<<num2<<"/"<<num1<<"="<<(float)num2 / num1<<endl<<endl;

	// calculate modulus
	cout<<num1<<"%"<<num2<<"="<<num1 % num2<<endl;
	cout<<num2<<"%"<<num1<<"="<<num2 % num1<<endl<<endl;

	system("PAUSE");
	return 0;
}
