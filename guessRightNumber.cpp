// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On March 2022
// This is a loop adder


#include <iostream>



int main() {
    // this function is a loop adder
    std::string integerAsNumber;
    int number;
    int total = 1;
    int loopNumber = 0;


    // input
    std::cout << "Enter your number!: ";
    std::cin >> integerAsNumber;
    std::cout << std::endl;

    // process & output
    try {
        number = std::stoi(integerAsNumber);
    do  {
        loopNumber = loopNumber + 1;
        total = total * loopNumber;
     } while (loopNumber < number);
        std::cout << "The sum of all the positive numbers from 1 to "
        << number << " is " << total << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input.";
    }
    std::cout << "\nDone." << std::endl;
}
