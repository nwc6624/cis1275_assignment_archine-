/*Noah Caulfield ncaulfield@cnm.edu
//Quiz 3, Cone volume calculation
11/14/20 */


// Driver.cpp 

# include <iostream>
#include "Cone.h"
using namespace std;

int main()
{
   // #define pi{ 3.1459265 }; //constant
	double height; //Variable declaration 
	double radius;
	double volume;
	char choice;
	 
	Header();		// cs 1275 quiz declaration  function 


	do {		//do/while until user selects "n" 
				// input the radius and height 
		cout << "Welcome! Please enter your figures as inches.\n";
		cout << "Enter a height:   ";
		cin >> height;
		cout <<endl<< "Enter a radius:  ";
		cin >> radius; 
		volume= CalcConeVolume(height, radius);
	    WriteConeVolume(volume, height, radius);



		cout << "Do you want to continue? (y/n, enter as lowercase) ";
		cin >> choice;
	} while (choice == 'y');

	cout << "\nHave a great day! Stay safe!\n";
	return 0;
}