/*
PROG:		HelloMessage.cpp
DESCRIPTION:	Get name from user and display message.
		Use string concatenation operator (+).
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
	// declare strings
	string firstName, surName;
	string bye = "Have a nice day!\n\n";

	// get name from user
	cout<<"Enter your first name: ";
	cin>> firstName;
	cout<<"Enter your surname: ";
	cin>>surName;

	// show message by using concatenation operator
	cout<<"\n\nHello "<<firstName + " " + surName + "."<<endl;
	cout<<bye;

	system("PAUSE");
	return 0;
}
