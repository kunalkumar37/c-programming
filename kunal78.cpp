// C++ program to print all possible 
// substrings of a given string 

#include<bits/stdc++.h> 
using namespace std; 

// Function to print all sub strings 
void subarray(int arr[], int n) 
{ 
	// Pick starting point 
	for (int len = 1; len <= n; len++) 
	{	 
		// Pick ending point 
		for (int i = 0; i <= n - len; i++) 
		{ 
			// Print characters from current 
			// starting point to current ending 
			// point. 
			int j = i + len - 1;			 
			for (int k = i; k <= j; k++) 
				cout << arr[k]; 
			
			cout << endl; 
		} 
	} 
} 

// Driver program to test above function 
int main() 
{ 
	int arr[10000] ; 
    scanf("%d",&arr);
    
    int z=sizeof(arr)/sizeof(arr[0]);
	subarray(arr,z); 
	return 0; 
} 
