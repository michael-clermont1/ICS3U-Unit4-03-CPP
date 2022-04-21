// Copyright (c) 2022 Michael Clermont All rights reserved
//
// Created by: Michael Clermont
// Created on: Feb 2022
// This program is a power program

#include <iostream>
#include <string>
#include <cmath>

int main() {
    // this function calculates the number with an exponent of 2
    std::string numberAsString;
    int numberAsInt;
    int loopCounter = 0;
    int sumNumber = 1;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> numberAsString;
    std::cout << "" << std::endl;

    // process & output
    try {
        numberAsInt = std::stoi(numberAsString);
        if (numberAsInt < 0) {
            std::cout << "That is not a positive integer." << std::endl;
        } else {
            for (int loopCounter = 0; loopCounter <= numberAsInt;
            loopCounter++) {
            sumNumber = pow(loopCounter, 2);
            std::cout << loopCounter << "² = " << sumNumber << std::endl;
        }
    }
    } catch (std::invalid_argument) {
        std::cout << "That is not an integer." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
