// Author: Bujar Mamudi
// Date: 21/12/2012
// Name: Letters
// Description: 
//            INPUT: The first line is a sign T, which needs to check whether it is a lower case letter, upercase letter, or special char.
//            OUTPUT: The output consists of one line in which to print the result, in accordance with the instructions shown above.

#include<iostream>
#include<string>
using namespace std;

// function prototype
int checkLower(char);
int checkUpper(char);
string interpretResult(int,int);

int main()
{
	// read input
	char t;
	cin>>t;

	//function call
	cout<<interpretResult(checkLower(t),checkUpper(t));

	return 0;
}

//function definition
int checkLower(char a)
{
	if (((int)a >= 97) && ((int)a <= 122))
		return 1;
	else 
		return 0;
}
int checkUpper(char a)
{
	if (((int)a >= 65) && ((int)a <= 90))
		return 1;
	else 
		return 0;
}
string interpretResult(int x,int y)
{
	if (x == 1)
		return "MALA";
	else if ( y == 1)
		return "GOLEMA";
	else 
		return "GRESKA";
}