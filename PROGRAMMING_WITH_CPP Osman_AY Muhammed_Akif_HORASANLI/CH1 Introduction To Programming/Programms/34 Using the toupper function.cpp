#include<iostream>
using namespace std;

int main()
{
	char letter;

	// get letter from user
	cout<<"Please enter a single letter: ";
	cin>> letter;

	// show letter
	cout<<"\nYou have entered the letter: "<<letter<<endl;
	
	// convert to upper case
	letter = toupper(letter);

	// show letter
	cout<<"The letter in uper case is:  "<<letter<<endl<<endl;

	system("PAUSE");
	return 0;
}
