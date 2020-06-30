/* 
 * File:   main.cpp
 * Author: Anthony Arreola
 *
 * Created on June 27, 2020, 7:37 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

float yen_per_dollar = 98.93;
float euros_per_dollar = 0.74;
/*
 * 
 */
int main(int argc, char** argv) {

    // Declare variables
    float dollar;
    float euro_sum;
    float yen_sum;
    
    // Retrieve inputs
    cout << "Enter amount of dollars to convert: $";
    cin >> dollar;
    
    // 
    yen_sum = dollar * yen_per_dollar;
    euro_sum = dollar * euros_per_dollar;
    
    // Display the output of conversion from dollar to yen, and euros
    cout << fixed << showpoint << setprecision(2);
    cout << "$" << dollar << " is equal to:" <<endl;
    cout << yen_sum << "yen" << endl;
    cout << euro_sum << "euros" << endl;
    
    return 0;
}

