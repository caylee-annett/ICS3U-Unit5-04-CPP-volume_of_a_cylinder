// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on May 2021
// This program calculates the volume of a cylinder and uses a return value

#include <iostream>
#include <string>
#include <cmath>

float VolumeCalculation(int radius, int height) {
    // This function calculates the volume
    float volume;

    volume = M_PI * pow(radius, 2) * height;

    return volume;
}


main() {
    // This function gets the radius and height
    std::string radiusInputString;
    int radiusInputInteger;
    std::string heightInputString;
    int heightInputInteger;
    float calculatedVolume;

    // Input
    std::cout << "This program calculates the volume of a cylinder."
        << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Enter the radius of the cylinder (cm): ";
    std::cin >> radiusInputString;
    std::cout << "Enter the height of the cylinder (cm): ";
    std::cin >> heightInputString;

    // Process
    while (true) {
        try {
            radiusInputInteger = std::stoi(radiusInputString);

            if (radiusInputInteger > 0) {
                break;
            } else {
                std::cout << "Must be a positive integer. Enter the "
                    "radius (cm): ";
                std::cin >> radiusInputString;
            }
        } catch (std::invalid_argument) {
                std::cout << radiusInputString << " is not a valid input. "
                    "Enter radius (cm): ";
                std::cin >> radiusInputString;
        }
    }
    while (true) {
        try {
            heightInputInteger = std::stoi(heightInputString);

            if (heightInputInteger > 0) {
                break;
            } else {
                std::cout << "Must be a positive integer. Enter the "
                    "height (cm): ";
                std::cin >> heightInputString;
            }
        } catch (std::invalid_argument) {
                std::cout << heightInputString << " is not a valid input. "
                    "Enter the height (cm): ";
                std::cin >> heightInputString;
        }
    }

    // Call functions
    calculatedVolume = VolumeCalculation(radiusInputInteger,
                                         heightInputInteger);

    // Output
    std::cout << "" << std::endl;
    std::cout << "The volume of a cylinder with a radius of "
        << radiusInputInteger << " cm and a height of " << heightInputInteger
        << " cm is " << calculatedVolume << " cm³." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
