/*
PROG:		SizeOf.cpp
C++ variable types and their sizes in bytes.
*/

#include<iostream>
using namespace std;

int main()
{
	cout<<"int = "<<sizeof(int)<<endl;
	cout<<"short int = "<<sizeof(short int)<<endl;
	cout<<"long int = "<<sizeof(long int)<<endl;
	cout<<"long long int = "<<sizeof(long long int)<<endl<<endl;

	cout<<"float = "<<sizeof(float)<<endl;
	cout<<"double = "<<sizeof(double)<<endl;
	cout<<"long double = "<<sizeof(long double)<<endl<<endl;

	cout<<"bool = "<<sizeof(bool)<<endl<<endl;
	
	cout<<"char = "<<sizeof(char)<<endl<<endl;

	system("PAUSE");
	return 0;
}
