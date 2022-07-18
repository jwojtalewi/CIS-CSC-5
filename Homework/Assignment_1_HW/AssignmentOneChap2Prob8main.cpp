/* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on June 22, 2022, 8:02 PM
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
    float   itm1,//First item purchased
            itm2,//Second item purchased
            itm3,//Third item purchased
            itm4,//Fourth item purchased
            itm5,//Fifth item purchased
            sbTtl,//Subtotal
            slsTx,//Sales tax 
            fnlPr;//Final price
    
    //Initialize Variables
    itm1=15.95;//First item value
    itm2=24.95;//Second item value
    itm3=6.95;//Third item value
    itm4=12.95;//Fourth item value
    itm5=3.95;//Fifth item value
    
    //Map inputs to outputs -> The Process
    sbTtl=itm1+itm2+itm3+itm4+itm5,
    slsTx=sbTtl*0.07,
    fnlPr=sbTtl+slsTx;
    
    //Display Results
    cout<<"Item 1             = "<<itm1<<endl;
    cout<<"Item 2             = "<<itm2<<endl;
    cout<<"Item 3             = "<<itm3<<endl;
    cout<<"Item 4             = "<<itm4<<endl;
    cout<<"Item 5             = "<<itm5<<endl;
    cout<<"The subtotal is    = "<<sbTtl<<endl;
    cout<<"The sales tax is   = "<<slsTx<<endl;
    cout<<"The final price is = "<<fnlPr<<endl;
    
    //Exit stage right
    return 0;
}

