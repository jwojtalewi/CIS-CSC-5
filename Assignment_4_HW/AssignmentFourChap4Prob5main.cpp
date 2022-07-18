/* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on July 13, 2022, 7:31 PM
 * Purpose:  Create a program that will 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float cPrice, yAgoPr, prcDiff, inflRte, prOneYr, prTwoYr;
    char cont;
    int incrmnt;//Use variable to output endl
    
    //Initialize or input i.e. set variable values
    incrmnt = 0;
    
    //Map inputs -> 
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
        
        prOneYr = (((cPrice*inflRte)/100) + cPrice);
        prTwoYr = (((prOneYr*inflRte)/100) + prOneYr);

        cout << "Price in one year: $" << prOneYr << endl;
        cout << "Price in two year: $" << prTwoYr << endl << endl;
        
        cout << "Again:" << endl;
        cin >> cont;
        if(cont!='y' && cont!='Y')
        {
            break;
        }
        
        incrmnt++;
        //char contOne = cont;
        if(incrmnt >= 1)
        {
            cout << endl;
        }
        //cin >> cont;
    }while(cont == 'Y' || cont == 'y');
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

