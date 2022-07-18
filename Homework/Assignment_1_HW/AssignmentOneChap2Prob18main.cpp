/* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on June 23, 2022, 11:45 AM
 * Purpose: Energy Drink Problem 
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
    unsigned short cstSrvy,//Number of Customers Surveyed
                   nEDrkr,//Number of customers that are energy drinkers
                   nCDrkr;//Number of customers that are citrus drinkers
    unsigned char  prcEDrk,//Percent of energy drinkers
                   prcCDrk;//Percent Citrus Drinker
    
    //Initialize Variables
    cstSrvy=16500;//16500
    prcEDrk=15;//15 Percent
    prcCDrk=58;//58 Percent
    
    //Map inputs to outputs -> The Process
    nEDrkr=cstSrvy*prcEDrk/PERCENT;
    nCDrkr=nEDrkr*prcCDrk/PERCENT;
    
    //Display Results
    cout<<"Number of Customers that use Energy Drinks    = "<<nEDrkr<<endl;
    cout<<"Number of Customers that prefer Citrus Drinks = "<<nCDrkr<<endl;
    
    //Exit stage right
    return 0;
}

