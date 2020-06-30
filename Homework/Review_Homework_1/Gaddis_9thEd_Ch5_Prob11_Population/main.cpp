/* 
 * File:   main.cpp
 * Author: Anthony Arreola
 *
 * Created on June 29, 2020, 9:52 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    /* Declare variables
     * num is starting organisms, average is the daily increase,
     * and days is the amount of days the population will increase */
    float num = 0.0;
    int days = 0;
    float average = 0.0;
    
    
    cout << "Enter the number of Organisms: ";
    cin >> num;
    /* Invalidates anything that is less than 2 in population and prompts
     * user to enter input again*/
        while (num < 2)
        {
            cout << "\nEnter the number of Organisms: ";
            cout << "(must be at least 2): ";
            cin >> num;
        }
    
    cout << "\nEnter the daily increase in population (as percentage): ";
    cin >> average;
    /* Invalidates anything that is less than 0 for the increase in population
     * and prompts the user to enter input again*/
        while (average < 0)
        {
            cout << "\nEnter the daily increase in population ";
            cout << "(must be great than 0): ";
            cin >> average;
        }
    
    cout << "\nEnter the number of days increasing: ";
    cin >> days;
    /* Invalidates anything that is less than 1 when entering number
     * of days the population is increasing and ask for user input*/
        while (days < 1)
        {
            cout << "\nEnter the number of days increasing: ";
            cout << "(must be greater than 1): ";
            cin >> days;
        }
    
    for (int count = 0; count!= days; count++)
    {
        num = num + (num * average);
        cout << "\nday: " << count +1 << "\tpopulation: " << setprecision(0);
        cout << fixed << num << endl;
    }
    return 0;
}
