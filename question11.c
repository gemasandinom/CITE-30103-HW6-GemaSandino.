#include <stdio.h>

int main() {
	int a, b, add, sub, mult, div, rem;

	printf("Enter one integer: ");
	scanf("%d", &a);

	printf("Enter another integer: ");
	scanf("%d", &b);

	add = a + b;
	printf("Addition: %d\n", add);

	sub = a - b;
	printf("Subtraction: %d\n", sub);

	mult = a * b;
	printf("Multiplication: %d\n", mult);

	if (b != 0) {
		div = a / b;
		printf("Division: %d\n", div);
		rem = a % b;
		printf("Remainder: %d\n", rem);
	} else {
		printf("Error: division by zero\n");
	}
	
	return 0;
}
