#include <stdio.h> 
int main() 
{ 
	unsigned long long  a = 12345, b = 94559; 

	printf("a = %ld, b = %ld\n", a, b); 
	printf("a&b = %ld\n", a & b); 

	printf("a|b = %ld\n", a | b); 

	printf("a^b = %ld\n", a ^ b); 

	printf("~a = %ld\n", a = ~a); 

	printf("b<<1 = %ld\n", b << 1); 

	printf("b>>1 = %ld\n", b >> 1); 

	return 0; 
} 
