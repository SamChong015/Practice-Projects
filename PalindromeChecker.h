#ifndef PALINDROMECHECKER_H
#define PALINDROMECHECKER_H

#include <iostream>
#include <cstring> 
#include <string>
#include <algorithm>
#include <cctype>

bool isPalindrome(std::string input)
{
    //makes all lowercase
    for (char& c : input) {
        c = std::tolower(c);
    }

    //turns into array
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
    system("pause");

    std::cout << "Enter your word or phrase." << std::endl;
    std::string input;
    std::cin >> input;

    std::cout << input << " is ";
    if (isPalindrome(input) == true)
        std::cout << "a palindrome." << std::endl;
    else
        std::cout << "not a palindrome." << std::endl;

}

#endif