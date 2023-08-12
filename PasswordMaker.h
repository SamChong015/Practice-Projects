#ifndef PASSWORDMAKER_H
#define PASSWORDMAKER_H

#include <iostream>
#include <functional>
#include <map>
#include <cctype>
#include <algorithm>
#include <string>

// Testing password for sanity !CANADA!555555!5550AA!BLUEFG!HiJkLM!nOpQrS!TuVwXY!zXyCvB!zXyCvB

std::string updatePass(std::string password)
{
	std::cout << "Enter your password ";
	std::getline(std::cin, password);
	return password;
}

bool specialChar(const char* char_array)
{
	for(int i = 0; i < std::strlen(char_array); i++)
	{
		if(std::isalpha(char_array[i]) && char_array[i] < 0 && char_array[i] > 9)
			return true;
	}
} 

bool hasSubway(std::string password)
{
	std::string countries[22] = {"china", "canada", "unitedstates", "japan", "singapore", "hongkong", "germany", "taiwan", "unitedkingdom", "southkorea", "russia", "france", "spain", "india", "argentina", "mexico", "philippines", "newzealand", "malaysia", "brazil", "australia", "unitedarabemirates"};
	
	password.erase(std::remove_if(password.begin(), password.end(), ::isspace), password.end());
	std::transform(password.begin(), password.end(), password.begin(), ::tolower);

	int numCountries = sizeof(countries) / sizeof(countries[0]);
	for(int i = 0; i < numCountries; i++)
	{
		if(password.find(countries[i]) != std::string::npos)
			return true;
	}
	return false;
}

bool needDigits(const char* char_array, int neededDigits)
{
	int count = 0;
	for(int i = 0; i < std::strlen(char_array); i++)
		if(std::isdigit(char_array[i]))
			count++;
	if(count == neededDigits)
		return true;
	else
		return false;
}

bool sumDigits(const char* char_array, int sumedDigits)
{
	int count = 0;
	for(int i = 0; i < std::strlen(char_array); i++)
		if (std::isdigit(char_array[i]))
			count += char_array[i] - '0';
	if(count == sumedDigits)
		return true;
	else
		return false;
}

bool specialCharEvery(const char* char_array, int specialCharEveryVal)
{
	for (int i = 0; i < std::strlen(char_array); i++)
	{
		if (std::isdigit(char_array[i]) || std::isalpha(char_array[i]))
			return false;
		i += specialCharEveryVal-1;
	}
	return true;
}

bool colourRainbow(std::string password)
{
	std::string colours[] = {"red", "orange", "yellow", "green", "blue", "indigo", "violet"};
	
	password.erase(std::remove_if(password.begin(), password.end(), ::isspace), password.end());
	std::transform(password.begin(), password.end(), password.begin(), ::tolower);

	int numColours = sizeof(colours) / sizeof(colours[0]);
	for(int i = 0; i < numColours; i++)
	{
		if(password.find(colours[i]) != std::string::npos)
			return true;
	}
	return false;
}

bool alphalim(const char* char_array)
{
	int maxVal = 5;
	std::map <char, int> alphabet = {{'a', 0}, {'b', 0}, {'c', 0}, {'d', 0}, {'e', 0}, {'f', 0}, {'g', 0}, {'h', 0}, {'i', 0}, {'j', 0}, {'k', 0}, {'l', 0}, {'m', 0}, {'n', 0}, {'o', 0}, {'p', 0}, {'q', 0}, {'r', 0}, {'s', 0}, {'t', 0}, {'u', 0}, {'v', 0}, {'w', 0}, {'x', 0}, {'y', 0}, {'z', 0}};
	for(int i = 0; i < std::strlen(char_array); i++)
	{
		char lowercase = std::tolower(char_array[i]);
		if (alphabet.find(lowercase) != alphabet.end()) 
		{
            alphabet[lowercase]++;
			if (alphabet[lowercase] > maxVal)
				return false;
		}
		
	}
	return true;
}

bool pokerBestHand(std::string password)
{
	std::string bestHand = "AA";
	if(password.find(bestHand) != std::string::npos)
			return true;
	return false;
}

bool halfUpper(const char* char_array) //rounded down
{
	int amountNeed = std::strlen(char_array) / 2;
	int amountCurr = 0;
	for (int i = 0; i < std::strlen(char_array); i++)
		if (std::isupper(char_array[i]))
			amountCurr++;
	if (amountCurr == amountNeed)
		return true;
	else
		return false;
}

bool everyLetter(const char* char_array)
{
	int maxVal = 5;
	std::map <char, int> alphabet = { {'a', 0}, {'b', 0}, {'c', 0}, {'d', 0}, {'e', 0}, {'f', 0}, {'g', 0}, {'h', 0}, {'i', 0}, {'j', 0}, {'k', 0}, {'l', 0}, {'m', 0}, {'n', 0}, {'o', 0}, {'p', 0}, {'q', 0}, {'r', 0}, {'s', 0}, {'t', 0}, {'u', 0}, {'v', 0}, {'w', 0}, {'x', 0}, {'y', 0}, {'z', 0} };
	for (int i = 0; i < std::strlen(char_array); i++)
	{
		char lowercase = std::tolower(char_array[i]);
		if (alphabet.find(lowercase) != alphabet.end())
			alphabet[lowercase]++;
	}

	for (const auto& pair : alphabet)
		if (pair.second == 0)
			return false;
	return true;
}

bool oddChar(const char* char_array)
{
	if (std::strlen(char_array) % 2 == 0)
		return false;
	return true;
}

bool divisibleBy(const char* char_array, int totalDivisible)
{
	if (std::strlen(char_array) % totalDivisible == 0)
		return true;
	return false;
}

void PasswordMaker()
{
	std::cout << "Welcome to Password Maker, have fun :)" << std::endl;
	std::string password;
	system("pause");

	std::cout << "Create your password" << std::endl;
	std::getline(std::cin, password);
	const char* char_array = password.c_str();

	bool isValid = false;

	int minlength = 8;
	int neededDigits = 10;
	int sumedDigits = 45;
	int specialCharEveryVal = 7;
	int totalDivisible = 7;

	do
	{
		if (std::strlen(password.c_str()) < minlength)
		{
			std::cout << "Must have at least " << minlength << " characters." << std::endl;

			password = updatePass(password);

			char_array = password.c_str();
		}

		isValid = specialChar(password.c_str()) && hasSubway(password) && needDigits(password.c_str(), neededDigits) &&
			sumDigits(password.c_str(), sumedDigits) && specialCharEvery(password.c_str(), specialCharEveryVal) && colourRainbow(password) &&
			alphalim(password.c_str()) && pokerBestHand(password) && halfUpper(password.c_str()) && 
			everyLetter(password.c_str()) && oddChar(password.c_str()) && divisibleBy(password.c_str(), totalDivisible);

		if (!specialChar(char_array))
			std::cout << "Must have at least one special character." << std::endl;
		else if (!hasSubway(password))
			std::cout << "Your password must contain a country that has Subway." << std::endl;
		else if (!needDigits(char_array))
			std::cout << "Your password must contain exactly " << neededDigits << " digits." << std::endl;
		else if (!sumDigits(char_array))
			std::cout << "The digits in your password must add to " << sumedDigits << "." << std::endl;
		else if (!specialCharEvery(char_array))
			std::cout << "Starting at the first character, every " << specialCharEveryVal << " character must be a special character." << std::endl;
		else if (!colourRainbow(password))
			std::cout << "Your password must include a colour from the rainbow." << std::endl;
		else if (!alphalim(char_array))
			std::cout << "Your password may not have more than 5 of any letter." << std::endl;
		else if (!pokerBestHand(char_array))
			std::cout << "Your password must contain the best hand preflop in Texas Holdem." << std::endl;
		else if (!halfUpper(char_array))
			std::cout << "Half of all the characters in your password must be uppercase." << std::endl;
		else if (!everyLetter(char_array))
			std::cout << "Your password must contain at least one instance of every letter." << std::endl;
		else if (!oddChar(char_array))
			std::cout << "Your password needs to have an odd number of characters." << std::endl;
		else if (!divisibleBy(char_array))
			std::cout << "The length of your password must be divisible by " << totalDivisible << " with no remainder." << std::endl;

		password = updatePass(password);

		char_array = password.c_str();

	} while (!isValid);
	
	std::cout << "Your password is valid." << std::endl;
}

#endif
