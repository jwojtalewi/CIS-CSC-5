 /* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on June 27, 2022, 2:56 PM
 * Purpose: C++ Template - To be used in all future Assignments
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

// Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int cstOHme,//Cost of the home 
        cstOIns;//Cost of insurance
    
    //Initialize Variables
    
    //Map inputs to outputs -> The Process
    cout << "Insurance Calculator" << endl;
    cout << "How much is your house worth?" << endl;
    cin >> cstOHme;
    cstOIns = cstOHme * 0.8;
    
    //Display Results
    cout << "You need $" << cstOIns << " of insurance.";
    
    //Exit stage right
    return 0;
}

