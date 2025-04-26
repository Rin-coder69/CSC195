#pragma once
#include <iostream>
#include <limits>
int GetInt();
float GetFloat();

template<typename T>
 T GetData() {
    T x;

    //std::cout << std::numeric_limits<int>::max() << std::endl; // Get the maximum value for int
    while (true) {

        std::cin >> x;

        if (std::cin.fail()) {
            std::cin.clear(); // clear the fail state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
            std::cout << "Invalid input. Please enter a valid number.\n";
        }
        else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // flush any extra input
            return x;
        }
    }
}