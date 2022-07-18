 /* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on July 5, 2022, 5:05 PM
 * Purpose: Create a program that sorts names in alphabetical order. 
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

// Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    string nameOne, nameTwo, nameThr;
    
    //Initialize Variables
    cout << "Sorting Names" << endl;
    cout << "Input 3 names" << endl;
    cin >> nameOne;//First name entered in program 
    cin >> nameTwo;//Second name entered in program
    cin >> nameThr;//Third name entered in program 
    
    //Map inputs to outputs -> The Process
    if (nameOne < nameTwo && nameOne < nameThr){        //Process if name one is first
        cout << nameOne << endl;
        if(nameTwo < nameThr){                          //Process if name two is second and name three is third
            cout << nameTwo << endl << nameThr;
        }else cout << nameThr << endl << nameTwo;       //Process if name three is second and name two is third
    }else if(nameTwo < nameOne && nameTwo < nameThr){   //Process if name two is first
        cout << nameTwo << endl;
        if(nameOne < nameThr){                          //Process if name one is second and name three is third
            cout << nameOne << endl << nameThr;
        }else cout << nameThr << endl << nameOne;       //Process if name three is second and name one is third
    }else if(nameThr < nameOne && nameThr < nameTwo){   //Process if name three is first
        cout << nameThr << endl;                         
        if(nameOne < nameTwo){                          //Process if name one is second and name two is third 
            cout << nameOne << endl << nameTwo;
        }else cout << nameTwo << endl << nameOne;       //Process if name two is second and name three is third
    }
    
    //Display Results
    
    //Exit stage right
    return 0;

}
