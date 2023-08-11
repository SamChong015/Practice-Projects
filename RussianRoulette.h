#ifndef RUSSIANROULETTE_H
#define RUSSIANROULETTE_H

#include <iostream>
#include <stdlib.h>
#include <time.h> 
#include <fstream>
#include <string>

void RussianRoulette()
{
    std::cout << "Are you ready to play Russian Roulette?" << std::endl;
    system("pause");

    int roulett = rand() % 6 + 1;

    std::cout << "Number is " << roulett << std::endl;

    if (roulett == 6)
    {
        std::ifstream file("RussianRoulette"); // Open the file
        if (!file.is_open()) {
            std::cerr << "Error opening file: RussianRoulette.txt" << std::endl;
            return;
        }

        std::string line;
        while (std::getline(file, line)) { // Read each line from the file
            std::cout << line << std::endl; // Write the line to the console
        }

        file.close(); // Close the file
    }
}

#endif