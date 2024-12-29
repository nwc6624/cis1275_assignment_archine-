/*Noah Caulfield mcaulfield@cnm.edu
//Char Array Demo
10/18/20 */

#include <iostream>
using namespace std; 

int main() {
	char first[20], middle[20], last[20]; 
	char name[50], address[50], city[50];
	char state[5], zip[15];

	//first ask for information
	cout << "Enter first name: ";
	cin.getline(first, 20); 
	cout << "Enter a middle name: ";
	cin.getline(middle, 20);
	cout << "Enter a last name: ";
	cin.getline(last, 20); 

	cout << "Enter a street address: ";
	cin.getline(address, 50); 
	cout << "Enter city: ";
	cin.getline(city, 50); 
	cout << "Enter two letter state abbreviation: ";
	cin.getline(state, 20);
	cout << "Enter a zip code: ";
	cin.getline(zip, 15); 

	strcpy_s(name, last);
	strcat_s(name, ", ");
	strcat_s(name, first);

	strcat_s(name, ", ");
	
	strncat_s(name, middle, 1); 
	strcat_s(name, ". "); 

	cout<<"\n Here is the mailing lable.\n" << name << endl << address << endl << city << ", " << state << " " << zip << endl; 
	////first use a c++ string
	//string strObject = "This text is a string object!";
	////declare and intalize c-string 
	//char cppLove[20] = "I love C++"; 

	////declare and fill individual elements
	////Whoops no null placed here
	//char noNullText[20];

	//noNullText[0] = 'w';
	//noNullText[1] = 'h';
	//noNullText[2] = 'o';
	//noNullText[3] = 'o';
	//noNullText[4] = 'p';
	//noNullText[5] = 's';
	//noNullText[6] = ' ';
	//noNullText[7] = 'n';
	//noNullText[8] = 'o';
	//noNullText[9] = ' ';
	//noNullText[10] = 'n';
	//noNullText[11] = 'u';
	//noNullText[12] = 'l';
	//noNullText[13] = 'l';

	////declare, but dont put anything
	//char noText[20]; 

	//cout << "Write out four pieces of the text data." << endl;
	//cout << "String object: " << strObject << endl;
	//cout << "     C++ love: " << cppLove << endl;
	//cout << "   noNullText: " << noNullText << endl;
	//cout << "      No Text: " << noText << endl; 

	//char charArray[25];
	//cout << "Please enter some text:  "; cin.getline(charArray, 25);
	//cout << endl << "Texed you entered is: " << charArray << endl;

	//char buffer[25]; 
	//int intNum1;
	//float floatNum2;

	//cout << "Please enter a whole number: ";
	//cin.getline(buffer, 25);

	//intNum1 = atoi(buffer);
	////get float from user 
	//cout << "Please enter a decimal number: ";
	//cin.getline(buffer, 25);
	//floatNum2 = atof(buffer);

	////show results 
	//cout << endl << "The integer was: " << intNum1 << endl; 
	//cout << "The float was: " << floatNum2 << endl;
	//cout << "The sum is: " << intNum1 + floatNum2 << endl; 






	return 0; 
}