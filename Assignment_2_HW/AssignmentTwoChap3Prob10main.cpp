 /* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on July 3, 2022, 1:13 PM
 * Purpose: Calculate the temperature from Celsius to Fahrenheit
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
    float dgrClss,//Temp in Celsius
          dgrFrht;//Temp in Fahrenheit
    
    //Initialize Variables
    
    //Map inputs to outputs -> The Process
    cout << fixed << setprecision(1);
    cout << "Temperature Converter" << endl;
    cout << "Input Degrees Fahrenheit" << endl;
    cin >> dgrFrht;
    dgrClss = (dgrFrht - 32) * 5/9;
    
    //Display Results
    cout << dgrFrht << " Degrees Fahrenheit = " << dgrClss << " Degrees Centigrade";
    
    //Exit stage right
    return 0;
}

