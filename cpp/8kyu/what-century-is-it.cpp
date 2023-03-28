// The first century spans from the year 1 up to and including the year 100,
//     the second century - from the year 101 up to and including the year 200,
//     etc.

//     Task Given a year,
//     return the century it is in.

// 	   Examples 1705 -- > 18 1900 -- > 19 1601 -- > 17 2000 -- > 20

#include "/home/huberdoggy/c++/include/common.h"

int centuryFromYear(int year)
{
	int resultYear{};
	double dblCentury = (double)year;
	double decNum = dblCentury / 100;
	int truncate = (int)decNum;
	double diff = decNum - truncate;
	diff >= 0.01 ? resultYear = truncate + 1 : resultYear = truncate;
	return resultYear;
}

int main()
{
	std::vector<int> centuries{1601, 1705, 1900, 2000};

	for (int x : centuries)

		printf("\nYear %d is in the %dth century.", x,
		       centuryFromYear(x));
	std::cout << std::endl;
	return 0;
}