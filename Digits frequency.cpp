/*
Read an Integer N, then read N <= 200 integers.
For all the digits from 0 to 9,we want to know how many times appeared
*/
#include <iostream>
using namespace std;

int main() 
{
	int n, x, occurrence[10] = { 0 };

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x;

		if (x == 0)
			occurrence[0]++;

		while (x) 
		{
			int digit = x % 10;
			occurrence[digit]++;
			x /= 10;
		}
	}

	for (int i = 0; i <= 9; i++)
	{
		cout << i << " " << occurrence[i] << endl;
	}
}
