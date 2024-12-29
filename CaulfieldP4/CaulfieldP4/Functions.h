//Noah Caulfield ncaulfield@cnm.edu
// Validate credit card program 


//string AskForCardNumber();


// Functions.h

#ifndef FUNCTIONS_H 
#define FUNCTIONS_H

# include <string>
using namespace std;

void WriteHeader();


string AskForCardNumber();							//Get card number form user via input 

int GetDigit(int number);                          //returns the number if it is a single digit, or the sum of a two digit number

int SumOfOddPlace(string cardNumber);             // return sum of odd placed digits

bool StartsWith(string cardNumber, string substr); // return true if substring is prefix for card number 

bool IsValid(string cardNumber);                  // Return true if card number is valid 

int SumOfDoubleEvenPlace(string cardNumber);      //Get result from step 2, above 

bool ValidateInput(string cardNumber);            //return true if the card number was entered with a valid format 

#endif
