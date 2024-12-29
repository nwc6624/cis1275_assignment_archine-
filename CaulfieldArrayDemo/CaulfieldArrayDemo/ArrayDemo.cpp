/*Noah Caulfield ncaulfield@cnm.edu
Array Demo in C++
Purpose: Demonstrate Arrays
11/15/20 */

//ArrayDemo.cpp

#include <cmath>
#include <string>
#include <iostream>
using namespace std; 

int main()
{
	int high[4], low[4];
	//int numbers[10];
	/*string names[10] = { "Charles Babbage","alan Turing","Tommy Flowers","John von neuman",
		"Douglass Engelbart","Steve Jobs","Philip Don Estridge","gordon Moore", "Bill Gates", "Tim Berners-Lee" };*/
	//for (int i = 0; i < 10; ++i) {
	//	//numbers[i] = 5; 
	//	numbers[i] = pow(i, 3); 
	//}
	//for (int i = 0; i < 5; ++i) {
	//	cout<<"Value at "<<i<<" is " << numbers[i] << endl;
	//}
	/*for (int i = 0; i < 10; ++i) {
		cout << "Name at " << i << " is " << names[i] << endl;
	}*/
	for (int i = 0; i < 4; ++i) {
		low[i] = i + 5; 
	}
	for (int i = 0; i < 4; ++i) {
		high[i] = i + 100;
	}

	return 0; //return ok
}