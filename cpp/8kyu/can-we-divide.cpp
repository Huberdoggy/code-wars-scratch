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

#include "/home/huberdoggy/c++/cpp20-template/headers/quick_headers.h"

using namespace std;

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

	cout << "Enter a number: ";
	cin >> num1;
	cout << "\nAnd another number: ";
	cin >> num2;
	cout << "\nNow one more: ";
	cin >> num3;

	bool result = isDivideBy(num1, num2, num3);
	cout << "\n\n" << result;
	return 0;
}