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
	int len = 1;


	// Let say we have increasing sequence of length 4. It means we have 4*5/2 valid sub arrays
	// So, find each maximual sub-sequence and add them using n*(n+1) /2
	// Or just increment with length each time we extend it

	// We will count sequence of length  > 1. Later add +n
	for (int i = 1; i < n; i++)
	{
		// Keep expand len as long as the sub-array is increasing. 
		if (a[i - 1] <= a[i])
		{
			result += len;
			++len;
		}
		else
			len = 1;
	}

	cout << result + n << endl;

	return 0;
}
