// Your task is to create the functionisDivideBy(or is_divide_by) to check
//     if an integer number is divisible by both integers a and b
// 	.

//     A few cases :

//     (-12, 2, -6)
// 	->true(-12, 2, -5)
// 	->false

//     (45, 1, 6)
// 	->false(45, 5, 15)
// 	->true

//     (4, 1, 4)
// 	->true(15, -5, 3)
// 	->true

#include "/home/huberdoggy/c++/include/common.h"

bool isDivideBy(int number, int a, int b)
{
	if (number % a == 0 && number % b == 0) {
		return true;
	}
	return false;
}

int main()
{
	int num1{}, num2{}, num3{};

	std::cout << "Enter a number: ";
	std::cin >> num1;
	std::cout << "\nAnd another number: ";
	std::cin >> num2;
	std::cout << "\nNow one more: ";
	std::cin >> num3;

	bool result = isDivideBy(num1, num2, num3);
	std::cout << std::boolalpha;
	std::cout << "\n\n" << result << '\n';
	return 0;
}