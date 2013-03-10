/*
PROG:		CharToASCII.cpp
DESCRIPTION:	Convert character to ASCII code.
*/

#include<iostream>
using namespace std;

int main()
{
	char character;

	// get character from user
	cout<<"Enter a single character: ";
	cin>> character;

	// use (int) casting to convert character and show code
	cout<<"\nThe corresponding ASCII code for the character " 		<<character<<" is: "<<(int)character<<endl<<endl;

	system("PAUSE");
	return 0;
}
