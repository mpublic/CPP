/*
PROG:		ASCIItoChar.cpp
DESCRIPTION:	Convert ASCII Code to corresponding Character.
*/

#include<iostream>
using namespace std;

int main()
{
	int code;

	// get code from user
	cout<<"Enter the ASCII code [0 - 127]: ";
	cin>> code;

	// use (char) casting to convert and show character
	cout<<"\nThe corresponding character from the ASCII code " 
                            <<code<<" is: "<<(char)code<<endl<<endl;

	system("PAUSE");
	return 0;
}
