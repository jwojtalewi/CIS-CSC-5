 /* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on July 3, 2022, 6:25 PM
 * Purpose: Calculates an employees gross pay.
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
    float pyRte,//In $ per hour
          hrsWrkd,//Hours Worked
          pyChck;//Pay Check amount
    
    //Initialize Variables
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>pyRte>>hrsWrkd;
    
    //Map inputs to outputs -> The Process
    pyChck = pyRte * hrsWrkd;
    pyChck+=hrsWrkd>40?pyRte*(hrsWrkd-40):0;
    
    //Display Results
    cout << fixed << setprecision(2) << showpoint;
    cout << "Paycheck = $"<<setw(7)<<pyChck;
    
    //Exit stage right
    return 0;
}

