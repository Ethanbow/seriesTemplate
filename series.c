#include <stdio.h>
int main() {
	int x1 = 0;	// Initial value, might not need this variable
	int x2 = 2;	// Another initial, might not need this either
	int d;		// The difference between each sequence value
	int xn; 	// the current x value
	int xnm1; 	// xn minus 1, the previous value. Is this _really_ needed?
	int n = 3; 	// Sequence entry number. Starts at 3 as n=1 and n=2 are
			// already known above (x1 and x2)

	// d = ... COMPLETE THIS EXPRESSION

	while ( /*condition*/ ) {
		// Calculate current x value
		xn /* = ... */;

		// printf(" ");	// FILL ME IN	
		
		xnm1 = xn; // Make past value into present value
	}	
	return 0;
}
