#ifndef PASSWORDMAKER_H
#define PASSWORDMAKER_H

#include <iostream>
#include <functional>
#include <map>

std::string password;

bool char8()
{

}

bool specialchar()
{

}

bool hasSubway()
{

}

bool digits10()
{

}

bool digitsAdd()
{

}

bool jakeRhyme()
{

}

bool specialchar5()
{

}

bool engSchool()
{

}

bool colour()
{

}

bool charlim()
{

}



void PasswordMaker()
{
	std::map<std::string, std::function<void()>> passwordRules;

	passwordRules["Must have at least 8 characters"] = char8;
	passwordRules["Must have at least one special character"] = specialchar;
	passwordRules["Must have a country that Subway is in"] = hasSubway;
	passwordRules["Must have exactly 10 digits"] = digits10;
	passwordRules["Digits must add to 45"] = digitsAdd;
	passwordRules["Have a word that rhymes with Jake"] = jakeRhyme;
	passwordRules["Every fifth character must be a special character"] = specialchar5;
	passwordRules["Include the name of the best Engineering school in Canada"] = engSchool;
	passwordRules["Must include a colour"] = colour;
	passwordRules["Can't have more than x of any character"] = charlim;



	std::cout << "Welcome to Password Maker, have fun :)" << std::endl;

	system("pause");

	std::cout << "Create your password" << std::endl;
	std::cin >> password;
}

#endif
