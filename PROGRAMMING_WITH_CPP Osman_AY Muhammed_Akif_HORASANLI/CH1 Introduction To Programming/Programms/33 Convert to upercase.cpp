#include<iostream>
using namespace std;
int main()
{
	char letter;
	cout<<"Please enter a single lower case letter: ";
	cin>> letter;
	cout<<"\nYou have entered the letter: "<<letter<<endl;

	// get ASCII code for letter with integer casting
	int code;
	code = (int) letter;

	//check if lower case
	if (code > 96)
	{	letter = char(code - 32);   	}
	else
	{	letter = char(code);		}
	cout<<"The letter in upper case is:  "<<letter<<endl<<endl;
	system("PAUSE"); 	return 0;
}
