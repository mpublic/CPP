#include<iostream>
using namespace std;

int main()
{
	// given integers
	int a = 5, b = 3;

	// show values
	cout<<"Before swapping: a = "<<a<<" and b = "<<b<<endl;

	// without a temporary variable
	a = a + b;     // a = 5 + 3 = 8
	b = a - b;     // b = 8 - 3 = 5
	a = a - b;     // a = 8 - 5 = 3

	// show values
	cout<<"After swapping:  a = "<<a<<" and b = "<<b<<endl;

	system("PAUSE");
	return 0;
}