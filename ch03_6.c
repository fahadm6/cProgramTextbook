#include <stdio.h>


int main() {

	unsigned int x;
	unsigned int y;
	unsigned int i = 1;
	unsigned int power = 1;

	printf("Please Enter a number for x: ");
	scanf ("%d", &x);
	printf("Please Enter a number for y: ");
	scanf ("%d", &y);

	while ( i <= y) {
		power  = power * x;
		++i;

	}

	printf("The power of x raised to the y is: %d\n", power);
}

