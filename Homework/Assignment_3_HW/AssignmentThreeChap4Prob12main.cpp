 /* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on July 7, 2022, 1:45 PM
 * Purpose: Calculate the amount of bank charges one will have at the end of the month.
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
    float bnkBlnc,//Amount of money person has in bank
          nmbrChk,//Number of checks the customer has written
          stdBFee,//Standard $10 fee applied at every month
          fwrTwCh,//Fee for checks 0-19
          twTTFCh,//Fee for checks 20-39
          frTSxCh,//Fee for checks 40-59
          sxAAbve,//Fee for checks 60 and up
          ttChFee,//Total fee for checks written
          lowBlnF,//Fee for having a balance below $400
          newBlnc;//Amount of money had after charges are applied
    
    //Initialize Variables
    stdBFee = 10;// Standard Fee (in dollars) 
    fwrTwCh = 0.10;//Fee (in cents) applied to checks 0 - 19
    twTTFCh = 0.08;//Fee (in cents) applied to checks 20 - 39
    frTSxCh = 0.06;//Fee (in cents) applied to checks 40 - 59
    sxAAbve = 0.04;//Fee (in cents) applied to checks 60 and above
    lowBlnF = 15;//Fee (in dollars) applied if the amount in account is below $400
    
    cout << "Monthly Bank Fees" << endl;
    cout << "Input Current Bank Balance and Number of Checks" << endl;
    cin >> bnkBlnc;//Balance in Bank Account
    cin >> nmbrChk;//Number of checks written that month
    
    //Map inputs to outputs -> The Process
    if (nmbrChk < 20){
        ttChFee = nmbrChk * fwrTwCh;//Total check fee for under 20 checks
    }if (nmbrChk < 39 && nmbrChk >= 20){
        ttChFee = nmbrChk * twTTFCh;//Total check fee for 20 - 39 checks
    }if (nmbrChk < 59 && nmbrChk >= 40){
        ttChFee = nmbrChk * frTSxCh;//Total check fee for 40 - 59 checks
    }if (nmbrChk >= 60){
        ttChFee = nmbrChk * sxAAbve;//Total check fee for 60 checks and over
    }
    
    //Display Results
    if (bnkBlnc > 0){
        if(bnkBlnc < 400){
            newBlnc = (((bnkBlnc - lowBlnF) - ttChFee) - stdBFee);
            cout << fixed << showpoint << setprecision(2);
            cout << "Balance     $" << setw(9) << bnkBlnc << endl;
            cout << "Check Fee   $" << setw(9) << ttChFee << endl;
            cout << "Monthly Fee $" << setw(9) << stdBFee << endl;
            cout << "Low Balance $" << setw(9) << lowBlnF << endl;
            cout << "New Balance $" << setw(9) << newBlnc;
        }else
            newBlnc = ((bnkBlnc - stdBFee) - ttChFee);
            cout << fixed << showpoint << setprecision(2);
            cout << "Balance     $" << setw(9) << bnkBlnc << endl;
            cout << "Check Fee   $" << setw(9) << ttChFee << endl;
            cout << "Monthly Fee $" << setw(9) << stdBFee << endl;
            cout << "Low Balance $     0.00" << endl;
            cout << "New Balance $" << setw(9) << newBlnc;        
    }else 
        cout << "URGENT: ACCOUNT IS OVERDRAWN";
    
    //Exit stage right
    return 0;
}

