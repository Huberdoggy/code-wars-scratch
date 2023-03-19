// Create a function that gives a personalized
//     greeting.This function takes two parameters
//     : name and owner.

//       Use conditionals to return the proper message :

//     case return name equals owner 'Hello boss' otherwise 'Hello guest'

#include "/home/huberdoggy/c++/include/quick_headers.h"
using namespace std;

string greet(const string name, const string owner)
{
	return name == owner ? "Hello boss" : "Hello guest";
}

int main()
{

	string name, owner;

	cout << "\nPlease enter your name: ";
	cin >> name;
	cout << "\n\nPlease enter the owner: ";
	cin >> owner;

	cout << "\n" << greet(name, owner);

	return 0;
}