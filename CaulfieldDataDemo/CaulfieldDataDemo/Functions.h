/*Noah Caulfield, ncaulfield@cnm.edu
* 11/28/20
* read data demo
* Purpose: Demonstrate how to read data from a file
*/

//Functions.h

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std; 

struct weather
{
	string TimeMDT;
	float TemperatureF;
	float DewPointF;
	float Humidity;
	float SeaLevelPressureIn;
	float VisibilityMPH;
	string WindDirection;
	string WindSpeedMPH;
	string GustSpeedMPH;
	string PrecipitationIn;
	string Events;
	string Conditions;
	int WindDirDegrees;
	string DateUTC;
};
bool ReadData(string fileName, weather weatherData[], int& rows);

bool WriteData(string fileName, float averageTemp, float averageHumidity);
float CalcAverageHumidity(weather weatherData[], int rows);
float CalcAverageTemperature(weather weatherData[], int rows);
// bool ReadData(string fileName, string time[], float dewPoint[], int& rows);
//bool ReadData(string filename, string lines[], int& rows);


#endif // !FUNCTIONS_H
