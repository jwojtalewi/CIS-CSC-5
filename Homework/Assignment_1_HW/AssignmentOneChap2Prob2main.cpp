/* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on June 23, 2022, 3:57 PM
 * Purpose: Calculating the number of sales generated from one branch of company
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
    int ttlSle,//Total sales
            ecPrc;//East coast percent of sales             
    
    //Initialize Variables
    ttlSle=8.6e6f;//Total sales
    ecPrc=58;//East coast percent of sales
    
    //Map inputs to outputs -> The Process
    int eCSle=ttlSle*0.58;//Monetary value of east coast sales
    
    //Display Results
    cout<<"The total sales from the company are "<<ttlSle<<" dollars"<<endl;
    cout<<"The east coast branch percentage of sales are "<<ecPrc<<" percent"<<endl;
    cout<<"The east coast total sales are "<<eCSle<<" dollars"<<endl;
    
    //Exit stage right
    //Ask why the number for the east coast sales comes up as 4.988e+06
    return 0;
}

