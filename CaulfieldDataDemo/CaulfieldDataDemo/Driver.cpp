/*Noah Caulfield, ncaulfield@cnm.edu
* 11/28/20
* read data demo
* Purpose: Demonstrate how to read data from a file
*/

//driver.cpp

#include<iostream>
#include <iostream>
#include <fstream>
#include <string>
#include "Functions.h"

using namespace std;
int main()
{
	string fileName = "TijerasWeather.txt";
	weather	wData[100];
	float dewPoint[100];
	int countLines;

	//Get lines from file into our array
	bool bFileOK = ReadData(fileName, wData, countLines);

	if (bFileOK)
	{
		//Display Humidity
		float aveHumidity = CalcAverageHumidity(wData, countLines);
		cout << "Average Humidity is: " << aveHumidity << endl;

		//Display average temp
		float aveTemp = CalcAverageTemperature(wData, countLines);
		cout << "Average Temp is: " << aveTemp << endl;
		if (WriteData("TijerasData.txt", aveTemp, aveHumidity))
		{
			cout << "File written OK." << endl;
		}
		else
		{
			cout << "Could not save file!" << endl;
		}
	}
	else
	{
		cout << "Could not open file: " + fileName << endl;
	}

	return 0;
}

//
//int main()
//{
//	string fileName = "TijerasWeather.txt";
//	weather	wData[100];
//	float dewPoint[100];
//	int countLines;
//
//	//Get lines from file into our array
//	bool bFileOK = ReadData(fileName, wData, countLines);
//
//	if (bFileOK)
//	{
//		//Display Humidity
//		float aveHumidity = CalcAverageHumidity(wData, countLines);
//		cout << "Average Humidity is: " << aveHumidity << endl;
//
//		//Display average temp
//		float aveTemp = CalcAverageTemperature(wData, countLines);
//		cout << "Average Temp is: " << aveTemp << endl;
//	}
//	else
//	{
//		cout << "Could not open file: " + fileName << endl;
//	}
//
//	return 0;
//}

//int main()
//{
//	string fileName = "TijerasWeather.txt";
//	weather	wData[100];
//	float dewPoint[100];
//	int countLines;
//
//	//Get lines from file into our array
//	bool bFileOK = ReadData(fileName, wData, countLines);
//
//	if (bFileOK)
//	{
//		//Display lines
//		float aveHumidity = CalcAverageHumidity(wData, countLines);
//		cout << "Average Humidity is: " << aveHumidity << endl;
//	}
//	else
//	{
//		cout << "Could not open file: " + fileName << endl;
//	}
//
//	return 0;
//}


//int main()
//{
//	string fileName = "TijerasWeather.txt";
//	weather	wData[100];
//	float dewPoint[100];
//	int countLines;
//
//	//Get lines from file into our array
//	bool bFileOK = ReadData(fileName, wData, countLines);
//
//	if (bFileOK)
//	{
//		//Display lines
//		for (int i = 0; i < countLines; ++i)
//		{
//			cout << wData[i].DateUTC << " - " << wData[i].WindDirDegrees << endl;
//		}
//	}
//	else
//	{
//		cout << "Could not open file: " + fileName << endl;
//	}
//
//	return 0;
//}


//int main()
//{
//	string fileName = "TijerasWeather.txt";
//	string time[100];
//	float dewPoint[100];
//	int countLines;
//
//	//Get lines from file into our array
//	bool bFileOK = ReadData(fileName, time, dewPoint, countLines);
//
//	if (bFileOK)
//	{
//		//Display lines
//		for (int i = 0; i < countLines; ++i)
//		{
//			cout << time[i] << " - " << dewPoint[i] << endl;
//		}
//	}
//	else
//	{
//		cout << "Could not open file: " + fileName << endl;
//	}
//
//	return 0;
//}


//int main()
//{
//	string fileName = "TijerasWeather.txt";
//	string linesFromFile[100];
//	int countLines;
//
//	//Get lines from file into our array
//	bool bFileOK = ReadData(fileName, linesFromFile, countLines);
//
//	if (bFileOK)
//	{
//		//Display lines
//		for (int i = 0; i < countLines; ++i)
//		{
//			cout << linesFromFile[i] << endl;
//		}
//	}
//	else
//	{
//		cout << "Could not open file: " + fileName << endl;
//	}
//
//	return 0;
//}
//int main()
//{
//	string text;
//	ifstream inFile;
//	inFile.open("TijerasWeather.txt");
//
//	//check that file is open
//	if (inFile.is_open())
//	{
//
//		while (getline(inFile, text))
//		{
//			cout << text << endl;
//		}
//		inFile.close();
//	}
//	else
//	{
//		cout << "Could not open file: TijerasWeather.txt" << endl;
//	}
//	return 0;
//}