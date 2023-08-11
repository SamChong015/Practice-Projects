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

void PasswordMaker()
{
	std::map<std::string, std::function<void()>> passwordRules;

	passwordRules["Must have at least 8 characters"] = char8;
	passwordRules["Must have at least one special character"] = specialchar;
	passwordRules["Must have a country that Subway is in"] = hasSubway;
	passwordRules["Must have exactly 10 digits"] = digits10;
	passwordRules["Digits must add to 45"] = ;
	passwordRules["Have a word that rhymes with Jake"] = jakeRhyme;
	passwordRules["Every fifth character must be a special character"] = specialchar5;
	passwordRules["Include the name of the best Engineering school in Canada"] = engSchool;
	passwordRules["Must include a colour"] = colour;
	passwordRules["Can't have more than x of any character"] = charlim;

	char alphabet[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

	while(char_array.length() < 8 && specialChar(char_array) &&)
		if(char_array.length() < 8)
			std::cout << "Must have at least 8 characters." << std::endl;
		else if(specialChar(char_array))
			std::cout << "Must have at least one special character." <<std::endl;

	const char* char_array = input.c_str();

	std::cout << "Welcome to Password Maker, have fun :)" << std::endl;
	std::string password;
	system("pause");

	std::cout << "Create your password" << std::endl;
	std::cin >> password;
}

#endif
