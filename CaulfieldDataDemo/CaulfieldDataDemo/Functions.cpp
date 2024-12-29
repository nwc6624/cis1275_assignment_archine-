#include "Functions.h"

bool WriteData(string fileName, float averageTemp, float averageHumidity)
{
	ofstream outFile;
	outFile.open(fileName);
	if (outFile)
	{
		outFile.setf(ios::fixed);
		outFile << setprecision(2);
		outFile << "The average temp in Tijeras is " << averageTemp << endl;
		outFile << "The average humidity in Tijerase is " << averageHumidity << endl;
		return true; //File ok
	}
	else
	{
		return false;//File not ok
	}
}

bool ReadData(string fileName, weather weatherData[], int& rows)
{
	string temp;
	ifstream inFile;
	inFile.open(fileName);
	if (inFile.is_open())
	{
		getline(inFile, temp);//read in the header row and discard it
		int row = 0;
		//Read each line into an element of array
		while (getline(inFile, temp, ',')) //Get a single element from file
		{
			weatherData[row].TimeMDT = temp;
			getline(inFile, temp, ',');
			weatherData[row].TemperatureF = stof(temp);
			getline(inFile, temp, ',');
			weatherData[row].DewPointF = stof(temp);
			getline(inFile, temp, ',');
			weatherData[row].Humidity = stof(temp);
			getline(inFile, temp, ',');
			weatherData[row].SeaLevelPressureIn = stof(temp);
			getline(inFile, temp, ',');
			weatherData[row].VisibilityMPH = stof(temp);
			getline(inFile, temp, ',');
			weatherData[row].WindDirection = temp;
			getline(inFile, temp, ',');
			weatherData[row].WindSpeedMPH = temp;
			getline(inFile, temp, ',');
			weatherData[row].GustSpeedMPH = temp;
			getline(inFile, temp, ',');
			weatherData[row].PrecipitationIn = temp;
			getline(inFile, temp, ',');
			weatherData[row].Events = temp;
			getline(inFile, temp, ',');
			weatherData[row].Conditions = temp;
			getline(inFile, temp, ',');
			weatherData[row].WindDirDegrees = stoi(temp);
			//This the last one so we will use a regular getline to consume the end of line character
			getline(inFile, temp);
			weatherData[row].DateUTC = temp;

			row++; //Increment row before getting next one
		}
		inFile.close();
		rows = row;//row has the number of lines we read
		return true; //we got the file return ok
	}
	else
	{
		return false; //Could not get the file return not ok
	}
}

float CalcAverageTemperature(weather weatherData[], int rows)
{
	float total = 0;
	for (int i = 0; i < rows; ++i)
	{
		total += weatherData[i].TemperatureF;
	}
	return total / rows;
}

float CalcAverageHumidity(weather weatherData[], int rows)
{
	float total = 0;
	for (int i = 0; i < rows; ++i)
	{
		total += weatherData[i].Humidity;
	}
	return total / rows;
}


//bool ReadData(string fileName, string time[], float dewPoint[], int& rows)
//{
//	string temp;
//	ifstream inFile;
//	inFile.open(fileName);
//	if (inFile.is_open())
//	{
//		getline(inFile, temp);//read in the header row and discard it
//		int row = 0;
//		//Read each line into an element of array
//		while (getline(inFile, temp, ',')) //Get a single element from file
//		{
//			time[row] = temp;//Save the first element into our array
//			//Skip the next element we don't need it
//			getline(inFile, temp, ',');
//			//Next one is the dewpoint
//			getline(inFile, temp, ',');
//			//convert it to a float and save it in array using stof function
//			dewPoint[row] = stof(temp);
//			//we don't need the rest of the line so use a 
//			//non-delimited getline to consume the rest of the line
//			getline(inFile, temp);
//			row++; //Increment row before getting next one
//		}
//		inFile.close();
//		rows = row;//row has the number of lines we read
//		return true; //we got the file return ok
//	}
//	else
//	{
//		return false; //Could not get the file return not ok
//	}
//}
//bool ReadData(string fileName, string lines[], int& rows)
//{
//	string text;
//	ifstream inFile;
//	inFile.open(fileName);
//	if (inFile.is_open())
//	{
//		int row = 0;
//		//Read each line into an element of array
//		while (getline(inFile, text)) //Get a line from file
//		{
//			lines[row] = text;
//			row++; //Increment row before getting next one
//		}
//		inFile.close();
//		rows = row;//row has the number of lines we read
//		return true; //we got the file return ok
//	}
//	else
//	{
//		return false; //Could not get the file return not ok
//	}
//}