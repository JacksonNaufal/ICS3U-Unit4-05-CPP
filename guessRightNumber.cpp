// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On March 2022
// This is a loop adder

#include <iostream>

int main() {
    // this function is a loop adder
    std::string UserNumber;
    std::string UserEnter;
    int userNumberInt;
    int total = 0;
    int userInputInteger = 0;

    // input
    std::cout << "Enter your number!: ";
    std::cin >> UserNumber;
    std::cout << std::endl;

    // process & output
    try {
        userNumberInt = std::stoi(UserNumber);
        if (userNumberInt < 0) {
            std::cout << "Invalid Input" << std::endl;
        } else {
            for (int integerNumber = 0; integerNumber <
            userNumberInt; integerNumber++ ) {
                std::cout <<"Enter an integer: ";
                std::cin >> UserEnter;
                std::cout << std::endl;
                userInputInteger = std::stoi(UserEnter);
                if (userInputInteger < 0) {
                    continue;
                }
                total = total + userInputInteger;
                std::cout << "The Overall is " << total << "!" << std::endl;
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input.";
    }
    std::cout << "\nDone." << std::endl;
}
