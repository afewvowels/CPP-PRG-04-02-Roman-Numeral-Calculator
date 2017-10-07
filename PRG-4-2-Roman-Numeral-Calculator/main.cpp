//
//  main.cpp
//  PRG-4-2-Roman-Numeral-Calculator
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a program that asks the user to enter a number within the range of 1 through 10.
//  Use a switch statement to display the Roman numeral version of the that number.
//  Input Validation: Do not accept a number less than 1 or greater than 10.

#include <iostream>

using namespace std;

int main()
{
    const string STR_NUMBER_01 = "I",
                 STR_NUMBER_02 = "II",
                 STR_NUMBER_03 = "III",
                 STR_NUMBER_04 = "IV",
                 STR_NUMBER_05 = "V",
                 STR_NUMBER_06 = "VI",
                 STR_NUMBER_07 = "VII",
                 STR_NUMBER_08 = "VIII",
                 STR_NUMBER_09 = "IX",
                 STR_NUMBER_10 = "X";
    
    int intNumberUser;
    
    cout << "Please enter a number between 1 and 10\n"
    << "to get its Roman numeral value:\n";
    cin >> intNumberUser;
    while(!cin || intNumberUser < 1 || intNumberUser > 10)
    {
        cout << "Please enter an integer number between 1 and 10:\n";
        cin.clear();
        cin.ignore();
        cin >> intNumberUser;
    }
    
    switch(intNumberUser)
    {
        case 1: cout << "You entered 1.\n"
            << "The Roman numeral value for 1 is:\n"
            << STR_NUMBER_01 << endl;
            break;
            
        case 2: cout << "You entered 2.\n"
            << "The Roman numeral value for 2 is:\n"
            << STR_NUMBER_02 << endl;
            break;
            
        case 3: cout << "You entered 3.\n"
            << "The Roman numeral value for 3 is:\n"
            << STR_NUMBER_03 << endl;
            break;
            
        case 4: cout << "You entered 4.\n"
            << "The Roman numeral value for 4 is:\n"
            << STR_NUMBER_04 << endl;
            break;
            
        case 5: cout << "You entered 5.\n"
            << "The Roman numeral value for 5 is:\n"
            << STR_NUMBER_05 << endl;
            break;
            
        case 6: cout << "You entered 6.\n"
            << "The Roman numeral value for 6 is:\n"
            << STR_NUMBER_06 << endl;
            break;
            
        case 7: cout << "You entered 7.\n"
            << "The Roman numeral value for 7 is:\n"
            << STR_NUMBER_07 << endl;
            break;
            
        case 8: cout << "You entered 8.\n"
            << "The Roman numeral value for 8 is:\n"
            << STR_NUMBER_08 << endl;
            break;
            
        case 9: cout << "You entered 9.\n"
            << "The Roman numeral value for 9 is:\n"
            << STR_NUMBER_09 << endl;
            break;
            
        case 10: cout << "You entered 10.\n"
            << "The Roman numeral value for 10 is:\n"
            << STR_NUMBER_10 << endl;
            break;
    }
    
    return 0;
}




