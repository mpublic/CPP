// Author: Bujar Mamudi
// Date: 21/12/2012
// Name: Fibonnacci Numbers
// Description: 
//            INPUT: The first line is a natural number N (2 <= N <= 1000).
//            OUTPUT: The output consists of several rows that need to print Fibonachievite numbers smaller or equal to the number N (each in its own right).

#include<iostream>
using namespace std;

void showFib(int);

int main()
{
	//read input
	int n;
	cin>>n;

	//function call
	showFib(n);

	return 0;
}

// function definition
void showFib(int x)
{
	int first = 1, second = 1;
	cout<<first<<endl<<second<<endl;

	int temp;
	do
	{
		temp = first + second;

		if( x <= temp)
		{
			break;
		}
		cout<<temp<<endl;
		
		swap(first,second);
		swap(second,temp);
	}
	while(x>temp);

}

