/* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on June 23, 2022, 12:46 PM
 * Purpose: MPG
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

// Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const unsigned char PERCENT=100;//Conversion to percentage

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float mlsDrvn,//Miles Driven
          mpg,//Miles Per Gallon
          nGalns;//Number of gallons to fill tank
    
    //Initialize Variables
    mlsDrvn=375;//375 miles driving on a tank of gas
    nGalns=15;//Number of Gallons to fill a car        

    
    //Map inputs to outputs -> The Process
    mpg=mlsDrvn/nGalns;
    
    //Display Results
    cout<<static_cast<int>(mpg)<<" Miles per gallon = "
        <<mlsDrvn<<" Miles Driving / "
        <<static_cast<int>(nGalns)<<" Gallons used"<<endl;    
    
    //Exit stage right
    return 0;
}

