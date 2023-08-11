#ifndef LETTERO_H
#define LETTERO_H

#include <stdlib.h>
#include <time.h> 
#include <iostream>
#include <chrono>
#include <ctime> 

void Lettero()
{
    srand(time(NULL));

    int letter = rand() % 25 + 0;

    char letters[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

    char ans = letters[letter];

    int totalGuesses = 6;
    int completedGuesses = 0;

    bool won = false;

    system("pause");

    std::cout << "You may begin guessing" << std::endl << "Lettero" << std::endl;
    auto start = std::chrono::system_clock::now();
    while (won == false)
    {
        char response = getchar();
        while (getchar() != '\n');


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
            std::cout << completedGuesses << "/" << totalGuesses << std::endl;
        }
    }
    auto end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);

    std::cout << "It took you " << elapsed_seconds.count() << " seconds." << std::endl;
}

#endif