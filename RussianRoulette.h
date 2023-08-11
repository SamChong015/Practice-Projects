#ifndef RUSSIANROULETTE_H
#define RUSSIANROULETTE_H

#include <iostream>
#include <stdlib.h>
#include <time.h> 
#include <fstream>
#include <string>
#include <iostream>
#include <thread>
#include <chrono>

void RussianRoulette()
{
    bool running = true;
    while (running)
    {
        std::cout << "Are you ready to play Russian Roulette?" << std::endl;
        system("pause");

        srand(time(NULL));

        int roulett = rand() % 6 + 1;

        if (roulett == 6)
        {
            std::ifstream file("RussianRoulette.txt"); // Open the file
            if (!file.is_open()) {
                std::cerr << "Error opening file: RussianRoulette.txt" << std::endl;
                return;
            }

            std::string line;
            while (std::getline(file, line)) { // Read each line from the file
                std::cout << line << std::endl; // Write the line to the console
                std::chrono::milliseconds duration(1000);
                std::this_thread::sleep_for(duration);
            }

            file.close(); // Close the file
        }
        else
        {
            std::cout << "You win this time... ";
        }
        
        bool continuing = true;
        while (continuing)
        {
            std::cout << "Do you want to continue? Y/N" << std::endl;
            std::string input;
            std::cin >> input;

            if (input == "N" || input == "n")
            {
                running = false;
                continuing = false;
            }
            else if (input == "Y" || input == "y")
            {
                running = true;
                continuing = false;
            }
        }
    }
}

#endif