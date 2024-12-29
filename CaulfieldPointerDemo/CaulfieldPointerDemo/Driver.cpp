//Noah Caulfield ncaulfield@cnm.edu
// Pointer demo exercize
//10/20/20
//purpose: demostrate pointers



//Driver.cpp
#include <string>
#include<iostream>
using namespace std;

void math(double num1, double num2, double sum, double sub);

int main() {
	double number1{ 6 };
	double number2{ 4 };
	double summation{ 0 };
	double subtraction{ 0 };
	//cout << "number1: " << number1 << endl;
	//cout << "address of number1: " << &number1 << endl;

	//declare pointer and assign address of num1 to it
	//double* ptrNum;
	//ptrNum = &number1;
	//cout << endl << "ptrNum: " << ptrNum << endl; 
	math(number1, number2, summation, subtraction);

	//summation = Math(number1, number2);
	cout << endl << "summation is: " << summation << endl;
	cout << endl << "subtraction is: " << subtraction << endl;


	return 0;
}


void  Math(double num1, double num2, double* ptrSum, double* ptrSub) {

	*ptrSum = num1 + num2;
	*ptrSub = num1 - num2;


	//cout << "\n summation is: " << *ptrSum << endl;
	//cout<< "\n subtraction is: " << *ptrSub << endl;
}