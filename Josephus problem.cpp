/*
Read integers N (< 200) and K (<= 1000000). Code for small K first
○ Find the game winner for following game:
● There is a group of N people in Circle numbered 1, 2, …. N
○ Someone is a master of the game.
○ He starts from Person #1. Count K. Then remove this person from the circle.
○ He keeps doing so till only 1 person remains. This is the winner.
● Input 4 2
○ Means we have people: 1, 2, 3, 4. Master starts at 1
○ Count 2 persons (2 removed), start from 3
○ Count 2 persons (4 removed), start from 1
○ Count 2 persons (3 removed), 1 is winner
● Output
○ People removed in order: 2 4 3 1 
*/
#include<iostream>
using namespace std;

int main() 
{
	int n, k;

	cin >> n >> k;

	// Let's mark them in 0-based array
	bool is_removed[199] = { 0 };

	int last_pos = 0;	
	
	// The first position to simulate from it
	// We will just simulate the running.
	// Start from last killed position
	// Count K times, but skip these killed positions already
	for (int t = 0; t < n; ++t)
	{
		int remaining_alive = n - t;

		int current_k = k;
		// Ignore this if/else condition for now. See bottom of code.
		//It is for handling very large K
		if (k % remaining_alive == 0)
			current_k = remaining_alive;
		else
			current_k = k % remaining_alive;


		int step = 0;
		int last_person = -1;
		while (step < current_k)
		{
			if (is_removed[last_pos] == 0)	// not removed. consider it and increment the step
				last_person = last_pos, step++;
			last_pos = (last_pos + 1) % n;	// loop back to the array if needed
		}

		is_removed[last_person] = 1;
		cout << last_person + 1 << "\n";
	}
	/*
	  About the if else. We want to handle when k is so big
	  Let's say remaining_alive = 4 and k = 6
	  		This is the same as if k = 2   (6%4 = 2)
	 
	  	Similarly
	  	Let's say remaining_alive = 4 and k = 10
	  		This is the same as if k = 2   (10%4 = 2)
	 
	  	This is the same as the useless cycles in the clock
	  		4 is same as any 4 + k*12
	 
	  	So in general, we don't need to iterate k times
	  		we only need: k % remaining_alive
	 
	  	But we need 1 special case handling to k % remaining_alive == 0
	  		In this case we iterate remaining_alive steps
	 */
	return 0;
}
