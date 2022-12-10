/*
Background: Fixed Sliding Window
● Assume a list: 1 0 3 -4 2 -6 9
● Sliding window (sublist): 3
● Let’s print all windows of length 3 and their sum
○ 1 0 3 ⇒ sum = 4
○ 0 3 -4 ⇒ sum = -1 [observe 0 3 are common]
○ 3 -4 2 ⇒ sum = 1
○ -4 2 -6 ⇒ sum = -8
○ 2 -6 9 ⇒ sum = 5
● Observe the relation between 2 consecutive windows:
○ They share all the elements except a change in the first / last element
● Variable sliding window: its size grows and shrinks


Read Integers K and N, (where K <= N). then read N < 200 integers.
● Find sub-array (consecutive numbers) of K elements that has maximum sum
Input: 3 7 1 0 3 -4 2 -6 9
○ Let’s list all sub-arrays of length 3
○ 1 0 3 ⇒ sum = 4
○ 0 3 -4 ⇒ sum = -1
○ 3 -4 2 ⇒ sum = 1
○ -4 2 -6 ⇒ sum = -8
○ 2 -6 9 ⇒ sum = 5
Output: 4 6 5 (Sub-array from indices 4 to 6 has maximum sum of 5)

*/

#include <iostream>
using namespace std;

int main()
{
	const int N = 199;
	int n, arr[N], k, min_index, max_sum = -10000000;

	cin >> k >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	// Try every window
	for (int i = 0; i < n - k + 1; i++) 
	{
		int sum = 0;
		for (int j = 0; j < k; ++j)
			sum += arr[i + j];

		if (sum > max_sum) 
		{
			max_sum = sum;
			min_index = i;
		}
	}
	cout << min_index << " " << min_index + k - 1 << " " << max_sum << "\n";

}
