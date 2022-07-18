 /* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on July 8, 2022, 10:18 PM
 * Purpose: Create a program that calculates a customers amount due at
 *          the end of the month.
 */

//System Libraries
#include <iostream>//Input/Output Library
#include <iomanip> //Formatting Library
#include <string>  //String Library
using namespace std;

//User Libraries

// Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    string pckgeSl;
    float  pckgeA, pckgeB, pckgeC,      //Package A, B and C
           pckgeAP, pckgeBP, pckgeCP,   //Package A, B and C Price
           pckgeAO, pckgeBO, hrsUsed,   //Package A and B Overtime Price & hours used
           finalPr;                     //Final Price
    
    //Initialize Variables
    pckgeAP = 9.95;
    pckgeBP = 14.95;
    pckgeCP = 19.95;
    pckgeAO = 2.00;
    pckgeBO = 1.00;
    
    cout << "ISP Bill" << endl;
    cout << "Input Package and Hours" << endl;
    cin >> pckgeSl;
    cin >> hrsUsed;
    
    //Map inputs to outputs -> The Process
    pckgeA = (pckgeAP + ((hrsUsed-10) * pckgeAO));
    pckgeB = (pckgeBP + ((hrsUsed-20) * pckgeBO));
    pckgeC = pckgeCP;
    
    if(pckgeSl == "A"){
       finalPr = pckgeA;
    }
    if(pckgeSl == "B"){
       finalPr = pckgeB;
       
    }
    if(pckgeSl == "C"){
       finalPr = pckgeC;
    }
    
    //Display Results
        cout << fixed << showpoint << setprecision(2);
        cout << "Bill = $" << setw(6) << finalPr;
    
    //Exit stage right
    return 0;
}

