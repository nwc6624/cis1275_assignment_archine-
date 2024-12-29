/*Noah Caulfield ncaulfield@cnm.edu
//Quiz 3, Cone volume calculation 
11/14/20 */

//Cone.cpp
//Function bodies 
#include "Cone.h"
#include <iostream>

void Header()
{

    cout << "Name: Noah Caulfield\n"
        << "Email: ncaulfield@cnm.edu\n"
        << "File name: CaulfieldQ3 \n\n";

    cout << "Quiz 3: The C++ Cone Volume Program.\n";
    cout << "The objective of this program is to to find the volume of a cone \n\n";

}
//--------------------------------------------------
// This function is to return the volume of a cone using the following formula:
// v =(pi* r^2 *h)/3
double CalcConeVolume(double height, double radius)
{
    const double pi= 3.1459265; //constant
    double volume{ 0 };
    volume = ((pi) * (radius * radius) * height)/3; 

	return volume;
}
//--------------------------------------------------
// This function prints the calculated volume, original height, and length 
// It returns nothing
void WriteConeVolume(double volume, double height, double length)
{
    cout << "**************************************\n";
    cout << "\nThe height was: " << height << endl;
    cout << "The length was: " << length <<endl;
    cout << "\nThe volume is determined to be: " << volume <<" cubic inches.\n"<< endl;
    cout << "**************************************\n";
}

