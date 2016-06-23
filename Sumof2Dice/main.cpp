/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on June 22, 2016, 12:27 PM
 * Purpose: the sum of 2 dice
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <cstdlib>  //Random number function
#include <ctime>    //Time function
using namespace std;//namespace of the system libraries

//User Libraries

//Global Constants

//Function Prototypes

//Exection Begins here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    unsigned char die1,die2,sum;
    
    //Input data
    srand(static_cast<unsigned int>(time(0)));
    
    //Process data
    die1=rand()%6+1;//Random Number [1,6]
    die2=rand()%6+1;//Random Number [1,6]
    sum=die1+die2;  //Random Number [2,12]
    
    //Output data
    cout<<"die1 = "<<static_cast<int>(die1)<<endl;
    cout<<"die2 = "<<static_cast<int>(die2)<<endl;
    cout<<"sum  = "<<static_cast<int>(sum)<<endl;
    //Exit Stage Right!
    return 0;
}

