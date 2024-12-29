/*Noah Caulfield ncaulfield@cnm.edu
  Project 6, Astrology
  11/15/20 */

//AstroDriver.cpp

#include "Functions.h"
using namespace std; 

int main()
{
	WriteHeader();
	WriteIntro();

	//declare variables
	AstrologyData data; 
	MyChart astro;
	string filename;
	string results;
	char choice;//-------------------------------------- 

	//Fill the horoscope array with horroscopes
	FillHoroscopes(data);

	do
	{
		

		AskForNameAndBirthday(astro);
		bool bBirthdayOK = ValidateBirthday(astro); //make sure month and day is correct 
		if (bBirthdayOK == true)   //if false quit 
		{
			FindMySign(astro);
			
			FindCompatableSigns(astro);
			int i = 0;
			bool bwrite = WriteHoroscope(astro, data, &filename, &results);
			//Display results 
			cout << results;
			//check i bWrite is true or false, tell the user. we wrote the file if true, if false tell the it doesnt exist 
		}
		else {
			cout << "\n Please enter a valid birthday!\n ";
		}
		// ask user if they want another
		//read their answer 

		// ask if the user wants to continue
		cout << "Do you want to continue? (y/n, enter as lowercase) ";
		cin >> choice; //cin.ignore
		cin.ignore(); 
	//} while (DoAnotherHoroscope()); //something is yes 
	} while (choice == 'y'); 

	SayGoodbye(); 

	return 0; //return ok
}