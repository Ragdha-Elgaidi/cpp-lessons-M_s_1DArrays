/*
Read an Integer N, then read N <= 200 integers.
○ In-place: Change the current array, don’t use 2 arrays
● Simple idea: Iterate from the begin and end in same time
○ Swap the 2 positions
○ Do this tell the middle only
● Let say array is 1 2 3 4 5 6 7 8
○ Step 1: swap (1, 8) ⇒ 8 2 3 4 5 6 7 1
○ Step 2: swap (2, 7) ⇒ 8 7 3 4 5 6 2 1
○ Step 3: swap (3, 6) ⇒ 8 7 6 4 5 3 2 1
○ Step 4: swap (4, 6) ⇒ 8 7 6 5 4 3 2 1
■ Stop after n/2 steps
*/
#include<iostream>
using namespace std;

int main()
{
	int n, numbers[200];

	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> numbers[i];

	for (int i = 0; i < n / 2; ++i)
	{
		int last = n - i - 1;
		// swap positions: i and last
		int temp = numbers[i];
		numbers[i] = numbers[last];
		numbers[last] = temp;
	}

	for (int i = 0; i < n; ++i)
		cout << numbers[i] << " ";
	return 0;
}
