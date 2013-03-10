// Author: Bujar Mamudi
// Date: 21/12/2012
// Name: Sorting
// Description: 
//            INPUT: In the first row are the numbers a, b and c (0 <= a, b, c <= 500). The numbers are separated by a character space.
//            OUTPUT: The output consists of one line in which to find the numbers a, b and c, arranged in ascending order.

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//function prototype
int mySort(int &,int &,int &);

int main()
{
	// read input
	int a, b, c;
	cin>>a>>b>>c;

/* *********************************************
	// SOLUTION 1: USING VECTORS
	vector<int> arrayA;
	arrayA.push_back(a);
	arrayA.push_back(b);
	arrayA.push_back(c);

	//sort from smallest to largest 
	sort(arrayA.begin(), arrayA.end());
	//shor result
	for (int i=0; i<3; i++)
	{
		cout<<arrayA[i]<<" ";
	}
****************************************** */

	// function call
	mySort(a,b,c);
	cout<<a<<" "<<b<<" "<<c;
	
	return 0;
}

// function definition
int mySort(int &x, int &y, int &z)
{
	if( x > z)
		swap(x,z);
	if(x > y)
		swap(x,y);
	if(y>z)
		swap(y,z);

	return 0;
}
