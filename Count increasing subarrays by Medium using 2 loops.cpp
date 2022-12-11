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

	// for every index i in the array we consider it as the start of a subarry
	for (int i = 0; i < n; i++)
	{
		// adding one to result because any subarray of size one is considered increasing
		// this subarray will include the value in index i
		result++;
		// trying expanding a subarray which starts with at index i and
		// if this subarray still increasing then we add one to our result
		// otherwise we should stop expanding this subarray
		for (int j = i + 1; j < n; j++) 
		{
			// if the current value is greater than or equal the previous one
			// then it's increasing
			if (a[j] >= a[j - 1])
				result++;
			// otherwise stop
			else
				break;
		}
	}

	// printing the result
	cout << result << endl;

	return 0;
}
