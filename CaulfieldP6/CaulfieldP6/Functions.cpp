/*Noah Caulfield ncaulfield@cnm.edu
  Project 6, Astrology
  11/15/20 */

//Functions.cpp
#include "Functions.h"

void WriteHeader()
{
	cout << "Project name: CaulfieldP6 \n";
	cout << "Name: Noah Caulfield, Program 6 Horoscopes\n";
	cout << "Arrays, structs, and writing to a file\n";
	cout << "Enter the month and day of your birthday, and we will give you your horoscope\n\n"; 
		
}

void WriteIntro()
{
	cout << "The 12 signs of the Zodiac are grouped into 4 basic Elements: Fire, Earth, Air, and Water\n";
	cout << "Each Element contains 3 signs. People who share the same element are most compatible. \n";
	cout << "You would be compatible with people born under the same sign as you or one of the other 2 signs in the same element.\n";
}

void FillHoroscopes(AstrologyData& data)
{
	data.horoscopes[0] = "\n You need more free time to play with"; //aries
	data.horoscopes[1] = "\n Balance your mindset today"; //taurus
	data.horoscopes[2] = "\n Concerve your energy today"; //Gemini
	data.horoscopes[3] = "\n Play it safe and don't leap before you look"; //cancer
	data.horoscopes[4] = "\n You cant force feelings that dont exist"; //leo
	data.horoscopes[5] = "\n You're the great peacemaker right now"; //virgo
	data.horoscopes[6] = "\n Relax, life is good. Stay focused"; //libra 
	data.horoscopes[7] = "\n Today gague how people react today"; //scorpio
	data.horoscopes[8] = "\n Try to not get annoyed with well-intentioned folks";  //sagittarius
	data.horoscopes[9] = "\n Be careful with your power today"; //capricorn 
	data.horoscopes[10] = "\n Work on making a good connection today"; //Aquarius 
	data.horoscopes[11] = "\n Wait until the universe gives you a clear sign"; //pices
}

void AskForNameAndBirthday(MyChart& astro)
{
	cout << "\n Please enter your name: ";
	
	getline(cin, astro.myName);
	//then ask for birthday. Day or month separately or together with space between 
	cout << "\n Enter your birthday day, space, month: ";
	cin >> astro.day >> astro.month; 
	cin.ignore(); 
}

bool ValidateBirthday(MyChart& astro)
{
	//make sure that the month is is between 1 and 12
	//and day is between 1 and last day of the month 
	//bool bBDayValid = true;
	bool bValid = true; 

	//check if astro.month <1 ||>12 if so bValid = false
	// check if astro.day<1 ||>31, so so same as above //-----------------------------------------
	//check if astro.day is correct for the month given. 
	switch (astro.month)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
		if (astro.day > 31)
			bValid = false; 
		break; 
	case 4: case 6: case 9: case 11:   //30 day months 
		if (astro.day > 30)
			bValid = false;
		break;
	case 2: 
		if (astro.day > 29)
			bValid = false; 
		break; 
	default: bValid = false; 
	
	}
	return bValid;
}

void FindMySign(MyChart& astro)
{    
	//have to find the birthday inside one of the intervals for the sign 
	int day = astro.day; 
	// can switch on astro.month 
	switch (astro.month) 
	{
	case 1: //jan
		if (day >= 20)
			astro.mySign = 10;
		else
			astro.mySign = 9;
		break; 
	case 2:
		astro.mySign = astro.day >= 19 ? 12 : 11; 
		break; 
	
	}
	
}

void FindCompatableSigns(MyChart& astro)
{  
	astro.myelement = astro.mySign % 4;
	//completed like days in the month
	//first find myelement 
	int compatibleIndex{ 0 }; 
	for (int i = 0; i < 12; ++i) 
	{
		if (i != astro.mySign && i % 4 == astro.myelement) {
			astro.compatibleSigns[compatibleIndex++] =i; 
		}
		
	}
}

bool WriteHoroscope(MyChart astro, AstrologyData data, string* filename, string* results)
{

	stringstream ss;
	//cout << astro.compatibleSigns[1]; 
	/* format
			 user name: noah
			birth info:2 3
			their sign:picese
		 their element:water
	 compatible signs : Cancer, scorpio
			 Horoscope: #######
	*/
	string months[]{ "","Jan", "Feb","March","April","May","June","July","Aug","Sept","Oct","Nov","Dec" };
	ss << "        User Name: " << astro.myName << endl
		<< "       Birth Date: " << months[astro.month] << " " << astro.day << endl
		<< "        Your Sign: " << data.signs[astro.mySign] << endl
		<< "     Your Element: " << data.elementNames[astro.myelement] << endl
		<< "Compatible Signs : " << data.signs[astro.compatibleSigns[0]] << ", " << data.signs[astro.compatibleSigns[1]] << endl
		<< "\n      Horoscope: " << data.horoscopes[astro.mySign] << endl;



	//create output string 
	cout << "Please enter a name for the file with extension, like text.txt\n   : ";
	//cin >> filename; 
	//ask user for a file name and tell them the formatt of the anme, ex text.txt 
	//the filename still be 
	getline(cin, *filename);
	//check if file is open 
	fstream outfile(*filename, std::fstream::out); 
	if (outfile.is_open()) {
		outfile << ss.str();
		outfile.close();
		system(string("start notepad " + *filename).c_str()); //Open in notepad 
		return true;
	}
	return false;
}



void SayGoodbye()
{
	cout << "\n Take care, and stay safe!!";
}
