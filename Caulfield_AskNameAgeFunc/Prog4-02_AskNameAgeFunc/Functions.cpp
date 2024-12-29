/***********************************
// Noah Caulfield, ncaulfield@cnm.edu
//ask name age functions
//10/20/20
//Demo project showing functions
*****************************/


//Functions.cpp

#include <iostream>
#include <string>
#include "Functions.h"
using namespace std;

//Function definitions follow main

//Write_Hello writes a greeting message to the screen
void WriteHello()
{
	cout << "Hello from a C++ function!\n";
}

//AskForAge asks the user for age, returns age.
int AskForAge()
{
	int age;
	cout << "How old are you?  ";
	cin >> age;
	cin.ignore();   //remove enter key
	return age;
}

//AskForName asks the user's name
string AskForName()
{
	string name;
	cout << "What is your name?  ";
	getline(cin, name);
	return name;
}


//Write writes the name and age to the screen
void Write(string name, int age)
{
	cout << "Hi " << name << "! You are "
		<< age << " years old.  \n";
}

