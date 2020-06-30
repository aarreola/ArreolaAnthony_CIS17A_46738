/* 
 * Author: Anthony Arreola
 * Date: 06/29/20
 * Purpose: Code-E Q3
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Constants like PI, e, Gravity, Conversions, 2D array size only!

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number Seed Here
    
    //Declare all Variables Here
    float a,b,c,d,e;
    //Input or initialize values Here
    cout << "Input 5 numbers." << endl;
    cin >> a >> b >> c >> d >> e;
    //Process/Calculations Here
    float avg = (a+b+c+d+e)/5;
    //Output Located Here
    cout << "The average is " << avg;
    //Exit
    return 0;
}