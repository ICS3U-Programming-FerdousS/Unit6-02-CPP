// Copyright (c) 2022 Ferdous Sediqi All rights reserved.
// Created by: Ferdous
// Created on: May 25. 2022
// In this program inside loop we generate random number and store it
// inside an array then using another function and loop we find the
// max value inisde the array


#include <iostream>
// including string
#include <time.h>
// import decimal
#include <iomanip>
// include array
#include <array>
#include <string>
// including random number generator
#include <random>

// function to find max number
int FindMaxValue(int arrayOfNumber[]){
    // initialized max number variable
    int MaxNum = -1;

    // For loop to find max number inside the loop
    for (int counter = 0; counter < 10; counter++) {
        if (arrayOfNumber[counter] > MaxNum) {
            MaxNum = arrayOfNumber[counter];
        }
    }
    return MaxNum;
}

main() {
    // variables and constants
    int someRandomNumber;
    std::random_device rseed;
    const int MaxSize = 10;
    // declare an array
    int arrayOfNumber[MaxSize];

    // foor loop to show the number added inside the loop    
    for(int counter = 0; counter < MaxSize; counter++){
        // set random number range
        std::random_device rseed;
        std::mt19937 rgen(rseed()); // mersenne_twister
        std::uniform_int_distribution<int> idist(0,100); // [0,100]
        someRandomNumber = idist(rgen);
        // insert random number inside the array 
        arrayOfNumber[counter]= someRandomNumber;
        // display the number and its position in the array
        std::cout << someRandomNumber << " Added to the list at position " 
        << counter<< std::endl;
}
    // call the function
    int largestNum = FindMaxValue(arrayOfNumber);
    // display the max number
    std::cout << "The max value is " << largestNum << std::endl;
}
