#ifndef NUMBERGUESSER_H
#define NUMBERGUESSER_H

#include <stdlib.h>
#include <time.h> 
#include <iostream>
#include <chrono>
#include <ctime> 

void NumberGuesser()
{
    srand(time(NULL));

    int ans = rand() % 100 + 0;

    int totalGuesses = 8;
    int completedGuesses = 0;

    bool won = false;

    system("pause");

    std::cout << "You have " << totalGuesses << " guesses, you may begin guessing" << std::endl;
    auto start = std::chrono::system_clock::now();
    while (won == false)
    {
        int response;
        std::cin >> response;

        completedGuesses++;

        if (response == ans)
        {
            std::cout << "You won in " << completedGuesses << "." << std::endl;
            won = true;
        }
        else if (completedGuesses == totalGuesses)
        {
            std::cout << "You lost, the answer was " << ans << "." << std::endl;
            won = true;
        }
        else
        {
            if (response < ans)
                std::cout << "higher" << std::endl;
            else
                std::cout << "lower" << std::endl;
        }
    }
    auto end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);

    std::cout << "It took you " << elapsed_seconds.count() << " seconds." << std::endl;
}

#endif