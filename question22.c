#include <stdio.h>

int main() {
	int num, original, reverse = 0;

	printf("Enter a positive integer: ");
	scanf("%d", &num);

	original = num;

	while (num > 0) {
		reverse = reverse * 10 + (num % 10);
		num /= 10;
	}

	printf("Original number: %d\n", original);
	printf("Reversed number: %d\n", reverse);

	return 0;
}
