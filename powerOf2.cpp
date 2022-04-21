// Copyright (c) 2022 Alex De Meo All rights reserved
//
// Created By: Alex De Meo
// Date: 04s//22
// Description:Gets a number from user, calculates the power of every number
// within the range of 0 to the entered number
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::stoi;

int main() {
    string num;
    int number, square;

    cout << "Enter a number to be squared: ";
    cin >> num;
    // catch any invalid input
    try {
        number = stoi(num);

        // Ensure the number entered was positive
        if (number >= 0) {
            // used to loop through and calculate squares
            for (int counter = 0; counter <= number; counter++) {
                square = counter * counter;
                cout << "The square of " << counter << " is " << square << endl;
            }

        } else {
            cout << "The number must be positive or 0 for this program";
        }
    } catch (...) {
        cout << "Invalid Input";
    }
}
