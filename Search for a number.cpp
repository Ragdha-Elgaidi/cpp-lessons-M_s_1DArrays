/*
Read an Integer N, then read N <= 200 integers [0 <= A[i] <= 500].
○ We will search in this array for numbers
● Then read integer Q (for a number of queries), then read Q integers
○ For each integer, find the last occurance in the array. Print its index
○ If doesn’t exist, print -1
*/
#include<iostream>
using namespace std;

int main()
{
	int n, q, a[200];

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	cin >> q;
	while (q--) 
	{
		int num;
		cin >> num;

		int pos = -1;
		// search from the end
		for (int i = n - 1; i >= 0; --i) 
		{
			if (a[i] == num) 
			{
				pos = i;
				break;
			}
		}
		cout << pos << "\n";
	}
	return 0;
}
