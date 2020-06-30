/* 
 * File:   main.cpp
 * Author: Arreola, Anthony
 *
 * Created on June 28, 2020, 7:21 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    // Declare variables
    float f,c;
    
    // Get Fahrenheit input
    
        cout << "Enter temperature (in °C) to convert to °F: ";
        cin >> c;
        
    // formula for Fahrenheit to Celsius is F = (9/5)C + 32
        f = c*9/5 + 32;
            
    // Display outputs
        cout << f << "°F";
        
    return 0;
}

