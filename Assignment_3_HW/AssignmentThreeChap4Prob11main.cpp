 /* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on July 7, 12:58 PM
 * Purpose: Calculate the amount of points each shopper earns at the book store.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

// Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    unsigned int bookPch;//Number of books purchased at the store.
    
    //Initialize Variables
    cout << "Book Worm Points" << endl;
    cout << "Input the number of books purchased this month." << endl;
    cin >> bookPch;
    
    //Map inputs to outputs -> The Process
    cout << "Books purchased ="<<setw(3)<<bookPch<<endl;
    if (bookPch==0){
        cout << "Points earned   ="<<setw(3)<<"0";
    }
    if (bookPch==1){
        cout << "Points earned   ="<<setw(3)<<"5";
    }
    if (bookPch==2){
        cout << "Points earned   ="<<setw(3)<<"15";
    }
    if (bookPch==3){
        cout << "Points earned   ="<<setw(3)<<"30";
    }
    if (bookPch>=4){
        cout << "Points earned   ="<<setw(3)<<"60";
    }
    
    //Display Results
    
    //Exit stage right
    return 0;
}

