/*Noah Caulfield mcaulfield@cnm.edu
//Project 4, Credit Card number validation
10/20/20 */

//Functions.cpp

#include "Functions.h"
#include <iostream>


void WriteHeader()
{

    cout << "Name: Noah Caulfield\n"
        << "Email: ncaulfield@cnm.edu\n"
        << "File name: CaulfieldP4 \n\n";

    cout << "Credit Card Number Validation\n";
    cout << "The objective of this program is to to verify the legitimacy of a credit card numberss \n\n";

}

string AskForCardNumber() {
    string getNum;
    cout << "Enter a credit card number(without any space or special character):" << endl;
    cin >> getNum;

    return getNum;
}

//function which returns the number if it is single digit else returns the sum of two digits
int GetDigit(int num)
{
    int d1 = 0;
    int d2 = num;
    // loop to calculate the sum of digits in the number
    while (d2 != 0)
    {                        //add the two digits together 
        d1 = d1 + d2 % 10;
        d2 = d2 / 10;
    }

    return d1;
}
// return the sum of odd place digit in the card number from right to left
int SumOfOddPlace(string cardNumber)
{
    int sum = 0;
    // loop from last digit to start in steps of -2
    for (int i = cardNumber.length() - 1; i > -1; i = i - 2)
    {
        int x = cardNumber[i] - '0'; // convert ith character to int
        sum = sum + x;
    }
    return sum;
}

// function which returns true if substr is the prefix for cardNumber
bool StartsWith(string cardNumber, string substr)
// check to see if substring is in the string 
    //check if the substring is larger than the string --if so return false 
    //only check length of the substring 
//but it must be the first characters 

    //use find find function to find the substring inside the first n characters of the string 
    //or just check them by equality using a loop that goes to substr.size()
    // in the loop check if cardNumber[i] == substr[i]  (4,5, 37...)

    //can use the find to search the substring in the first one or two elements f the string 
    //substring starting index has to be 0



{
    // checks if substring of cardNumber starting from 1st position to the length of substr string is equal to substr
    if (substr == cardNumber.substr(0, substr.length())) {
        return true;
    }
    return false; //check if the substring is larger than the string --if so return false 
}


bool IsValid(string CardNum)    //check if cardNum is valid 
{
    int sum = 0;

    // if prefix is incorrect

     // calculate sum of double of even places
    sum = SumOfDoubleEvenPlace(CardNum);

    // calculate sum of odd places
    sum += SumOfOddPlace(CardNum);


    if (!StartsWith(CardNum, "4") && !StartsWith(CardNum, "5") && !StartsWith(CardNum, "37") && !StartsWith(CardNum, "6"))
        return false;
    else if (StartsWith(CardNum, "4")) {
        cout << "\nThis is a VISA card.\n\n";
    }
    else if (StartsWith(CardNum, "5")) {
        cout << "\nThis is a MasterCard.\n\n";
    }
    else if (!StartsWith(CardNum, "37")) {
        cout << "\nThis is an American Express card.\n\n";
    }
    else if (!StartsWith(CardNum, "6")) {
        cout << "\nThis is a Discover card.\n\n";
    }



    if (sum % 10 == 0) // total sum is divisible by 10 meaning valid num
        return true;
    else // invalid card number
        return false;
}
// function to calculate sum of 
int SumOfDoubleEvenPlace(string cardNumber)
{
    int sum = 0;
    // loop from second last digit to start in steps of -2
    for (int i = cardNumber.length() - 2; i > -1; i = i - 2)
    {
        int n = cardNumber[i] - '0'; // change to int 
        sum = sum + GetDigit(2 * n);
    }

    return sum;
}
// valid format returns true 
bool ValidateInput(string FullCardNum)
{
    // if length is incorrect
    if (FullCardNum.length() < 13 || FullCardNum.length() > 16)
        return false;
    else
    {
        // loop to check that each character is a digit
        for (size_t i = 0; i < FullCardNum.length(); i++)
        {
            // flase if string not completely digits 
            if (FullCardNum[i] < '0' || FullCardNum[i] > '9')
                return false;
        }

        return IsValid(FullCardNum);
    }
}