/*
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on July 12, 2022, 3:39 PM
 * Purpose: cpp template to be used for all future assignments
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const unsigned char CNVDLRS = 100;//Conversion to dollars.

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    unsigned int payPDay,//Pay that is doubled each day.
                 totlSum,//Total sum after x days. 
                 nmDays;//Number of days to double pay.

    //Initialize Variables
    cin >> nmDays;
    payPDay = 1;
    totlSum = payPDay;

    //Map inputs to outputs -> The Process
    for(int day=2; day<=nmDays;day++)
    {
        payPDay*=2;
        totlSum+=payPDay;
    }

    //Display Results
    cout << fixed << setprecision(2);
    cout << "Pay = $"<<totlSum/CNVDLRS<<"."
            << (totlSum%CNVDLRS<10?"0":"") << totlSum%CNVDLRS;
    //Exit Stage Right
    return 0;
}

