 /* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on July 11, 2022, 6:17 PM
 * Purpose: Create a program that converts Arabic (normal) numbers into
 *          an output of Roman Numerals.
 */

//System Libraries
#include <iostream>
#include <cstring>
using namespace std;

//User Libraries

// Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {

//Function Prototypes

//Execution begins here!
    //Declare Variables
    unsigned char n1000s,n100s,n10s,n1s;
    unsigned short arabic;
    string roman="";
    
    //Initialize Variables
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>arabic;
    
    //Map the inputs/known to the outputs
    n1000s=arabic/1000;
    n100s=(arabic-n1000s*1000)/100;
    n10s=arabic%100/10;
    n1s=arabic%10;
    
    //Display the outputs
    
    //Convert the 1000's place
    switch(n1000s){
        case 2:roman+="MM";break;
        case 1:roman+="M";break;
    }
    
    switch(n100s){
        case 9:roman+="CM";break;
        case 8:roman+="DCCC";break;
        case 7:roman+="DCC";break;
        case 6:roman+="DC";break;
        case 5:roman+="D";break;
        case 4:roman+="CD";break;
        case 3:roman+="CCC";break;
        case 2:roman+="CC";break;
        case 1:roman+="C";break;
    }
    
    switch(n10s){
        case 9:roman+="XC";break;
        case 8:roman+="LXXX";break;
        case 7:roman+="LXX";break;
        case 6:roman+="LX";break;
        case 5:roman+="L";break;
        case 4:roman+="XL";break;
        case 3:roman+="XXX";break;
        case 2:roman+="XX";break;
        case 1:roman+="X";break;
    }
    
    switch(n1s){
        case 9:roman+="IX";break;
        case 8:roman+="VIII";break;
        case 7:roman+="VII";break;
        case 6:roman+="VI";break;
        case 5:roman+="V";break;
        case 4:roman+="IV";break;
        case 3:roman+="III";break;
        case 2:roman+="II";break;
        case 1:roman+="I";break;
    }
    //Output the conversion
    if(arabic > 3000 || arabic < 1000){
        cout << arabic << " is Out of Range!";
    }
        else{
            cout<<arabic<<" is equal to "<<roman;
    }

    //Exit the program
    return 0;
}
    

