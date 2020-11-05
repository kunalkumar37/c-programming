// C++ program to find the count 
// of subarrays of an Array 
// having all unique digits 

#include <bits/stdc++.h> 
using namespace std; 

// Function to check whether 
// the subarray has all unique digits 
bool check(vector<int>& v) 
{ 

	// Storing all digits occurred 
	set<int> digits; 

	// Traversing all the numbers of v 
	for (int i = 0; i < v.size(); i++) { 
		// Storing all digits of v[i] 
		set<int> d; 

		while (v[i]) { 
			d.insert(v[i] % 10); 
			v[i] /= 10; 
		} 

		// Checking whether digits of v[i] 
		// have already occurred 
		for (auto it : d) { 
			if (digits.count(it)) 
				return false; 
		} 

		// Inserting digits of v[i] in the set 
		for (auto it : d) 
			digits.insert(it); 
	} 

	return true; 
} 

// Function to count the number 
// subarray with all digits unique 
int numberOfSubarrays(int a[], int n) 
{ 

	int answer = 0; 

	// Traverse through all the subarrays 
	for (int i = 1; i < (1 << n); i++) { 
		// To store elements of this subarray 
		vector<int> temp; 

		// Generate all subarray 
		// and store it in vector 
		for (int j = 0; j < n; j++) { 
			if (i & (1 << j)) 
				temp.push_back(a[j]); 
		} 

		// Check whether this subarray 
		// has all digits unique 
		if (check(temp)) 

			// Increase the count 
			answer++; 
	} 

	// Return the count 
	return answer; 
} 

// Driver code 
int main() 
{ 
	int N = 4; 
	int A[] = { 1, 12, 23, 34 }; 

	cout << numberOfSubarrays(A, N); 
   // cout<<A[]<<N;
	return 0; 
} 
