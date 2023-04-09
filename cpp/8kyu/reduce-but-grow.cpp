// Given a non - empty array of integers,
//     return the result of multiplying the values together in order.Example :

//     [ 1, 2, 3, 4 ] = > 1 * 2 * 3 * 4 = 24

#include "common_nix.h"

int grow(std::vector<int> nums)
{
	int result{};

	for (int i = 0; i < nums.size(); i++) {

		i == 0 ? result = nums[i] : result *= nums[i];
	}
	std::cout << "Result is " << result << std::endl;
	return 0;
}

int main()
{
	std::vector<int> multVector{2, 3, 5, 2};
	grow(multVector);
}