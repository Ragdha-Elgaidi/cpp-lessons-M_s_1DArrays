/*
Read an integer N (< 200), then read N integers.
○ Assume all values [0, 2000]
● Print the array after doing the following operations:
○ Find minimum number in these numbers.
○ Find maximum number in these numbers.
○ Replace each minimum number with maximum number and Vise Versa.
*/
#include<iostream>
using namespace std;

int main()
{

	const int N = 199;	// < 200 = 199 elements

	int n, a[N], mn = 10000, mx = -1;

	cin >> n;
	for (int i = 0; i < n; i++) 
	{
		cin >> a[i];
		if (a[i] < mn) 
		{
			mn = a[i];
		}
		if (a[i] > mx) 
		{
			mx = a[i];
		}
	}

	for (int i = 0; i < n; i++) 
	{
		if (a[i] == mn)
			a[i] = mx;
		else if (a[i] == mx)
			a[i] = mn;
	}

	for (int i = 0; i < n; i++) 
	{
		if (i)
			cout << " ";
		cout << a[i];
	}
	return 0;
}
