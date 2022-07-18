 /* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on June 29, 2022, 2:56 PM
 * Purpose: Program to determine the cost of gas at one station compared to another. 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

// Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const float PERCENT=1e2f;//100 conversion to percent

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float gsPrcFl,//How full a tank of gas is in percentage
          gsTkSze,//The size of the gas tank in gallons
          gsMPG,  //Miles per gallon able to drive
          glnReqd;//Number of gallons required to fill the tank
          
    float gsSOPrc,//Price of gas per gallon at gas station one
          gsSODst,//Distance to gas station one
          prcFlSO,//Price to fill up at station one
          ttPrFSO,//Price to fill up at station one + distance traveled to gas station
          cstFDrO,//Cost it takes to get car to gas station one
          totDsTO;//Total distance driven to and from gas station one.
            
    float gsSTPrc,//Price of gas per gallon at gas station two
          gsSTDst,//Distance to gas station two
          prcFlST,//Price to fill up at station two
          ttPrFST,//Price to fill up at station one + distance traveled to gas station
          cstFDrT,//Cost it takes to get car to gas station two.
          totDsTT;//Total distance driven to and from gas station two.
    
    float cstDrSO,//Cost to drive to and from gas station one
          cstDrST;//Cost to drive to and from gas station two
    
    //Initialize Variables
    cout << "How full your gas tank is (in percent): ";
    cin >> gsPrcFl;
    cout << "The size of your gas tank (in gallons): ";
    cin >> gsTkSze;
    cout << "MPG for your car: ";
    cin >> gsMPG;
    glnReqd = ((PERCENT - gsPrcFl)*0.01) * gsTkSze;
    cout << "The amount of gas (in gallons) needed is: " << glnReqd <<endl<<endl;
    
    cout << "GAS STATION ONE" << endl;
    cout << "Price per gallon at gas station one: ";
    cin >> gsSOPrc;
    cout << "Distance to gas station one: ";
    cin >> gsSODst;
    totDsTO = gsSODst * 2;
    cstDrSO = (totDsTO/gsMPG)*gsSOPrc;//Cost to drive to station one
    cout << "It will cost $" << cstDrSO << " to drive to gas station one." <<endl;//Maybe delete this line later.
    cstFDrO = gsSODst * gsSOPrc;//
    prcFlSO = glnReqd * gsSOPrc;//
    ttPrFSO = prcFlSO + cstDrSO;//
    cout << "The total cost of filling up at gas station one is = $" << ttPrFSO <<endl;
    cout << "The cost of gas with travel added is = $" << ttPrFSO / glnReqd << endl <<endl;
    
    cout << "GAS STATION TWO" << endl;
    cout << "Price per gallon at gas station two: ";
    cin >> gsSTPrc;
    cout << "Distance to gas station two: ";
    cin >> gsSTDst;
    totDsTT = gsSTDst * 2;
    cstDrST = (totDsTT/gsMPG)*gsSTPrc;//Cost to drive to station one
    cout << "It will cost $" << cstDrST << " to drive to gas station two." <<endl;//Maybe delete this line later.
    cstFDrT = gsSTDst * gsSTPrc;//
    prcFlST = glnReqd * gsSTPrc;//
    ttPrFST = prcFlST + cstDrST;//
    cout << "The total cost of filling up at gas station two is = $" << ttPrFST <<endl;
    cout << "The cost of gas with travel added is = $" << ttPrFST / glnReqd << endl;
    
    
    //Map inputs to outputs -> The Process
    
    //Display Results
    
    //Exit stage right
    return 0;
}

