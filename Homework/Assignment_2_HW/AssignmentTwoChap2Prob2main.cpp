 /* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on June 27, 2022, 2:56 PM
 * Purpose: Calculate the amount of pay raise an employee will get after six months.
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
    float orgSalr,//Original salary
          pyIncrs,//Amount the annual pay increases
          newSalr,//New annual salary
          retroPy,//Retroactive pay
          nwMSalr;//New monthly salary
    
    //Initialize Variables
    cout << "Input previous annual salary." << endl;
    cin >> orgSalr;
    
    //Map inputs to outputs -> The Process
    pyIncrs = orgSalr * 0.076;
    newSalr = orgSalr + pyIncrs;
    retroPy = pyIncrs / 2;
    nwMSalr = newSalr / 12;
    
    //Display Results
    cout << fixed << setprecision(2);
    cout << "Retroactive pay    = $" << setw(7) << retroPy << endl;
    cout << "New annual salary  = $" << setw(7) << newSalr << endl;
    cout << "New monthly salary = $" << setw(7) << nwMSalr;
    
    //Exit stage right
    return 0;
}

