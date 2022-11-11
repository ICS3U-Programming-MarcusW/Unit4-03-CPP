// Copyright (c) 2022 Marcus Wehbi All rights reserved.
//
// Created by: Marcus Wehbi
// Date: Nov 7, 2022
// This program gets a positive number from the user
// It then calculates and displays the squares up until that number, from 0.
#include <cmath>
#include <iostream>

int main() {
    // initialize the variables
    // declare the answer for the power of twos
    int powerOfTwo = 0;
    // variable for the users number input
    int userNum;
    // get as string then convert
    std::string userNumString;

    // get the user number as a string
    std::cout << "Enter a positive number: ";
    std::cin >> userNumString;
    std::cout << std::endl;

    try {
        // convert the users number into an integer
        userNum = std::stoi(userNumString);
        std::cout << "" << std::endl;

        // calculate all the power of two's from 0 until the users number
        if (userNum > 0) {
            // calculate the square of all numbers from 0 to user number
            for (int loopCounter = 0; loopCounter <= userNum; loopCounter++) {
                // Calculate the square
                powerOfTwo = pow(loopCounter, 2);
                // Add the answer to the string
                std::cout << loopCounter << "^2 = " << powerOfTwo << std::endl;
            }
        } else {
            // Tell the user to not enter a negative number
            std::cout << "You entered a negative number, please try again.";
        }
        // Tell the user that they didn't input a valid integer
    } catch (std::invalid_argument) {
        // The user did not enter an integer.
        std::cout << userNumString << " is not an integer.\n";
        std::cout << "" << std::endl;
    }
    // finally statement to thank the user for playing
    std::cout << "Thanks for Playing.";
}
