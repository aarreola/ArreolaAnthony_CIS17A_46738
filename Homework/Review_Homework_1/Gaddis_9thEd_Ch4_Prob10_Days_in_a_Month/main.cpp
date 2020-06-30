/* 
 * File:   main.cpp
 * Author: Anthony Arreola
 *
 * Created on June 28, 2020, 7:50 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    // Declare variables
    int month;
    int year;
    
    // Ask user for input of month and year and retrieve the input
    cout << "Enter a Month (1-12): ";
    cin >> month;
    cout << "\nEnter a Year: ";
    cin >> year;
    
    // Check for leap years
    if (month == 2) 
    {
        // The year modulus 4 comes out to 0 and year modulus 100 is not 0 
        // than it displays 29 days OR if the year modulus 400 is 0 it will
        // also display 29 days. 
        if ((year % 4 == 0 && year % 100 !=0)||(year % 400 == 0))
        {
            // If it is a leap year then February (month 2) will have 29 days
            cout << "\n29 days" << endl;
        }
            else 
            { 
            // If it is not a leap year for February (month 2) then 28 days
            // will display
            cout << "\n28 days" << endl;
            }
    }
            // If any of these months are chosen it will come out to 31 days
        else if(month == 1 || month == 3 || month == 5 || 
                month == 7 || month == 8 || month == 10 || 
                month ==12)
        {
            cout << "\n31 days" << endl;
        } 
        else 
        {
            // 30 days for any other month 
            cout << "\n30 days" << endl;
        }

    return 0;
}

