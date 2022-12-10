/*
Read integer N ( <= 900), followed by reading N integers (0 <= value <= 500)
● Print the sorted list of the numbers
● Input: 13 1 5 5 2 5 7 2 3 3 3 5 2 7
● Output: 1 2 2 2 3 3 3 5 5 5 5 7 7
*/
#include <iostream>
#include <cassert>
using namespace std;

int main() 
{
	int n;
	cin >> n;
	const int MAX = 500 + 1;
	int frequency[MAX] = { 0 };

	// Given the values are small
	// We can count the frequency of each value
	// Then we iterate from small to big
	// If the frequency of a value is 3, we print it 3 times

	for (int i = 0; i < n; i++) 
	{
		int value;
		cin >> value;
		assert(0 <= value && value <= 500);
		frequency[value]++;
	}

	for (int i = 0; i < MAX; ++i)
	{
		while (frequency[i])
		{
			--frequency[i];
			cout << i << " ";
		}
	}
}

/*
This is called count sort algorithm.
The most efficient if values are small :)
*/
