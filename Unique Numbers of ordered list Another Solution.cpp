#include <iostream>
#include <cassert>
using namespace std;

int main() 
{
	int n;   // assume n > 0
	cin >> n;

	// As the list is sorted, it is enough to check if an element as same as the previous or not
	// if equal, then duplicate. If not, then it is the first of its value!
	// Always make use of the given information :)

	int last_value = -1;
	for (int i = 0; i < n; i++)
	{
		int value;
		cin >> value;

		if (value != last_value)
			cout << value << " ";

		last_value = value;
	}
	return 0;
}
