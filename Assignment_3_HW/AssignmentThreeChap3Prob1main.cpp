 /* 
 * File:   main.cpp
 * Author: John Wojtalewicz
 * Created on June 27, 2022, 2:56 PM
 * Purpose: Write a program that scores a rock-paper-scissors game.
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

// Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    string plyrOne, plyrTwo;
    char R, r, P, p, S, s;//Rock Paper and Scissors
    
    //Initialize Variables 
    cout << "Rock Paper Scissors Game" << endl;
    cout << "Input Player 1 and Player 2 Choices" << endl;
    cin >> plyrOne;
    cin >> plyrTwo;
    
    //Map inputs to outputs -> The Process    
    
    //Display Results
    if(plyrOne == plyrTwo){
        cout << "Nobody Wins";   
    } 
    
    if(plyrOne == "R" && plyrTwo == "P"){
        cout << "Paper covers rock.";
    }
    if(plyrOne == "r" && plyrTwo == "p"){
        cout << "Paper covers rock.";
    }
    if(plyrOne == "R" && plyrTwo == "S"){
        cout << "Rock breaks scissors.";
    }
    if(plyrOne == "r" && plyrTwo == "s"){
        cout << "Rock breaks scissors.";
    }
    if(plyrOne == "S" && plyrTwo == "P"){
        cout << "Scissors cuts paper.";
    }
    if(plyrOne == "s" && plyrTwo == "p"){
        cout << "Scissors cuts paper.";
    }
    if(plyrOne == "S" && plyrTwo == "R"){
        cout << "Rock breaks scissors.";
    }
    if(plyrOne == "s" && plyrTwo == "r"){
        cout << "Rock breaks scissors.";
    }
    if(plyrOne == "P" && plyrTwo == "R"){
        cout << "Paper covers rock.";
    }
    if(plyrOne == "p" && plyrTwo == "r"){
        cout << "Paper covers rock.";
    }
    if(plyrOne == "P" && plyrTwo == "S"){
        cout << "Scissors cuts paper.";
    }
    if(plyrOne == "p" && plyrTwo == "s"){
        cout << "Scissors cuts paper.";
    }

    
    if(plyrOne == "R" && plyrTwo == "p"){
        cout << "Paper covers rock.";
    }
    if(plyrOne == "r" && plyrTwo == "P"){
        cout << "Paper covers rock.";
    }
    if(plyrOne == "R" && plyrTwo == "s"){
        cout << "Rock breaks scissors.";
    }
    if(plyrOne == "r" && plyrTwo == "S"){
        cout << "Rock breaks scissors.";
    }
    if(plyrOne == "S" && plyrTwo == "p"){
        cout << "Scissors cuts paper.";
    }
    if(plyrOne == "s" && plyrTwo == "P"){
        cout << "Scissors cuts paper.";
    }
    if(plyrOne == "S" && plyrTwo == "r"){
        cout << "Rock breaks scissors.";
    }
    if(plyrOne == "s" && plyrTwo == "R"){
        cout << "Rock breaks scissors.";
    }
    if(plyrOne == "P" && plyrTwo == "r"){
        cout << "Paper covers rock.";
    }
    if(plyrOne == "p" && plyrTwo == "R"){
        cout << "Paper covers rock.";
    }
    if(plyrOne == "P" && plyrTwo == "s"){
        cout << "Scissors cuts paper.";
    }
    if(plyrOne == "p" && plyrTwo == "S"){
        cout << "Scissors cuts paper.";
    }
    //Exit stage right
    return 0;
}

