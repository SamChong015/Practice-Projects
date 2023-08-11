#include <iostream>
#include <functional>
#include <map>
#include <cstdlib>

#include "RussianRoulette.h"
#include "PalindromeChecker.h"
#include "Lettero.h"

void continueRunning(const std::function<void()>& func)
{
    bool running = true;
    while (running)
    {
        func();

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

int main()
{
    std::map<std::string, std::function<void()>> projectDictionary;

    projectDictionary["RussianRoulette"] = RussianRoulette;
    projectDictionary["PalindromeChecker"] = PalindromeChecker;
    projectDictionary["Lettero"] = Lettero;

    std::cout << "Welcome to a compilation of all the projects I have made while slightly bored at work!" << std::endl;
    system("pause");

    bool running = true;
    while (running)
    {
        system("cls");

        std::cout << "Keys in the dictionary:" << std::endl << std::endl;;
        for (const auto& pair : projectDictionary) {
            std::cout << pair.first << std::endl;
        }
        std::cout << std::endl;

        std::cout << "What project do you want to test?" << std::endl;
        std::string key;
        std::cin >> key;

        system("cls");

        if (projectDictionary.find(key) != projectDictionary.end()) {
            continueRunning(projectDictionary[key]); // Call the function associated with the key
        }
        else {
            std::cout << "Function not found" << std::endl;
        }

        bool continuing = true;
        while (continuing)
        {
            std::cout << "Do you want to pick another project? N will terminate the program. Y/N" << std::endl;
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