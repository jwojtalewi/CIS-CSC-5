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
    short rmCapty,//Room Maximum Capacity
          nmbrPpM,//Number of people meeting
          difNmbr;//Difference between the two different variables above
    bool room,//Room variable
         legal,//Room is legal to meet in
         illegal;//Room is illegal to meet in 
    
    //Initialize Variables
    cout << "Input the maximum room capacity and the number of people" << endl;
    cin >> rmCapty;
    cin >> nmbrPpM;
    
    //Map inputs to outputs -> The Process
    if (nmbrPpM>rmCapty){
        room = illegal;
        difNmbr = nmbrPpM - rmCapty;
        cout << "Meeting cannot be held." << endl;
        cout << "Reduce number of people by " << difNmbr;
        cout << " to avoid fire violation.";
        
    }else if (rmCapty>nmbrPpM){
        room = legal;
        difNmbr = rmCapty - nmbrPpM;
        cout << "Meeting can be held." << endl;
        cout << "Increase number of people by " << difNmbr;
        cout << " will be allowed without violation.";
    }
    
    //Display Results
    
    //Exit stage right
    return 0;
}

