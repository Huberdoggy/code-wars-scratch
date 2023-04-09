/* We need a function that can transform a string into a number.
What ways of achieving this do you know?
Note: Don't worry, all inputs will be strings, and every string is a perfectly
valid representation of an integral number. Examples "1234" -- > 1234 "605" -- >
605 "1405" -- > 1405 "-7" -- > -7
*/

#include "common_nix.h"

int string_to_number(const std::string &s)
{
	return std::stoi(s);
}

int main()
{

	std::cout << string_to_number("1234") << '\n';
	std::cout << string_to_number("605") << '\n';
	std::cout << string_to_number("1405") << '\n';
	std::cout << string_to_number("-7") << '\n';

	return 0;
}