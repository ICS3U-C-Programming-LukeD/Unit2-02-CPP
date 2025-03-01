// Copyright (c) 2025 Luke Di Bert All rights reserved.
//
// Created by: Luke Di Bert
// Date: Feb 28, 2025
// Calculates the circumference of a circle using tau

#include <cmath>
// adds math library
#include <iostream>
// adds iostream library
const float TAU = 6.28;
int main() {
    int radius;
    // creates a variable to store input for radius
    std::cout << "Calculates the circumference of a circle" << std::endl;
    // introduces program
    std::cout << "Enter radius: " << std::endl;
    // prompts user to give radius of rectangle
    std::cin >> radius;
    // stores user input inside the radius variable
    std::cout << "The circumference is: " << (radius * TAU) << std::endl;
    // performs circumference calculation and displays answer
}
