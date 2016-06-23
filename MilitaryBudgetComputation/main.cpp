/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on June 20, 2016, 12:27 PM
 * Purpose: Military Budget
 */

//System Libraries
#include <iostream> //Input/Output Stream Library
#include <iomanip>  //formatting output
using namespace std;//namespace of the system libraries

//User Libraries

//Global Constants
const int CNVPERC=100;

//Function Prototypes

//Exection Begins here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    float milbgt=598e9f; //https://www.nationalpriorities.org/campaigns/military-spending-united-states/
    float fedbgt=3.8e12f;//https://www.nationalpriorities.org/budget-basics/federal-budget-101/spending/
    float percent;

    
    //Input data
    
    //Process data
    percent=milbgt/fedbgt*static_cast<float>(CNVPERC);
    
    //Output data
    cout<<"Military Budget = $"<<milbgt<<endl;
    cout<<"Federal Budget = $"<<fedbgt<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"the military budget percentage = "<<percent<<"%"<<endl;
    
    //Exit Stage Right!
    return 0;
}

