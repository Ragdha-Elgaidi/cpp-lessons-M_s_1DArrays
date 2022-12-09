/*
Trick: Start j from i+1
○ Avoid duplicate bug
○ Avoid duplicate processing
■ We test positions (2, 4) and then test (4,2) which is same locations!
*/
#include<iostream>
using namespace std;

int main() 
{
	int n, numbers[200];

	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> numbers[i];

	int idx1 = -1, idx2 = -1;

	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (idx1 == -1)
				idx1 = i, idx2 = j;
			else if (numbers[idx1] + numbers[idx2] <
				numbers[i] + numbers[j])
				idx1 = i, idx2 = j;
		}
	}
	cout << numbers[idx1] << " " << numbers[idx2];

	return 0;
}
