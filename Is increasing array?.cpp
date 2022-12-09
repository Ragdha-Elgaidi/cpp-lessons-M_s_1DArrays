/*
Read an Integer N, then read N (<= 200) integers.
● Print YES if the array is increasing.
○ An array is increasing if every element is >= the previous number
● Inputs
○ 4 1 2 2 5 ⇒ YES
○ 5 1 0 7 8 9 ⇒ NO [0 is < 1, the previous number]
○ 2 -10 10 ⇒ YES
*/

#include<iostream>
using namespace std;


int main() 
{
	const int N = 200;
	int n, a[N];

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	
	bool increasing = 1; /** we will assume that the array is increasing at first **/
	for (int i = 1; i < n; i++)
	{		
		if (a[i] < a[i - 1]) 
		{
			increasing = 0;
			break;
		}
	}

	if (increasing)
	{
		cout << "YES\n";
	}
	else 
	{
		cout << "NO\n";
	}
	return 0;
}
