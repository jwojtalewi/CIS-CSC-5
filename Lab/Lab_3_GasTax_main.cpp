 /* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on June 27, 2022, 2:56 PM
 * Purpose: C++ Template - To be used in all future Assignments
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
    float   gasPrce,//Gas price
          excseTx,//Percent of excise tax
            exTxDlr,//Excise tax value in dollars
          salesTx,//Sales tax in dollars
            salTxPr,//Sales tax in percent
          cpTrdFe,//Cap trade fee percent
            cpTrdDl,//Cap Trade fee in dollars
          fedrTax,//Federal tax in dollar
            fedTxPr,//Federal tax in percent
          ttPrcGM,//Total percent per gallon government makes
            gMkDlrV,//Amount government makes in dollar value per gallon
          cmpPrDl,//Company profit in dollars
            comPrfP;//Company profit percent     
    //Initialize Variables
    cout << "Price of gas per gallon last time you filled your tank: " <<endl;
    cin >> gasPrce;
    exTxDlr = 0.39;
    cpTrdDl = 0.10;
    fedTxPr = 0.184;
    salTxPr = 0.08;
    comPrfP = 0.065 * 100;    
    //Map inputs to outputs -> The Process
    excseTx = (exTxDlr / gasPrce) * 100;//Calculating the excise tax percentage

    cpTrdFe = (cpTrdDl / gasPrce) * 100;//Calculating the cap trade fee percentage 
    
    fedrTax = gasPrce * fedTxPr;//Calculating the federal tax amount in $

    salesTx = gasPrce * salTxPr;//Calculating the sales tax amount in $
    
    gMkDlrV = exTxDlr + cpTrdDl + fedrTax + salesTx;//Total $ amount government makes 
    
    ttPrcGM = (gMkDlrV / gasPrce) * 100;//Total percent government makes
     
    cmpPrDl = (comPrfP/100) * gasPrce;//Amount of profit that company makes in $
        
    //Display Results
    cout << fixed << setprecision(2);
    cout << "The government makes a total of  " << ttPrcGM 
         << "% off of each gallon purchased."<< endl;
    cout << "The government makes a total of  $" << gMkDlrV
         << "  off of each gallon purchased."<< endl;
    
    cout << "The gas company makes a total of " << comPrfP 
         << "%  off of each gallon purchased."<< endl;
    cout << "The gas company makes a total of $" << cmpPrDl 
         << "  off of each gallon purchased."<< endl;    
    //Exit stage right
    return 0;
}

