 /* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on July 3, 2022, 1:30 PM
 * Purpose: Calculate the sin, cos, and tan of an angle given in degrees.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

// Global Constants
const float PI = 3.1415928;

//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float nmbrdg;//Number of angle in degrees
    float nmbrrd;//Number of angle in radians      
    
    //Initialize Variables
    
    //Map inputs to outputs -> The Process
    cout << fixed << setprecision(4);
    cout << "Calculate trig functions" << endl;
    cout << "Input the angle in degrees." << endl;
    cin >> nmbrdg;
    nmbrrd = nmbrdg * (PI / 180);
    sin(nmbrrd);
    cos(nmbrrd);
    tan(nmbrrd);           
    
    //Display Results
    cout << "sin(" << setprecision(0) << nmbrdg << ") = " << setprecision(4) << sin(nmbrrd)<<endl;
    cout << "cos(" << setprecision(0) << nmbrdg << ") = " << setprecision(4) << cos(nmbrrd)<<endl;
    cout << "tan(" << setprecision(0) << nmbrdg << ") = " << setprecision(4) << tan(nmbrrd);
    
    //Exit stage right
    return 0;
}

