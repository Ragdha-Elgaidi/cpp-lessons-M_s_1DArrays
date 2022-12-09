/*
Read an Integer N, then read N <= 200 integers. Find the value that repeated
the most number of times.
○ Each integer is 0 <= integer <= 150
● Example for array: 1 2 1 3 1 5 5
○ 1 repeated 3 times: the largest
○ 2 repeated 1 time
○ 5 repeated 2 times
*/
#include<iostream>
using namespace std;

int main() 
{
	int n, numbers[200];

	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> numbers[i];

	int max_value = -1, max_repeat = -1;

	for (int i = 0; i < n; ++i)
	{
		// count how many times numbers[i] exists
		int repeat = 0;
		for (int j = 0; j < n; ++j)
			repeat += numbers[i] == numbers[j];

		if (max_repeat == -1 || max_repeat < repeat)
			max_repeat = repeat, max_value = numbers[i];
	}
	cout << max_value << " repeated " << max_repeat << " times";

	return 0;
}
