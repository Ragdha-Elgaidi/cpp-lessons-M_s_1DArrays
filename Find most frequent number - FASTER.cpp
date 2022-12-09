/*
Let’s use another array
● We will use a trick called
frequency array
○ We think of the index as value
○ If we have M values, create array of
M+1 values
● Iterate on the array and increment
each time you meet a number
● Find max in the array
*/
#include<iostream>
using namespace std;

int main() 
{
	int n, numbers[200];

	// Be careful: max value is 150.
	// So we need to access the array at 150
	int frequency[150 + 1] = { 0 };	// {0} set all to zeros

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> numbers[i];
		frequency[numbers[i]]++;
	}

	// just find max position in the array
	int max_pos = -1;

	for (int i = 0; i < 151; ++i)	// Iterate on ALL array
	{
		if (max_pos == -1 || frequency[max_pos] < frequency[i])
			max_pos = i;
	}
	cout << max_pos << " repeated " << frequency[max_pos] << " times";

	return 0;
}
