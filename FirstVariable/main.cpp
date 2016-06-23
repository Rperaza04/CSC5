/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on June 20, 2016, 12:27 PM
 * Purpose: Program utilizing
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
using namespace std;//iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Exection Begins here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    char cnum;//Character Number
    int inum;//Integer Number
    
    //Input data
    cout<<"Type in 2 -> 1 digit numbers -> D D"<<endl;
    cin>>cnum>>inum;
    
    //Process data
    
    
    //Output data
    cout<<"The Character Number = "<<cnum;
    cout<<" which has a value of "<<static_cast<int>(cnum)<<endl;
    cout<<"The integer number    = "<<inum;
    cout<<" which has a value of "<<static_cast<int>(inum)<<endl;
    
    //Exit Stage Right!
    return 0;
}

