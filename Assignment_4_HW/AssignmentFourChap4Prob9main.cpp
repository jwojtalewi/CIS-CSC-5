/* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on July 14, 2022, 9:53 AM
 * Purpose:  Create a program that will find the 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float max1(float nmbrOne, float nmbrTwo, float nmbrThr);
float max2(float nmbrOne, float nmbrTwo);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare 
    float nmbrOne, nmbrTwo, nmbrThr;
    
    //Initialize or input i.e. set variable values
    cout << "Enter first number:" << endl;
    cin >> nmbrOne;
    cout << endl;
    cout << "Enter Second number:" << endl;
    cin >> nmbrTwo;
    cout << endl;
    cout << "Enter third number:" << endl;
    cin >> nmbrThr;
    cout << endl;
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Largest number from two parameter function:" << endl;
    cout << max2( nmbrOne,  nmbrTwo) << endl << endl;
    cout << "Largest number from three parameter function:" << endl;
    cout << max1(nmbrOne, nmbrTwo, nmbrThr) << endl;

    //Exit stage right or left!
    return 0;
}

float max2(float n1, float n2)
{
    if(n1 > n2)
        return n1;
    else 
        return n2;
}
float max1(float n1, float n2, float n3)
{
    if(n1 > n2)
    {
        if(n1 > n3)
        {
           return n1;
        }else
        {
           return n3; 
        }
            
    }else 
        {
        if(n2 > n3)
            {
            return n2;    
            }  
        }
}