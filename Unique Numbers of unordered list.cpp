/*
Read integer N ( <= 900), followed by reading N integers (0 <= value <= 500)
● Print the unique list of the numbers, but preserve the given order
Input: 13 1 5 5 2 5 7 2 3 3 3 5 2 7
● Output: 1 5 2 7 3
*/

#include <iostream>
#include <cassert>
using namespace std;

int main() 
{
	int n;
	cin >> n;
	// Again, mark in an array to know if visited or not! No nested loops!
	const int MAX = 500 + 1;
	int is_visited[MAX] = { 0 };

	for (int i = 0; i < n; i++) 
	{
		int value;
		cin >> value;
		assert(0 <= value && value <= 500);

		if (!is_visited[value])
			cout << value << " ";
		is_visited[value] = 1;
	}
}
