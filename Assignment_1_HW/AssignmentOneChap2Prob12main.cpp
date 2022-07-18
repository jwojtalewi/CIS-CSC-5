/* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on June 23, 2022, 2:54 PM
 * Purpose: Calculate the amount of acres in a parcel of land. 
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
    float land;//Size of land in sqft
    int acre;//Size of acre    
    
    //Initialize Variables
    land=3.91876e5f;//amount of land
    acre=4.356e4f;//amount of sqft in acre
    
    //Map inputs to outputs -> The Process
    float acplnd=land/acre;//Acres per land
    
    //Display Results
    cout<<"One acre is                          = "<<acre<<" square feet."<<endl;
    cout<<"Amount of land in the parcel is      = "<<land<<" square feet"<<endl;
    cout<<"The amount of acres in the parcel is = "<<acplnd<<" acres"<<endl;
    
    //Exit stage right
    //Ask why you get 8 instead of 8.99.
    return 0;
}

