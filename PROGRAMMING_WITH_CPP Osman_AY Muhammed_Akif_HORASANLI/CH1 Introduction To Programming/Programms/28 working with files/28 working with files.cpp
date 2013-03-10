/*	PROG:		ReadWriteFromTextFile.cpp
	DESCRIPTION:	Using input and output files.
	NOTE:	text file numbers.in must already exist in the project folder! 
*/
#include<fstream>
using namespace std;
int main()
{
	ifstream fin("number.in");  //open input file
	ofstream fout("number.out"); //create and open output file

	int num1, num2;
	fin>>num1 >>num2;  //read two integers from input file

	//Make calculations and write results in output file
	fout<<"sum is: "<<num1 + num2<<endl;
	fout<<"difference is: "<<num1 - num2<<endl;
	fout<<"product is: "<<num1 * num2<<endl;
	fout<<"integer quotient is: "<<num1/num2<<endl;
	fout<<"float quotient is: "<<(float)num1/num2<<endl;

	fin.close();   // close the input file
	fout.close();  //close the output file

	system("PAUSE"); 	return 0;
}

