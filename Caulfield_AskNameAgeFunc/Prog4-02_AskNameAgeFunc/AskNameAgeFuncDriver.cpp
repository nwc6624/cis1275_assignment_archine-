/***********************************
// Noah Caulfield, ncaulfield@cnm.edu
//ask name age functions
//10/20/20
//Demo project showing functions
*****************************/



//Simple Functions and How Old Are You?
//AskNameAgeFuncDriver.cpp

#include <iostream>
#include <string>
#include "Functions.h"

using namespace std;


int main()
{
	int age;
	string name;

	//Write a greeting
	WriteHello();			//call, no inputs, no return value

	//Ask for the user's name
	name = AskForName();	//call, returns name

	//Ask for age
	age = AskForAge();		//call, value assign into age

	//Write information
	Write(name, age);		//call, pass name, age to Write

	return 0;
}

