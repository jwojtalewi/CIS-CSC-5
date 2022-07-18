/* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on July 12, 2022, 5:30 PM
 * Purpose:  Create a program that displays the character chosen in a rectangle
 *           of the specified size from the user.
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
    int rSize;
    char letter;
    //char letter;
    
    //Initialize or input i.e. set variable values
    while(!(cin>> rSize)||
            rSize>15||
            rSize<0){
                cin.clear();
                cin.ignore(1200, '\n');
            }
            
    cin >> letter;

    
    //Map inputs -> outputs
    
    //Display the outputs
    for(int h = 0; h < rSize; h++)      //Height of rectangle
    {     
        for(int l = 0; l < rSize; l++)  //Length of rectangle
            {
                cout << letter;
            }
        if(h < rSize-1){
            cout << endl;
        }    
    }

    //Exit stage right or left!
    return 0;
}

