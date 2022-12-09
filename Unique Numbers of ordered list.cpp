/*
● Read integer N ( < 1000), followed by reading N integers (0 <= value <= 500)
● The N numbers are ordered from small to large
● Print the unique list of the numbers, but preserve the given order
● Input: 12 1 1 2 2 2 5 6 6 7 8 9 9
● Output: 1 2 5 6 7 8 9
○ Observe: input is sorted list
● Optional Constraints:
○ Don’t use nested loops!
○ Use only 1 single array
○ Or Do it without even using arrays at all
*/
#include <iostream>
#include <cassert>
using namespace std;

int main()
{
	int arr[999];	// < 1000 = 999 elements

	int n;   // assume n > 0
	cin >> n;

	// Let's do it first with an array
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	// As the list is sorted, it is enough to check if an element as same as the previous or not
	// if equal, then duplicate. If not, then it is the first of its value!
	// Always make use of the given information :)
	cout << arr[0] << " ";
	for (int i = 1; i < n; i++)
	{
		assert(arr[i] >= arr[i - 1]);  // make sure input is ordered

		if (arr[i] != arr[i - 1])
			cout << arr[i] << " ";
	}
	return 0;
}
