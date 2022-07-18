 /* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on June 27, 2022, 2:56 PM
 * Purpose: C++ Template - To be used in all future Assignments
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

// Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    unsigned short clPCc,//calories per cookie
                   ccEtn,//cookies eaten
                   clCnsmd;//calories consumed
    
    //Initialize Variables
    clPCc = 75;
    
    //Map inputs to outputs -> The Process
    
    //Display Results
    cout << "Calorie Counter" << endl;
    cout << "How many cookies did you eat?" << endl;
    cin >> ccEtn;
    clCnsmd = clPCc * ccEtn;
    cout << "You consumed " << clCnsmd << " calories.";
    
    //Exit stage right
    return 0;
}

