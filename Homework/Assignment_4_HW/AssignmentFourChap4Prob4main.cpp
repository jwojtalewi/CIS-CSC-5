/* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on July 13, 2022, 7:16 PM
 * Purpose:  Create a program that shows the user the inflation rate of a product.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Fromat Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float cPrice, yAgoPr, prcDiff, inflRte;
    char cont;
    int incrmnt;//Use variable to output endl
    
    //Initialize or input i.e. set variable values
    incrmnt = 0;
    
    //Map inputs -> outputs
    do
    { 
        cout << "Enter current price:" << endl;
        cin >> cPrice;
        cout << "Enter year-ago price:" << endl;
        cin >> yAgoPr;
        
        prcDiff = cPrice - yAgoPr;
        inflRte = (prcDiff / yAgoPr) * 100;
        
        cout << fixed << setprecision(2);
        cout << "Inflation rate: " << inflRte << "%" << endl << endl;
        
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

