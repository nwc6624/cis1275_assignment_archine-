#include <iostream>
using namespace std;

/***************************************************
 *Program PointerDemo
 *Programmer: Rob Garner (rgarner7@cnm.edu)
 *Date: 2014070
 *Purpose: Demonstrate pointers.
 * 
 * Edited by Noah Caulfield, ncaulfield@cnm.edu
 * 10/22/20
 * Reference demo
 * 
 * referencesDemo.cpp
 ***************************************************/
void math(double num1, double num2, double& rSum, double& rSub);

int main()
{
	double number1 = 4;
	double number2 = 6;
	double summation = 0;
	double subtraction = 0;

	math(number1, number2, summation, subtraction);

	cout << endl << "Summation is: " << summation << endl;
	cout << endl << "Subtraction is: " << subtraction << endl;
	return 0;
}

void math(double num1, double num2, double& rSum, double& rSub)
{
	rSum = num1 + num2;
	rSub = num1 - num2;
}


