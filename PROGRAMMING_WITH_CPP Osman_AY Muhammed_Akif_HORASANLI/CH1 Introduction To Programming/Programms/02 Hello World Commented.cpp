/*
PROG:		Hello_World.cpp
DESCRIPTION:	Understanding the structure of C++ program.
		Printing a line of text.
		Using comments.
*/

#include<iostream>
// includes the declarations of the basic standard input-output
// library in C++, and its functionality is going to be used later
// in the program.

using namespace std;
// Namespaces are containers that contain the declarations of all
// the elements of the standard C++ library

int main()		        // the only function in this program.
{
	cout<<"Hello World!";   // print "Hello World!"
	                        // cout is declared in the iostream 
	                        // file within the std namespace

	system("pause");        // stop and wait until user hits a button
	return 0;               // the main function ends properly
}
