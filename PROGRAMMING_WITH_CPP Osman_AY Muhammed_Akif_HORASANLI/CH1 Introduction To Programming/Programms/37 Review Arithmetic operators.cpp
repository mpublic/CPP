#include<iostream>
using namespace std;

int main()
{
	int a = 1, b = 2, c = 3;
	a = b + c;  b = a - b * c;
	c = (a + c) / (c - b);   a = a % b / c;  b = -b;

	cout<<a<<" "<<b<<" "<<c<<endl;
	system("PAUSE");
	return 0;
}
