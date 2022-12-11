/*
Read an Integer N, then read N (< 200) integers.
● Output: Count how many subarrays are increasing in the array.
● E.g. If input is 1 2 3 4
○ We can find all sublists of length 1 ⇒ [1], [2], [3], [4]
○ All sublists of length 2 ⇒ [1, 2], [2, 3], [3, 4]
○ All sublists of length 3 ⇒ [1, 2, 3], [2, 3, 4]
○ All sublists of length 4 ⇒ [1, 2, 3, 4]
● Inputs ⇒ Outputs
○ 4 1 2 3 4 ⇒ 10 [10 sub-arrays from previous example, all are increasing]
○ 4 4 3 2 1 ⇒ 4 [only sub-arrays of length 1 can be considered]
○ 4 10 20 1 5 ⇒ 6
● Easy using 3 nested loops. Medium using 2 loops. Hard with 1 loop
*/

#include <iostream>
using namespace std;

int main() 
{
	int a[199];

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	int result = 0;

	// For every possible array length
	// Try all possible sub-arrays
	// Verify and sum
	for (int len = 1; len <= n; ++len)
	{
		for (int st = 0; st < n - len + 1; ++st)
		{
			bool is_ok = true;
			for (int k = 1; k < len && is_ok; ++k) 
			{
				if (a[st + k] <= a[st + k - 1])
					is_ok = false;
			}
			result += is_ok;
		}
	}

	cout << result << endl;

	return 0;
}
