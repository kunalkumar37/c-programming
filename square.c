// A naive CPP program to find sum of 
// first n odd numbers 
#include <iostream> 
using namespace std; 

// Returns the sum of first 
// n odd numbers 
int oddSum(int n) 
{ 
	int sum = 0, curr = 1; 
	for (int i = 0; i < n; i++) { 
		sum += curr; 
		curr += 2; 
	} 
	return sum; 
} 

// Driver function 
int main() 
{ 
	int n = 20; 
	cout << " Sum of first " << n 
		<< " Odd Numbers is: " << oddSum(n); 
	return 0; 
} 
