 /* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on June 27, 2022, 2:56 PM
 * Purpose: C++ Template - To be used in all future Assignments
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

// Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float numO,
          numT,
          numTh,
          numF,
          numFi;
    
    float avg;
    
    //Initialize Variables
    cout << "Input 5 numbers to average." << endl;
    cin >> numO;
    cin >> numT;
    cin >> numTh;
    cin >> numF;
    cin >> numFi;
    
    //Map inputs to outputs -> The Process
    avg = (numO + numT + numTh + numF + numFi) / 5;
    
    //Display Results
    cout << fixed; //<< setprecision(1);
    cout << "The average = " << setprecision(1) << avg;
    
    //Exit stage right
    return 0;
}

