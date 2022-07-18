/* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on July 12, 2022, 9:04 AM
 * Purpose:  Program designed to find the sum of numbers up to the number input by the user.
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int n;
    unsigned int sum=0;
    
    //Initialize or input i.e. set variable values
    cin >> n;
    
    if(n<0){
        cout << "You must enter a positive integer!"<<endl;
        return 1;
    }
    
    //Map inputs -> outputs
    for(int i=1; i<=n; i++)
        sum+=i;
    
    //Display the outputs
    cout << "Sum = "<<sum;

    //Exit stage right or left!
    return 0;
}

