#ifndef PASSWORDMAKER_H
#define PASSWORDMAKER_H

#include <iostream>
#include <functional>
#include <map>
#include <ctype.h>

std::string updatePass(std::string password)
{
	std::cout << "Enter your password ";
	std::cin >> password;
	return password;
}

bool specialChar(const char* char_array)
{
	for(int i = 0; i < char_array.length(); i++)
	{
		if(isalpha(char_array[i]) && char_array[i] !< 0 && char_array[i] !>9)
			return true;
	}
} 

bool hasSubway(std::string password)
{
	std::string countries[] = {"china", "canada", "unitedstates", "japan", "singapore", "hongkong", "germany", "taiwan", "unitedkingdom", "southkorea", "russia", "france", "spain", "india", "argentina", "mexico", "philippines", "newzealand", "malaysia", "brazil", "australia", "unitedarabemirates"};
	//add make all lowercase, remove spaces
	for(int i = 0; i < countries.size(); i++)
	{
		if(password.find(countries) != string::npos)
			return true;
	}
	return false;
}

bool digits10(const char* char_array)
{
	int count;
	for(int i = 0; i <char_array.length(); i++)
		if(char_array[i].isDigit())
			count++;
	if(count == 10)
		return true;
	else
		return false;
}

bool digitsadd45(const char* char_array)
{
	int count;
	for(int i = 0; i <char_array.length(); i++)
		if(char_array[i].isDigit())
			count =+ char_array[i];
	if(count == 45)
		return true;
	else
		return false;
}

bool specichar7(const char* char_array)
{
	for(int i = 0; i < char_array.length(); i+7)
		if(char_array[i].isDigit() || char_array[i}.isalpha
			return false;
	return true;
}

bool colourRainbow(std::string password)
{
	std::string colours[] = {"red", "orange", "yellow", "green", "blue", "indigo", "violet"};
	//add lowercase, remove spaces
	for(int i = 0; i < countries.size(); i++)
	{
		if(password.find(colours) != string::npos)
			return true;
	}
	return false;
}

void PasswordMaker()
{
	passwordRules["Can't have more than x of any letter"] = charlim;

	char alphabet[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

	while(char_array.length() < 8 && !specialChar(char_array) && !hasSubway(password) && !digits10(char_array) && !digitsadd45(char_array) && !specichar7(char_array) && !colourRainbow(password))
		if(char_array.length() < 8)
			std::cout << "Must have at least 8 characters." << std::endl;
		else if(!specialChar(char_array))
			std::cout << "Must have at least one special character." << std::endl;
		else if(!hasSubway(password))
			std::cout << "Your password must contain a country that has Subway." << std::endl;
		else if(!digits10(char_array))
			std::cout << "Your password must contain exactly 10 digits." << std::endl;
		else if(!digitsadd45(char_array))
			std::cout << "The digits in your password must add to 45." << std::endl;
		else if(!specichar7(char_array))
			std::cout << "Starting at the first character, ever seventh character must be a special character." << std::endl;
		else if(!colourRainbow(password))
			std::cout << "Your password must include a colour from the rainbow." << std::endl;


	const char* char_array = input.c_str();

	std::cout << "Welcome to Password Maker, have fun :)" << std::endl;
	std::string password;
	system("pause");

	std::cout << "Create your password" << std::endl;
	std::cin >> password;
}

#endif
