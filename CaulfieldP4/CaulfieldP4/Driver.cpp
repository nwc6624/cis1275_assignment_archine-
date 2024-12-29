/*Noah Caulfield mcaulfield@cnm.edu
//Project 4, Credit Card Number Validation
10/6/20 */


// Driver.cpp 

# include <iostream>
#include "Functions.h"
using namespace std;


int main()
{
	string input;
	string cardNumInput;
	char choice;
	WriteHeader();		// cs 1275 declaration  


	do {		//do/while until user selects 
				// input the card number
		cout << "Enter a credit card number:   ";
		cin >> cardNumInput;
		cout << "\n";

		if (ValidateInput(cardNumInput))
			cout << cardNumInput << " is a valid number\n";
		else
			cout << cardNumInput << " is not a valid number\n";
		// ask if the user wants to continue
		cout << "Do you want to continue? (y/n, enter as lowercase) ";
		cin >> choice;
	} while (choice == 'y');

	cout << "\nHave a great day!\n";
	return 0;
}