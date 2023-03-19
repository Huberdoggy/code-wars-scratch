/*
Consider an array/list of sheep where some sheep may be missing from their
place. We need a function that counts the number of sheep present in the array
(true means present).

For example,

[true,  true,  true,  false,
  true,  true,  true,  true ,
  true,  false, true,  false,
  true,  false, false, true ,
  true,  true,  true,  true ,
  false, false, true,  true]
The correct answer would be 17.

Hint: Don't forget to check for bad values like null/undefined
*/

#include "/home/huberdoggy/c++/include/quick_headers.h"

int count_sheep(std::vector<bool> arr)
{
	int truthy = 0;

	for (int i = 0; i < arr.size(); i++) {

		if (!arr[i]) {
			continue;
		} else {
			truthy += 1;
		}
	}
	return truthy;
}

int main()
{

	std::vector<bool> bArr{true, true,  true,  false, true, true,
			       true, true,  true,  false, true, false,
			       true, false, false, true,  true, true,
			       true, true,  false, false, true, true};

	int result = count_sheep(bArr);
	printf("\nNumber of sheep in the vector: %d", result);

	return 0;
}