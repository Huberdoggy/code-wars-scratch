/*  You ask a small girl, "How old are you?" She always says, "x years old",
    where x is a random number between 0 and 9.

	Write a program that returns the girl's age (0-9) as an integer.

	Assume the test input string is always a valid string.For example,
    the test input may be "1 year old" or
	"5 years old".The first character in the string is always a number.
    */

#include "/home/huberdoggy/c++/include/common.h"

int get_age(const std::string &she_said)
{
	std::string prefix{she_said[0]};
	return std::stoi(prefix);
}

int main()
{
	int prefix{get_age("7 years old.")};
	std::cout << typeid(prefix).name() << '\n';
	return 0;
}