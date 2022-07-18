/* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on June 23, 2022, 11:16 AM 
 * Purpose: Paint Problem - How many gallons for coverage for double coverage and both sides of the fence
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
    float pCvg,//Coverage of a gallon of paint in ft^2
            fncHgt,//Fence Height in feet
            fncLen;//Fence length in feet
    int nGalns;//Number of gallons of paint required
    
    //Initialize Variables
    pCvg=3.4e2f;//340 square feet
    fncHgt=6.0e0f;//6 foot fence length
    fncLen=1.0e2f;//100 foot fence length
            
    //Map inputs to outputs -> The Process
    float srfAra=fncHgt*fncLen;//Surface area of 1 side of fence
    float srfCov=2*2*srfAra;//Need to paint both sides twice
    nGalns=srfCov/pCvg+1;//Integer number of Gallons of paint
    
    //Display Results
    cout<<"Fence Height                        = "<<fncHgt<<" feet"<<endl;
    cout<<"Fence Length                        = "<<fncLen<<" feet"<<endl;
    cout<<"Paint Coverage                      = "<<pCvg<<" feet^2"<<endl;
    cout<<"Number of Gallons of Paint Required = "<<nGalns<<" gallons"<<endl;
    
    //Exit stage right
    return 0;
}

