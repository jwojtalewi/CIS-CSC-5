 /* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on July 8, 2022, 9:33 PM
 * Purpose: Create a program that takes in the names of three race 
 * participants and their completed race times. 
 */

//System Libraries
#include <iostream>
#include <string>
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
    string runrOne;//First runner in race
    string runrTwo;//Second runner in race 
    string runrThr;//Third runner in race
    
    int timeOne,//Runner one's time
        timeTwo,//Runner two's time
        timeThr;//Runner three's time
    
    
    //Initialize Variables
    cout << "Race Ranking Program" << endl;
    cout << "Input 3 Runners" << endl;
    cout << "Their names, then their times" << endl;
    cin >> runrOne;
    cin >> timeOne;
    cin >> runrTwo;
    cin >> timeTwo;
    cin >> runrThr;
    cin >> timeThr;
    
    //Map inputs to outputs -> The Process
    if(timeOne < timeTwo && timeOne < timeThr){
        cout << setw(3) << runrOne << "\t" << setw(3) << timeOne << endl;
        if(timeTwo < timeThr){
            cout << setw(3) << runrTwo << "\t" << setw(3) << timeTwo << endl;
            cout << setw(3) << runrThr << "\t" << setw(3) << timeThr;
        }else   
            cout << setw(3) << runrThr << "\t" << setw(3) << timeThr << endl;
            cout << setw(3) << runrTwo << "\t" << setw(3) << timeTwo;
    }else if(timeTwo < timeOne && timeTwo < timeThr){
        cout << setw(3) << runrTwo << "\t" << setw(3) << timeTwo << endl;
        if(timeOne < timeThr){
            cout << setw(3) << runrOne << "\t" << setw(3) << timeOne << endl;
            cout << setw(3) << runrThr << "\t" << setw(3) << timeThr;
        }else   
            cout << setw(3) << runrThr << "\t" << setw(3) << timeThr << endl;
            cout << setw(3) << runrOne << "\t" << setw(3) << timeOne;
    }else if(timeThr < timeOne && timeThr < timeTwo){
        cout << setw(3) << runrThr << "\t" << setw(3) << timeThr << endl;
        if(timeOne < timeTwo){
            cout << setw(3) << runrOne << "\t" << setw(3) << timeOne << endl;
            cout << setw(3) << runrTwo << "\t" << setw(3) << timeTwo;
        }else   
            cout << setw(3) << runrTwo << "\t" << setw(3) << timeTwo << endl;
            cout << setw(3) << runrOne << "\t" << setw(3) << timeOne;
    }
    
    //Display Results
    
    //Exit stage right
    return 0;
}

