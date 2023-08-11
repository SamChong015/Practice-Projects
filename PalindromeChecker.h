#ifndef PALINDROMECHECKER_H
#define PALINDROMECHECKER_H

#include <iostream>
#include <cstring> 
#include <string>
#include <algorithm>
#include <cctype>

bool isPalindrome(std::string input)
{

    const char* char_array = input.c_str();

    //removes spaces
    input.erase(std::remove_if(input.begin(), input.end(), ::isspace), input.end());


    //Itterates through chars, exits while loop if encounters a non palindrome
    bool Palindrome = true;
    int i = 0;
    while (Palindrome && i < input.length() / 2)
    {
        if (char_array[i] != char_array[(input.length() - 1) - i])
            Palindrome = false;
        i++;
    }

    return Palindrome;
}

void PalindromeChecker()
{
    bool running = true;
    while (running)
    {
        std::cout << "Enter your word or phrase." << std::endl;
        std::string input;
        getline(std::cin, input);

        std::cout << input << " is ";
        if (isPalindrome(input) == true)
            std::cout << "a palindrome." << std::endl;
        else
            std::cout << "not a palindrome." << std::endl;

        bool continuing = true;
        while (continuing)
        {
            std::cout << "Do you want to continue? Y/N" << std::endl;
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