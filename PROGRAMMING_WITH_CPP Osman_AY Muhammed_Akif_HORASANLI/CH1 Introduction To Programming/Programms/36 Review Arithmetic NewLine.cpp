#include<iostream>
using namespace std;

int main()
{
	int a = 1, b = 2;
	cout << a << " " << b;
	a = a + b;
	b = a + b;
	cout << b << " " << a;
	return 0;
}
