/* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on July 13, 2022, 6:45 PM
 * Purpose:  Compares the mpg of two cars and shows which is more fuel efficient.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
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
    float gallons, mpgCOne, mpgCTwo, liters, miles;
    char cont;
    int incrmnt;//Use variable to output endl
    
    //Initialize or input i.e. set variable values
    incrmnt = 0;
    
    //Map inputs -> outputs
    do
    { 
        cout << "Car 1" << endl;
        cout << "Enter number of liters of gasoline:" << endl;
        cin >> liters;
        cout << "Enter number of miles traveled:" << endl;
        cin >> miles;
        gallons = glnConv * liters;//Convert liters to gallons
        mpgCOne = miles / gallons;//Convert miles and gallons into mpg
        cout << fixed << setprecision(2);
        cout << "miles per gallon: " << mpgCOne << endl << endl;
        
        cout << "Car 2" << endl;
        cout << "Enter number of liters of gasoline:" << endl;
        cin >> liters;
        cout << "Enter number of miles traveled:" << endl;
        cin >> miles;
        gallons = glnConv * liters;//Convert liters to gallons
        mpgCTwo = miles / gallons;//Convert miles and gallons into mpg
        cout << fixed << setprecision(2);
        cout << "miles per gallon: " << mpgCTwo << endl << endl;
        
            if(mpgCOne > mpgCTwo)
            {
                cout << "Car 1 is more fuel efficient" << endl << endl;
            }else
            {
                cout << "Car 2 is more fuel efficient" << endl << endl; 
            }
        
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

