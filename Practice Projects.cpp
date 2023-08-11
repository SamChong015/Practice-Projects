#include <iostream>
#include "RussianRoulette.h"
#include <functional>

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
    continueRunning(RussianRoulette);
}