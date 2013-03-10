/*
PROG:	Sum.cpp
*/

#include<iostream>
using namespace std;

int main()					
{
	// num1, num2, and sum are three 
	// variables of type integer
	int num1, num2, sum;

	cout<<"Enter two integers: "<<endl;
	cin>> num1 >> num2;
	// cin reads two values for num1 and num2.

	// sum gets the value of num1 + num2;
	sum = num1 + num2;

	cout<<"Sum is: "<<sum<<endl;

	system("PAUSE");
	return 0;
}
