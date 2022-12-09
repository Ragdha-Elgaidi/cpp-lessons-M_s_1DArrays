/*
Read integer N (< 1000), then read N integers of an array.
● Determine if the array is palindrome or not.
● An array is called palindrome if it reads the same backward and forward
○ for example, arrays { 1 } and { 1,2,3,2,1 } are palindrome
○ while arrays { 1,12 } and { 4,7,5,4 } are not.
● Inputs ⇒ Outputs
○ 5 1 3 2 3 1 ⇒ YES
○ 4 1 2 3 4 ⇒ NO
*/

#include <iostream>
using namespace std;

int main() 
{
	// The size of the array should be larger than
	// the maximum value of N
	int arr[999];

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	// We need to compare the value at the left half
	// to those in the right half
	// The value at index (0) should be compared to the value at index (N-1)
	// Then the value at index (1) should be compared to the value at index (N-2)
	// So, clearly we need to increment the left index and decrement the right one
	// On reaching the index N/2, we are sure that we have compared all the elements
	// of both sides so we don't need to do anything and the array is palindrome
	for (int i = 0; i < N / 2; i++)
	{
		if (arr[i] != arr[N - 1 - i]) 
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}
