 /* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on July 10, 2022, 9:09 PM
 * Purpose: Program to create a menu of programs from Assignment_3
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
    int choose;//Choose a problem
    
    //Initialize Variables
    do{
        //List of Problems which can be run by the program
        cout<<"Choose from the following Menu Items"<<endl;
        cout<<"Problem 0 - Sort Names - Gaddis 9thEd Chap4 Prob8"<<endl;
        cout<<"Problem 1 - Books - Gaddis 9thEd Chap4 Prob11"<<endl;
        cout<<"Problem 2 - Bank Charges - Gaddis 9thEd Chap4 Prob12"<<endl;
        cout<<"Problem 3 - Race - Gaddis 9thEd Chap4 Prob14"<<endl;
        cout<<"Problem 4 - Internet Service Provider - Gaddis 9thEd Chap4 Prob23"<<endl;
        cout<<"5 or greater, all negatives to exit"<<endl;
        cin>>choose;
        
        switch(choose){
            
            case 0:
                {//Declare Variables
                    string nameOne;
                    string nameTwo;
                    string nameThr;
    
                //Initialize or input i.e. set variable values
                    cout << "Sorting Names" << endl;
                    cout << "Input 3 names" << endl;
                    cin >> nameOne;
                    cin >> nameTwo;
                    cin >> nameThr;
    
                //Map inputs -> outputs
                    if (nameOne < nameTwo && nameOne < nameThr){        //Process if name one is first
        cout << nameOne << endl;
        if(nameTwo < nameThr){                          //Process if name two is second and name three is third
            cout << nameTwo << endl << nameThr;
        }else cout << nameThr << endl << nameTwo;       //Process if name three is second and name two is third
    }else if(nameTwo < nameOne && nameTwo < nameThr){   //Process if name two is first
        cout << nameTwo << endl;
        if(nameOne < nameThr){                          //Process if name one is second and name three is third
            cout << nameOne << endl << nameThr;
        }else cout << nameThr << endl << nameOne;       //Process if name three is second and name one is third
    }else if(nameThr < nameOne && nameThr < nameTwo){   //Process if name three is first
                        cout << nameThr << endl;                         
                        if(nameOne < nameTwo){                          //Process if name one is second and name two is third 
                            cout << nameOne << endl << nameTwo;
                        }else cout << nameTwo << endl << nameOne;       //Process if name two is second and name three is third
                    }
                //Display the output
                //Exit stage right or left!
            break;}
                
            case 1:{
                //Declare Variables
                unsigned int bookPch;//Number of books purchased at the store.
    
                //Initialize or input i.e. set variable values
                cout << "Book Worm Points" << endl;
                cout << "Input the number of books purchased this month." << endl;
                cin >> bookPch;
    
                //Map inputs -> outputs
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
            break;}
            case 2:{
                //Declare Variables
                    float bnkBlnc,//Amount of money person has in bank
                          nmbrChk,//Number of checks the customer has written
                          stdBFee,//Standard $10 fee applied at every month
                          fwrTwCh,//Fee for checks 0-19
                          twTTFCh,//Fee for checks 20-39
                          frTSxCh,//Fee for checks 40-59
                          sxAAbve,//Fee for checks 60 and up
                          ttChFee,//Total fee for checks written
                          lowBlnF,//Fee for having a balance below $400
                          newBlnc;//Amount of money had after charges are applied
    
                //Initialize or input i.e. set variable values
                    stdBFee = 10;// Standard Fee (in dollars) 
                    fwrTwCh = 0.10;//Fee (in cents) applied to checks 0 - 19
                    twTTFCh = 0.08;//Fee (in cents) applied to checks 20 - 39
                    frTSxCh = 0.06;//Fee (in cents) applied to checks 40 - 59
                    sxAAbve = 0.04;//Fee (in cents) applied to checks 60 and above
                    lowBlnF = 15;//Fee (in dollars) applied if the amount in account is below $400
    
                    cout << "Monthly Bank Fees" << endl;
                    cout << "Input Current Bank Balance and Number of Checks" << endl;
                    cin >> bnkBlnc;
                    cin >> nmbrChk;
    
                //Map inputs -> outputs
                    if (nmbrChk < 20){
                        ttChFee = nmbrChk * fwrTwCh;//Total check fee for under 20 checks
                    }if (nmbrChk < 39 && nmbrChk >= 20){
                        ttChFee = nmbrChk * twTTFCh;//Total check fee for 20 - 39 checks
                    }if (nmbrChk < 59 && nmbrChk >= 40){
                        ttChFee = nmbrChk * frTSxCh;//Total check fee for 40 - 59 checks
                    }if (nmbrChk >= 60){
                        ttChFee = nmbrChk * sxAAbve;//Total check fee for 60 checks and over
                    }
    
                //Display the outputs
                    if (bnkBlnc > 0){
                    if(bnkBlnc < 400){
                    newBlnc = (((bnkBlnc - lowBlnF) - ttChFee) - stdBFee);
                    cout << fixed << showpoint << setprecision(2);
                    cout << "Balance     $" << setw(9) << bnkBlnc << endl;
                    cout << "Check Fee   $" << setw(9) << ttChFee << endl;
                    cout << "Monthly Fee $" << setw(9) << stdBFee << endl;
                    cout << "Low Balance $" << setw(9) << lowBlnF << endl;
                    cout << "New Balance $" << setw(9) << newBlnc;
                    }else
                    newBlnc = ((bnkBlnc - stdBFee) - ttChFee);
                    cout << fixed << showpoint << setprecision(2);
                    cout << "Balance     $" << setw(9) << bnkBlnc << endl;
                    cout << "Check Fee   $" << setw(9) << ttChFee << endl;
                    cout << "Monthly Fee $" << setw(9) << stdBFee << endl;
                    cout << "Low Balance $     0.00" << endl;
                    cout << "New Balance $" << setw(9) << newBlnc;        
                    }else 
                    cout << "URGENT: ACCOUNT IS OVERDRAWN";

                //Exit stage right or left!
            break;}
            case 3:{
                //Declare Variables
                string runrOne;//First runner in race
                string runrTwo;//Second runner in race 
                string runrThr;//Third runner in race
    
                int timeOne,//Runner one's time
                    timeTwo,//Runner two's time
                    timeThr;//Runner three's time
    
                //Initialize or input i.e. set variable values
                    cout << "Race Ranking Program" << endl;
                    cout << "Input 3 Runners" << endl;
                    cout << "Their names, then their times" << endl;
                    cin >> runrOne;
                    cin >> timeOne;
                    cin >> runrTwo;
                    cin >> timeTwo;
                    cin >> runrThr;
                    cin >> timeThr;
    
                //Map inputs -> outputs
                    if(timeOne < timeTwo && timeOne < timeThr){
                        cout << setw(3) << runrOne << "\t" << setw(3) << timeOne << endl;
                        if(timeTwo < timeThr){
                            cout << setw(3) << runrTwo << "\t" << setw(3) << timeTwo << endl;
                         cout << setw(3) << runrThr << "\t" << setw(3) << timeThr;
                        }else   cout << setw(3) << runrThr << "\t" << setw(3) << timeThr << endl;
                                cout << setw(3) << runrTwo << "\t" << setw(3) << timeTwo;
                    }else if(timeTwo < timeOne && timeTwo < timeThr){
                        cout << setw(3) << runrTwo << "\t" << setw(3) << timeTwo << endl;
                        if(timeOne < timeThr){
                            cout << setw(3) << runrOne << "\t" << setw(3) << timeOne << endl;
                            cout << setw(3) << runrThr << "\t" << setw(3) << timeThr;
                        }else   cout << setw(3) << runrThr << "\t" << setw(3) << timeThr << endl;
                                cout << setw(3) << runrOne << "\t" << setw(3) << timeOne;
                    }else if(timeThr < timeOne && timeThr < timeTwo){
                        cout << setw(3) << runrThr << "\t" << setw(3) << timeThr << endl;
                        if(timeOne < timeTwo){
                            cout << setw(3) << runrOne << "\t" << setw(3) << timeOne << endl;
                            cout << setw(3) << runrTwo << "\t" << setw(3) << timeTwo;
                        }else   cout << setw(3) << runrTwo << "\t" << setw(3) << timeTwo << endl;
                                cout << setw(3) << runrOne << "\t" << setw(3) << timeOne;
                    }
    
                //Display the outputs

                //Exit stage right or left!   
            break;}
            case 4:{
                    string pckgeSl;
                    float  pckgeA, pckgeB, pckgeC,
                           pckgeAP, pckgeBP, pckgeCP,
                           pckgeAO, pckgeBO, hrsUsed,
                           finalPr;
    
                //Initialize or input i.e. set variable values
                    pckgeAP = 9.95;
                    pckgeBP = 14.95;
                    pckgeCP = 19.95;
                    pckgeAO = 2.00;
                    pckgeBO = 1.00;
    
                    cout << "ISP Bill" << endl;
                    cout << "Input Package and Hours" << endl;
                    cin >> pckgeSl;
                    cin >> hrsUsed;
    
                    if(hrsUsed > 744){
                    cout << "Program Failed";
                    }
    
                    pckgeA = (pckgeAP + ((hrsUsed-10) * pckgeAO));
                    pckgeB = (pckgeBP + ((hrsUsed-20) * pckgeBO));
                    pckgeC = pckgeCP;
    
                //Map inputs -> outputs
                    if(pckgeSl == "A"){
                    finalPr = pckgeA;
                    }
                    if(pckgeSl == "B"){
                    finalPr = pckgeB;
       
                    }
                    if(pckgeSl == "C"){
                    finalPr = pckgeC;
                    }
    
                //Display the 
                    cout << fixed << showpoint << setprecision(2);
                    cout << "Bill = $" << setw(6) << finalPr;

                //Exit stage right or left! 
            break;}
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=0 && choose<=4);
    
    //Map inputs to outputs -> The Process
    
    //Display Results
    
    //Exit stage right
    return 0;
}

