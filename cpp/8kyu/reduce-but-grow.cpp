// Given a non - empty array of integers,
//     return the result of multiplying the values together in order.Example :

//     [ 1, 2, 3, 4 ] = > 1 * 2 * 3 * 4 = 24

#include <iostream>
#include <vector>

using namespace std;

int grow(vector<int> nums)
{
	int result{};

	for (int i = 0; i < nums.size(); i++) {

		i == 0 ? result = nums[i] : result *= nums[i];
	}
	cout << "Result is " << result;
	return 0;
}

int main()
{
	vector<int> multVector{2, 3, 5, 2};
	grow(multVector);
}