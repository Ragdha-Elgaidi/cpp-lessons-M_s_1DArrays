/*
The first terms of this sequence are 0, 1, 3, 6, 2, 7, …
○ So last term value is 7 and its index is 5 (zero based)
○ The next value is either:
■ LastValue - LastIndex - 1 if the following 2 conditions are satisfied:
● value > 0 and It did not appear before
● E.g. 7 (last value) - last index (5) - 1 = 7-5-1 = 1 (> 0 but already exists)
■ Or LastValue + LastIndex + 1 = 7+5+1 = 13
● Read integer zero-based index ([1, 200]) and print the value of this index
○ E.g. (6 ⇒ 13), (9 ⇒ 21), (17 ⇒ 25)
● The series is: 0, 1, 3, 6, 2, 7, 13, 20, 12, 21, 11, 22, 10, 23, 9, 24, 8, 25, 43
*/
#include <iostream>
using namespace std;

int main() 
{
	const int N = 201;	// Be careful. last value is 200, so we need array 201
	int sequence[N], indx;

	int occurrence[N * 10] = { 0 };	// possibly i-th value is much less than 10 * i

	cin >> indx;
	sequence[0] = 0;
	occurrence[0] = 1;	// use a value as an index in the array

	for (int i = 1; i <= indx; i++) 
	{
		int cur = sequence[i - 1] - (i - 1) - 1;

		if (cur < 0 || occurrence[cur])
			cur = sequence[i - 1] + (i - 1) + 1;

		sequence[i] = cur;
		occurrence[cur] = 1;
	}

	cout << sequence[indx];
}
