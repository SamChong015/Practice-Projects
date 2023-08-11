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
	std::string countries[] = {"China", "Canada", "United States", "Japan", "Singapore", "Hong Kong", "Germany", "Taiwan", "United Kingdom", "South Korea", "Russia", "France", "Spain", "India", "Argentina", "Mexico", "Philippines", "New Zealand", "Malaysia", "Brazil", "Australia", "United Arab Emirates",
"china", "canada", "united states", "japan", "singapore", "hong kong", "germany", "taiwan", "united kingdom", "south korea", "russia", "france", "spain", "india", "argentina", "mexico", "philippines", "new zealand", "malaysia", "brazil", "australia", "united arab emirates",
"UnitedStates", "HongKong", "UnitedKingdom", "SouthKorea", "NewZealand", "UnitedArabEmirates", "unitedStates", "hongKong", "unitedKingdom", "southKorea", "newZealand", "United ArabEmirates", "UnitedArab Emirates", "Unitedstates", "Hongkong", "Unitedkingdom", "Southkorea", "Newzealand", "united ArabEmirates", "unitedArab Emirates",
"United arabEmirates", "Unitedarab Emirates", "United states", "Hong kong", "United kingdom", "South korea", "New zealand", "United Arabemirates", "UnitedArab emirates", "united States", "hong Kong", "united Kingdom", "south Korea", "new Zealand",
"united arabEmirates", "unitedarab Emirates", "united Arabemirates", "unitedArab emirates", "United arabemirates", "Unitedarab emirates"};
	for(int i = 0; i < countries.size(); i++)
	{
		if(s1.find(s2) != string::npos)
			return true;
	}
	return false;
}

void PasswordMaker()
{
	std::map<std::string, std::function<void()>> passwordRules;
	passwordRules["Must have exactly 10 digits"] = digits10;
	passwordRules["Digits must add to 45"] = ;
	passwordRules["Have a word that rhymes with Jake"] = jakeRhyme;
	passwordRules["Every fifth character must be a special character"] = specialchar5;
	passwordRules["Include the name of the best Engineering school in Canada"] = engSchool;
	passwordRules["Must include a colour"] = colour;
	passwordRules["Can't have more than x of any character"] = charlim;

	char alphabet[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

	while(char_array.length() < 8 && !specialChar(char_array) && !hasSubway(password))
		if(char_array.length() < 8)
			std::cout << "Must have at least 8 characters." << std::endl;
		else if(!specialChar(char_array))
			std::cout << "Must have at least one special character." << std::endl;
		else if(!hasSubway(password))
			std::cout << "Your password must contain a country that has Subway." << std::endl;

	const char* char_array = input.c_str();

	std::cout << "Welcome to Password Maker, have fun :)" << std::endl;
	std::string password;
	system("pause");

	std::cout << "Create your password" << std::endl;
	std::cin >> password;
}

#endif
