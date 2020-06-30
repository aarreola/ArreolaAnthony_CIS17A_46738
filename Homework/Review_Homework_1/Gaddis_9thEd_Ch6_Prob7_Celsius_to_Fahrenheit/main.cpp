/* 
 * File:   main.cpp
 * Author: Anthony Arreola
 *
 * Created on June 29, 2020, 10:40 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
// Celsius function that uses the conversion formula to be called back to
float celsius (float f)
{
    return 5.0/9 * (f-32);
}
int main(int argc, char** argv) {

    // makes a loop for Fahrenheit temperatures from 0 to 20
    for (int i = 0; i <= 20; i++)
    {
        // sets the width to 10 spaces aligns left and shows no signs for
        // Fahrenheit numbers 0-20
        cout << setw(10) << left << noshowpos << i;
        // displays the negative signs sets the width to 10 a fixed point
        // notation set to 3 points
        cout << showpos << setw(10) << fixed << setprecision(3);
        cout << celsius(i) << endl;
    }
    return 0;
}

