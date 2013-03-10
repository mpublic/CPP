/*
PROG:		Initialization.cpp
DESCRIPTION:	Initialization of Variables
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string st1("I am learning ");	
	// st1 is being initialized to "I am learning"
	string st2 = "C++";				
	// st2 is being initialized to "C++"
	int num1 = 8, num2 = 5;			
	// num1 is being initialized to 8, num2 to 5
	float dec1 = 7.5, dec2 = 3.9;	
	// dec1 is being initialized to 7.5, dec 2 to 3.9
	char ch1 = 'A';					
	// ch1 is being initialized to 'A'
	bool bl1 = true, bl2 = false;	
	// bl1 is being initialized to true, bl2 is being initialized to false

	cout<<"st1 + st2 is: "<<st1 + st2<<endl;
	cout<<"num1 + num2 is: "<<num1 + num2<<endl;
	cout<<"dec1 + dec2 is: "<<dec1 + dec2<<endl;
	cout<<"ch1 is: "<<ch1<<endl;
	cout<<"bl1 is: "<<bl1<<endl;
	cout<<"bl2 is: "<<bl2<<endl<<endl;

	system("PAUSE");  return 0;
}

