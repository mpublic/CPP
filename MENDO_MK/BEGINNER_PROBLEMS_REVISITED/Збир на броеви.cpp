// Author: Bujar Mamudi
// Date: 21/12/2012
// Name: Sum of N integers
// Description: 
//            INPUT: The first line is a natural number N (1 <= N <= 10). In the next N rows is one integer i (-1000 <= X i <= 1000) which should be added to the sum. 
//            OUTPUT: The output consists of one line in which to print the sum of the input numbers.

#include<iostream>
#include<vector>
using namespace std;

//function prototype
void readVector(int, vector<int>&);
int findSum(vector<int>);

int main()
{
	//read input
	int n;
	cin>>n;

	vector<int> myArray;

	//function call
	readVector(n, myArray);
	cout<<findSum(myArray);

	return 0;
}

void readVector(int a, vector<int>& myArray)
{
	int temp;
	for(int i = 0; i<a; i++)
	{
		cin>>temp;
		myArray.push_back(temp);
	}
}

int findSum(vector<int> myArray)
{
	int sum = 0;
	for(int i = 0; i<myArray.size(); i++)
	{
		sum +=myArray[i];
	}
	return sum;
}