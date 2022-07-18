/* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on July 12, 2022, 5:53 PM
 * Purpose:  Create a program that calculates a cars MPG when given the miles
 *           driven and the liters of gasoline used.
 */

//System Libraries
#include <iostream>  //Input/Output 
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
const float glnConv = 0.264179;//Conversion percent of liters to gallons

//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float gallons, mpg, liters, miles;
    char cont;
    int incrmnt;//Use variable to output endl
    
    //Initialize or input i.e. set variable values
    incrmnt = 0;
    
    //Map inputs -> outputs
    do
    { 
        cout << "Enter number of liters of gasoline:" << endl;
        cin >> liters;
        cout << endl;
        cout << "Enter number of miles traveled:" << endl;
        cin >> miles;
        cout << endl;
        
        gallons = glnConv * liters;//Convert liters to gallons
        mpg = miles / gallons;//Convert miles and gallons into mpg
        
        cout << fixed << setprecision(2);
        cout << "miles per gallon:" << endl;
        cout << mpg << endl;
        
        cout << "Again:" << endl;
        cin >> cont;
            if(cont!='y' && cont!='Y')
            {
                break;
            }
        
        incrmnt++;
            if(incrmnt >= 1)
            {
                cout << endl;
            }
    }while(cont == 'Y' || cont == 'y');
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

