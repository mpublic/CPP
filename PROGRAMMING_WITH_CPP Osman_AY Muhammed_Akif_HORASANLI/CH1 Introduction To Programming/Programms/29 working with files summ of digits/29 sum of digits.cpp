#include<fstream>
using namespace std;
int main()
{
	ifstream fin("number.in"); //open input file
	ofstream fout("sum.out");  // create and open output file
	int input;
	fin>> input; //read number from file
	int firstDigit, secondDigit, thirdDigit;
	// integer division with 100 will leave only first digit
	firstDigit = input /100;
	// subtract the number with 100 * first digit  to eliminate first digit
	// you are left with two digits, to save the second,integer divide with 10
	secondDigit = (input - (100 * (input / 100)))/10;
	// modulus with 10 will leave only the last digit
	thirdDigit = input % 10;

	fout<<firstDigit<<" "<<secondDigit<<" "<<thirdDigit<<endl;
	fout<<"Sum of digits is: "<<firstDigit<<" + "<<secondDigit<<" + " 	 		<<thirdDigit<<" = "<<firstDigit + secondDigit +thirdDigit<<endl;

	fin.close(); //close input file
	fout.close(); //close output file

	system("PAUSE"); 	return 0;
}
