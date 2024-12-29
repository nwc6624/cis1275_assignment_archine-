/* Noah Caulfield ncaulfield@cnm.edu
* 11/27/2020
* Reading a file demo for CIS 1275
*/

// Driver.cpp

#include <iostream> 
#include <fstream>
#include <string>
#include "Grades.h"
using namespace std; 

int main() {
	double average[15] = {};
	string studentNames[15];
	int numStudents{ 0 };

	//read each students info
	bool bRead = ReadFile(studentNames, average, numStudents);
	bool bWrite = WriteFile( studentNames, average, numStudents);
	double  CalcAverage( grades);



	//int totalNumbers{ 0 }, number{ 0 }, sum{ 0 };
	//string filename;

	//ifstream iLoveNumbers;

	//cout << "\n Please enter the name of the file: ";
	//getline(cin, filename);

	//iLoveNumbers.open(filename.c_str());

	//if (iLoveNumbers) {
	//	//read the file until the end of the file - we are not sure how many there are
	//	while (!iLoveNumbers.eof())
	//	{
	//		iLoveNumbers >> number;
	//		sum += number;
	//		++totalNumbers;  //keep track of how many numbers are read
	//	}

	//	//display the results:
	//	cout << "\n The file used is: " << filename;
	//	cout << "\n Total numbers in the file: " << totalNumbers;
	//	cout << "\n The sum of the numbers is " << sum << endl;

	//	//close the file
	//	iLoveNumbers.close();
	//}
	//else
	//{
	//	cout << "\n Can't find input file" << filename;
	//}



	

	return 0; 
}


