/*Noah Caulfield ncaulfield@cnm.edu
//Passing Arrays to Functions
11/16/20 */

//Functions.cpp

using namespace std; 
#include <stdlib.h>

//fills array with random val between 1 and 100
void FillArray(int numbers[], int total) {

	for(int i = 0; i < total; ++i) {
		numbers[i] = rand() % 100 + 1;
	}
}
//sums the elements of the array
int SumArray(int numbers[], int total) {
	int sum{ 0 };
	for (int i = 0; i < total; ++i) {
		sum += numbers[i];
	}
	return sum; 
}