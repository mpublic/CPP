#include<iostream>
using namespace std;

int main()
{
	// given integers
	int a = 5, b = 3;

	// show values
	cout<<"Before swapping: a = "<<a<<" and b = "<<b<<endl;

	// use a temporary variable
	int temp;
    	temp = a;
	a = b;
	b = temp;

	// show values
	cout<<"After swapping:  a = "<<a<<" and b = "<<b<<endl;

	system("PAUSE");
	return 0;
}
