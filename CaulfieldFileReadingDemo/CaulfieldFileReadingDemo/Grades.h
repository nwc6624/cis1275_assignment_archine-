/* Noah Caulfield ncaulfield@cnm.edu
* 11/27/2020
* Reading a file demo for CIS 1275
*/

// Grades.h

#ifndef GRADES_H
#define GRADES_H

const int TOTAL = 8;
const string FILE_IN = "StudentGrades.txt";
const string FILE_OUT = "Class Averages.txt";

#include <string> 
#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;


bool ReadFile(string studentNames[], double average[], int& numStudents);
bool WriteFile(string studentNames[], double average[], int& numStudents);
double CalcAverage(double grades[]);



#endif