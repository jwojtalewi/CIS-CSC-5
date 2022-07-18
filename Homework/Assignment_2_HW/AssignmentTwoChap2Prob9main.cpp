 /* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on July 5, 2022, 10:15 AM
 * Purpose: Calculate the sum of numbers greater than 0 and the sum of numbers less than 0 as well as the total sum.
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
    short numbrOn, numbrTw, numbrTh, numbrFo, numbrFi, 
          numbrSi, numbrSe, numbrEi, numbrNi, numbrTe;
    short negiNum, posiNum, negiSum=0, posiSum=0, totlSum=0;
    
    //Initialize Variables
    cout << "Input 10 numbers, any order, positive or negative" << endl;
    cin >> numbrOn; cin >> numbrTw; cin >> numbrTh; cin >> numbrFo; cin >> numbrFi; 
    cin >> numbrSi; cin >> numbrSe; cin >> numbrEi; cin >> numbrNi; cin >> numbrTe;
    
    //Map inputs to outputs -> The Process
    totlSum=numbrOn+numbrTw+numbrTh+numbrFo+numbrFi+numbrSi+numbrSe+numbrEi+numbrNi+numbrTe;
        if (numbrOn > 0)
             posiSum += numbrOn;
        else negiSum += numbrOn;
        if (numbrTw > 0)
             posiSum += numbrTw;
        else negiSum += numbrTw;
        if (numbrTh > 0)
             posiSum += numbrTh;
        else negiSum += numbrTh;
        if (numbrFo > 0)
             posiSum += numbrFo;
        else negiSum += numbrFo;
        if (numbrFi > 0)
             posiSum += numbrFi;
        else negiSum += numbrFi;
        if (numbrSi > 0)
             posiSum += numbrSi;
        else negiSum += numbrSi;
        if (numbrSe > 0)
             posiSum += numbrSe;
        else negiSum += numbrSe;
        if (numbrEi > 0)
             posiSum += numbrEi;
        else negiSum += numbrEi;
        if (numbrNi > 0)
             posiSum += numbrNi;
        else negiSum += numbrNi;
        if (numbrTe > 0)
             posiSum += numbrTe;
        else negiSum += numbrTe;
    
    //Display Results
    cout << "Negative sum = " << setw(3) << negiSum << endl;
    cout << "Positive sum = " << setw(3) << posiSum << endl;
    cout << "Total sum    = " << setw(3) << totlSum;
    
    //Exit stage right
    return 0;
}

