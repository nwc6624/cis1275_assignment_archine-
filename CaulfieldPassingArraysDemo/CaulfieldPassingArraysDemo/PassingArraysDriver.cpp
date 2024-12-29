/*Noah Caulfield ncaulfield@cnm.edu
//Passing Arrays to Functions
11/16/20 */

//PassingArraysDriver.cpp

#include <stdlib.h>
#include <iostream>
#include <time.h>
#include "Function.h"
using namespace std;

int main()
{
	//seed random bumber generator
	srand(time(NULL));

	//declare array and show address
	int arrayFromMain[15]; 
	cout << "This is the address of the arrayFromMain: " << arrayFromMain << endl; 

	//Fill array with random vals
	FillArray(arrayFromMain, 15); 

	//show elements in array
	for (int i = 0; i < 15; ++i) 
	{
		cout << "element at index " << i << " is " << arrayFromMain[i] << endl; 
	}
	
	//show sum of elements in array
	int arraySum = SumArray(arrayFromMain, 15);
	cout << endl << "Sum of elements in the Array: " << arraySum << endl;


	return 0; //return ok
}