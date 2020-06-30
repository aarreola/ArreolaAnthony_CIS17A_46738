/* 
 * File: main.cpp
 * Author: Anthony Arreola
 * Date: 06/29/20
 * Purpose: Code-E Q2
 */

//System Libraries - Post Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed here when needed
    
    //Declare variables or constants here
    //7 characters or less
    float n1, n2, n3, n4;
    //Initialize or input data here
    cin >> n1 >> n2 >> n3 >> n4;
    //Display initial conditions, headings here
    cout ;
    //Process inputs  - map to outputs here
    
    //Format and display outputs here
    cout << fixed << setprecision(0) << setw(9) << n1;
    cout << fixed << showpoint << setprecision (1) << setw(10) << n1;
    cout << fixed << showpoint << setprecision (2) << setw(10) << n1 << endl;
   
    cout << fixed << noshowpoint << setprecision(0) << setw(9) << n2;
    cout << fixed << showpoint << setprecision (1) << setw(10) << n2;
    cout << fixed << showpoint << setprecision (2) << setw(10) << n2 << endl;
   
    cout << fixed << noshowpoint << setprecision(0) << setw(9) << n3;
    cout << fixed << showpoint << setprecision (1) << setw(10) << n3;
    cout << fixed << showpoint << setprecision (2) << setw(10) << n3 << endl;
   
    cout << fixed << noshowpoint << setprecision(0) << setw(9) << n4;
    cout << fixed << showpoint << setprecision (1) << setw(10) << n4;
    cout << fixed << showpoint << setprecision (2) << setw(10) << n4;
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}