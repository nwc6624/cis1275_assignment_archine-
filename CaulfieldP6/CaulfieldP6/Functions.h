/*Noah Caulfield ncaulfield@cnm.edu
  Project 6, Astrology
  11/15/20 */

//Functions.h 

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include<iostream>
#include <string>
#include <string>
#include <sstream>
#include <fstream>
using namespace std; 

const int NUM = 12; 

struct AstrologyData
{
	string signs[NUM] = { "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo",
		"Libra", "Scorpio", "Sagittarius", "Capricorn", "Aquarius", "Pisces" };
	string horoscopes[NUM]; 
	string elementNames[4] = { "Fire", "Earth", "Air", "Water" }; 
};
struct MyChart {    //enter users day month
	int month{ 1 };
	int day{ 1 };
	string myName; 
	int mySign{ 1 }; 
	int myelement{ 1 };
	int compatibleSigns[2]; 
};

//Function prototypes 

void WriteHeader();

void WriteIntro(); //tell info of how to use
void FillHoroscopes(AstrologyData& data);   //passing entire struct 
void AskForNameAndBirthday(MyChart& astro);//&astro is just a variable 
bool ValidateBirthday(MyChart& astro);  //month is between 1 and 12 and day is also in range 
void FindMySign(MyChart& astro);
void FindCompatableSigns(MyChart& astro);
bool WriteHoroscope(MyChart astro, AstrologyData data, string * filename, string* results); 
//bool DoAnotherHoroscope(); //or a do while 
void SayGoodbye(); //or call in main 

 


#endif