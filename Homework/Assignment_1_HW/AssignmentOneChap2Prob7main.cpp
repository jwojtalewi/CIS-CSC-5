/* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on June 22, 2022, 8:02 PM
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
    float   mmPY,//Millimeters raised per year
            oLvlF,//Ocean level after five years
            oLvlS,//Ocean level after seven years
            oLvlT;//Ocean level after ten years
    
    //Initialize Variables
    mmPY=1.5;

    //Map inputs to outputs -> The Process
    oLvlF=5*mmPY;//Amount ocean level has risen after five years
    oLvlS=7*mmPY;//Amount ocean level has risen after seven years
    oLvlT=10*mmPY;//Amount ocean level has risen after ten years
    
    //Display Results
    cout<<"The ocean level after five years will be "<<oLvlF<<" millimeters higher."<<endl;
    cout<<"The ocean level after seven years will be "<<oLvlS<<" millimeters higher."<<endl;
    cout<<"The ocean level after ten years will be "<<oLvlT<<" millimeters higher."<<endl;
    
    //Exit stage right
    return 0;
}

