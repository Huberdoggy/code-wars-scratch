// Create a function that gives a personalized
//     greeting.This function takes two parameters
//     : name and owner.

//       Use conditionals to return the proper message :

//     case return name equals owner 'Hello boss' otherwise 'Hello guest'

#include "common_nix.h"

std::string greet(const std::string name, const std::string owner)
{
	return name == owner ? "Hello boss" : "Hello guest";
}

int main()
{

	std::string name, owner;

	std::cout << "\nPlease enter your name: ";
	std::cin >> name;
	std::cout << "\n\nPlease enter the owner: ";
	std::cin >> owner;

	std::cout << "\n" << greet(name, owner);

	return 0;
}