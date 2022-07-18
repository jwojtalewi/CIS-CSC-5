 /* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on July 3, 2022, 6:46 PM
 * Purpose: Calculate the amount of diet coke that can be consumed before death. `
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

// Global Constants
const int CANWGHT = 350;//Can weight constant
const float SWEETPR = .001;//Sweetener percentage 

//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float canWght,//Can weight in grams
          sweetPr;//Sweetener percentage 
    float msDthDs,//Mouse Deadly Dose
          msWght,//Mouse Weight
          dthRtio,//Death Ratio 
          gWeight,//Goal weight
          gWghtGr,//Goal weight in grams
          hmnDthD,//Human death dose
          canDose;//Amount of sweetener dosed in one can
    unsigned short nmCansD;//Number of cans that cause death
          
    //Initialize Variables
    canWght = 350;
    sweetPr = 0.001;
    msWght = 35;
    msDthDs = 5;
    dthRtio = msDthDs / msWght;
    cout << "Program to calculate the limit of Soda Pop Consumption." << endl;
    cout << "Input the desired dieters weight in lbs." << endl;
    cin >> gWeight; 
    
    //Map inputs to outputs -> The Process
    gWghtGr = gWeight * 453.592;
    hmnDthD = dthRtio * gWghtGr;
    canDose = canWght * sweetPr;
    nmCansD = hmnDthD / canDose;
    
    //Display Results
    cout << "The maximum number of soda pop cans" << endl;
    cout << "which can be consumed is " << nmCansD << " cans";
    
    //Exit stage right
    return 0;
}

