 /* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on July 11, 2022, 8:01 PM
 * Purpose: Create a program that demonstrates the compatibility between 
 *          horoscope signs.
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

// Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    string signOne, signTwo;
    
    //Initialize Variables
    cout << "Horoscope Program which examines compatible signs." << endl;
    cout << "Input 2 signs." << endl;
    cin >> signOne;
    cin >> signTwo;
    
    //Map inputs to outputs -> The Process
    if(signOne == "Aries" || signOne == "Leo" || signOne == "Sagittarius")
    {
        if(signTwo == "Aries" || signTwo == "Leo" || signTwo == "Sagittarius")
            cout << signOne << " and " << signTwo << " are compatible Fire signs.";
        else
            cout << signOne << " and " << signTwo << " are not compatible signs."; 
    }
    if(signOne == "Taurus" || signOne == "Virgo" || signOne == "Capricorn")
    {
        if(signTwo == "Taurus" || signTwo == "Virgo" || signTwo == "Capricorn")
            cout << signOne << " and " << signTwo << " are compatible Earth signs.";
        else
            cout << signOne << " and " << signTwo << " are not compatible signs."; 
    }
    if(signOne == "Gemini" || signOne == "Libra" || signOne == "Aquarius")
    {
        if(signTwo == "Gemini" || signTwo == "Libra" || signTwo == "Aquarius")
            cout << signOne << " and " << signTwo << " are compatible Air signs.";
        else
            cout << signOne << " and " << signTwo << " are not compatible signs."; 
    }
    if(signOne == "Cancer" || signOne == "Scorpio" || signOne == "Pisces")
    {
        if(signTwo == "Cancer" || signTwo == "Scorpio" || signTwo == "Pisces")
            cout << signOne << " and " << signTwo << " are compatible Water signs.";
        else
            cout << signOne << " and " << signTwo << " are not compatible signs."; 
    }
    
    //Display Results
    
    //Exit stage right
    return 0;
}

